#include<bits/stdc++.h>
using namespace std;

void funcB(int n);

void funcA(int n){
    if(n>0){
        cout<<n<<endl;

        funcB(n-1);
    }
}

void funcB(int n){
    if(n>1){
        cout<<n<<endl;
        funcA(n/2);
    }
}

int main(){
  int a=20;
  funcA(20);

  return 0;
}