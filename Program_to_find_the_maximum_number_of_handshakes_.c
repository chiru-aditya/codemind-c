#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=0;
    for (int i=1; i<a ;i++){
        b+=i;
    }
    cout<<b;
}