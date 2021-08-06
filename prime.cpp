#include<iostream>
using namespace std;
void prime(int a,int b=2){
    if(b==a){
        cout<<"el numero es primo";
    }
    else{
        if(a%b==0 || a==1){
            cout<<"el numero no es primo";
            return;
        }
        if(a>=2){
            prime(a,++b);
        }
    }
}
int main(){
    int m;
    cout<<"set number to evaluate: ";
    cin>>m;
    prime(m);
}
