int n,i;
int num[105];
#include <iostream>
int main(){
    using namespace std;
    cin>>n;//用来计算多项式次数
    for(i=n;i>=0;i--){
        cin>>num[i];
        if(num[i]){
            if(num[i]>0 && i!=n)
                cout<<"+";
            if(abs(num[i])>1 || i == 0)
                cout<<num[i];
            if(num[i] == -1 && i)
                cout<<"-";
            if(i>1)
                cout<<"x^"<<i;
            if(i == 1)
                cout<<"x";
        }
    }
    return 0;
}
