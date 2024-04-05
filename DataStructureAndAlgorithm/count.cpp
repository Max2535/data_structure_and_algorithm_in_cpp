#include<iostream>
using namespace std;

int count(int n){
   /// base
   if(n==0){
    return 0;
   }
   /// recursive
   int smallAns = count(n/10);

   /// calculation
   return smallAns + 1;

}

int main(){
     cout<<count(2);
    return 0;
}
