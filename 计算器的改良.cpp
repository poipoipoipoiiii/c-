#include <iostream>
#include <cstdio>
int sign=1,p=1,coe,num,x;
char n,word;
bool book;
int main(){
    using namespace std;
    while(n!='\n'){
        n=getchar();
        if(n == '-'){
            num+=p*sign*x;
            sign=-1;
            x=0;
            book=0;
        }
        if(n == '+'){
            num+=p*sign*x;
            sign=1;
            x=0;
            book=0;
        }
        if(n == '='){
            num+=p*sign*x;
            x=0;
            sign=1;
            p=-1;
            book=0;
        }
        if(n>='a' && n<='z'){
            if(book){
                coe+=x*sign*p;
                x=0;
            }
            else
                coe+=sign*p;
            word=n;
            book=0;
        }
        if(n>='0' && n<='9'){
            x=x*10+n-'0';
            book=1;
        }
    }
    num+=x*sign*p;
    double res=double(-num*1.0/coe);
    if(res == -0.0)
        res=0;
    printf("%c=%.3lf",word,res);
    return 0;
        }
