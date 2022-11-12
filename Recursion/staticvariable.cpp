// Static Variable role in Recursion


#include<bits/stdc++.h>
using namespace std;

int func(int x){
    static int cnt = 0;
    cnt++;
    if(x >0){
        return func(x-1) + cnt;
    }

    return 0;
}

int main(){
  int a=5;
  cout<<func(a)<<endl;

  return 0;
}