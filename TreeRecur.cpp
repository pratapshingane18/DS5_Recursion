#include<bits/stdc++.h>
using namespace std;

void func(int n){
    if(n>0){
        cout<<n<<endl;
        func(n-1);
        func(n-1);
    }
}

int main(){
    int a =3;
  func(a);

  return 0;
}