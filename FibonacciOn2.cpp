#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n <= 1){
        return n;
    }

    else{
        return fib(n-1) + fib(n-2);
    }
}

int main(){
  int a=10;
  cout<<fib(a)<<endl;

  return 0;
}