#include<bits/stdc++.h>
using namespace std;

double taylor(int x, int n){

    static double P = 1;
    static double f =1;
    double res;
    if(n==0){
        return 1;
    }

    else{
        res = taylor(x, n-1);
        P = P*x;
        f = f*n;

        return res + (P/f);
    }

    return 0;
}

int main(){
  int a = 3, b = 500;
  cout<<taylor(a,b)<<endl;

  return 0;
}