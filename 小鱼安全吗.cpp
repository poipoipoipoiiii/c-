#include <iostream>
double s,x,d=0,v=7;
int main(){
    using namespace std;
    cin>>s;
    cin>>x;
    while(d<s-x){
        d=d+v;
        v=v*0.98;
    }
    if(v*0.98<=s+x-d)
        cout<<"y"<<endl;
    else
        cout<<"n"<<endl;
    return 0;
}
