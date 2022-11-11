#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n>0){
    
    return func(n-1) +n;
    
    }

    return 0;
}

int main(){
  int a=5;
  cout<<func(a-1)<<endl;

  return 0;
}