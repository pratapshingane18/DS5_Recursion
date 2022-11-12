#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int res;
    int Ti=0;
    int Tj=1;
    for(int i =2; i <= n ; i++){
        res = Ti + Tj;
        Ti = Tj;
        Tj = res;
    }

    return res;
}

int main(){
  int a=10;
  cout<<fib(a)<<endl;

  return 0;
}