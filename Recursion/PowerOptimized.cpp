#include<bits/stdc++.h>
using namespace std;

int pow(int m, int n){
    if(n ==0){
        return 1;
    }

    if(n % 2== 0){
        return pow(m*m, n/2);
    }

    else{
        return m*pow(m*m, (n-1)/2);
    }

    return 0;
}

int main(){
  int a=2, b=9;
  cout<<pow(a,b)<<endl;

  return 0;
}