#include<bits/stdc++.h>
using namespace std;

int com(int n , int r){
    if((r == 0) || (r == n)){
        return 1;
    }

    else{
        return com(n-1, r-1) + com(n-1, r);
    }
}

int main(){
  int a=5, b=3;
  cout<<com(a,b)<<endl;

  return 0;
}