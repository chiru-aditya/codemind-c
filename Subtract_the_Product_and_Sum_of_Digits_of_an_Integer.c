#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int p,s;
    p=1;
    s=0;
    while (a){
        int r=a%10;
        a=a/10;
        p*=r;
        s+=r;
    }
    cout<<p-s;
    
}