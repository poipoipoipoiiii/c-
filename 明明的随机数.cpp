#include <iostream>
int n,i,book=0;
int a[105],b[1005];
int main(){
    using namespace std;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=1;
    }
    for(i=1;i<=1000;i++){
        if(b[i]==1)
            book++;
    }
    cout<<book<<endl;
    for(i=1;i<=1000;i++){
        if(b[i]==1)
            cout<<i<<" ";
    }
    return 0;
}
