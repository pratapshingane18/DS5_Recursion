#include<bits/stdc++.h>
using namespace std;

int Sum(int n){
    if(n > 0){
        return Sum(n -1) +n;
    }
    return 0;
}

int main(){
  int a=10;
  cout<<Sum(a)<<endl;

  return 0;
}