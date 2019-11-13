#include <iostream>
int n,a;
int main(){
    using namespace std;
    cin>>n;
    while(n){
        a=a*10+n%10;
        n=n/10;
    }
    cout<<a<<endl;
    return 0;
}
