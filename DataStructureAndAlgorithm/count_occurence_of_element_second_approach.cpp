#include<iostream>
using namespace std;

void printAllPos(int a[],int n,int x,int i){
   if(i==n){
    return;
   }
   if(a[i]==x){
    cout<<i<<" ";
   }
   printAllPos(a,n,x,i+1);
}

int count(int a[],int n,int x,int i){
    if(i==n){
      return 0;
   }
   if(a[i]==x){
    return 1 + count(a,n,x,i+1);
   }else {
     return  count(a,n,x,i+1);
   }
}

int main(){
  int a[] = {5,5,6,5,6,7};
  /// printAllPos(a,6,10,0);


  cout<<count(a,6,5,0)<<endl;

  return 0;
}
