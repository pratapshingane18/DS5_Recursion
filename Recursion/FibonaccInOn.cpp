#include<bits/stdc++.h>
using namespace std;

    int A[10];

    int fib(int n){
        if(n <= 1){
            A[n] = n;
            return n;
        }

        else{
            if(A[n-2] == -1){
                A[n-2] = fib(n-2);

            }

            if(A[n-1] == -1){
                A[n-1] = fib(n-1);
            }

            A[n] = A[n-2] + A[n-1];
        }

        return A[n-1] + A[n-2];
    }



int main(){

    for(int i =0; i< 10; i++){
        A[i] = -1;

    }
  int a=10;
  cout<<fib(a)<<endl;

  return 0;
}