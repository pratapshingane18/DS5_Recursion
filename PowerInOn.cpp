#include<bits/stdc++.h>
using namespace std;

int pow(int m, int n){
    if(n==0){
        return 1;
    }

    else{
        return pow(m, n-1)*m;

    }

    return 0;
}

int main(){
  int a=2, b=9;
  cout<<pow(2,9)<<endl;

  return 0;
}