#include<bits/stdc++.h>
using namespace std;

double e(int x, int n){
  double s =1;
  int i;
  double num =1;
  double den =1;

  for(i =1; i<=n;i++){
    num *= x;
    den *= i;
    s += num/den;
  }

  return s;
}

int main(){
  int a=1, b=10;
  cout<<e(a,b)<<endl;

  return 0;
}