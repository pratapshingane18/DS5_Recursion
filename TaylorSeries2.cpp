#include<bits/stdc++.h>
using namespace std;

double Taylor(double x, double n){

    static double S =1;
    if(n == 0){
        return S;
    }

    S = 1 + x*(S/n);
    return Taylor(x, n-1);
}

int main(){
  int a=1, b = 10;
  cout<<Taylor(a,b)<<endl;

  return 0;
}