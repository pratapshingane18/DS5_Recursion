#include<bits/stdc++.h>
using namespace std;
int x = 0;

int func(int m){

    x++;

    if(m>0){
        return func(m-1) + x;

    }
    return 0;
}
int main(){
  int a = 5;
  cout<<func(a)<<endl;

  return 0;
}