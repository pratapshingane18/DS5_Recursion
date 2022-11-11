#include<bits/stdc++.h>
using namespace std;


int Fact(int n){
    if(n == 0){
        return 1;
    }

    else{
        return Fact(n-1)*n;
    }
}
int main(){
  int a=5;
  cout<<Fact(a)<<endl;

  return 0;
}