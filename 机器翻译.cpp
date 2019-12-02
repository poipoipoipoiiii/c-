#include <iostream>
#include <queue>
int m,n,i,ans=0;
bool book[1010];
std::queue<int> q;
int main(){
    using namespace std;
    cin>>m>>n;
    for(i=0;i<=n;i++){
        int x;
        cin>>x;
        if(book[x])
            continue;
        else{
            if(q.size()>=m){
                    book[q.front()]=false;
                    q.pop();
                }
            q.push(x);
            book[x]=true;
            ans++;
            }
        }
    cout<<ans<<endl;
    return 0;
    }
