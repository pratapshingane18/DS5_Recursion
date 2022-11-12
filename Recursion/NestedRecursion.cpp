#include<bits/stdc++.h>
using namespace std;

int func(int n){
    if(n > 100){
        return n-10;
    }
    else{
        return func(func(n+11));
    }
}

int main(){
  int a=5;
  cout<<func(a)<<endl;

  return 0;
}