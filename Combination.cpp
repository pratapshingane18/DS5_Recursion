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

int com(int n, int r){
    int num, den;

    num = Fact(n);
    den = Fact(r) * Fact(n-r);
    

    return num/den;


}

int main(){
  int a=5, b = 1;
  cout<<com(a,b)<<endl;

  return 0;
}