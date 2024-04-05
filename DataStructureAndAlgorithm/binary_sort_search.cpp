#include <iostream>
using namespace std;

int BinarySearch(int a[],int n,int key){

         int s = 0, e = n-1;
         while(s<=e){
            int mid = s + (e-s)/2;

            if(a[mid] == key){
                return mid;
            }else if(a[mid] > key){
                e = mid-1;
            }else{
                s = mid + 1;
            }
         }

         return -1;

}

void selection_sort(int a[],int n){
    for(int i=0;i<=n-2;i++){
       int smallest = i;
       for(int j = i+1;j<=n-1;j++){

           if(a[j]<a[smallest]){
               smallest = j;
           }
       }

       swap(a[i],a[smallest]);
    }
}


int main(){

   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   cout<<"enter key"<<endl;
   int key;
   cin>>key;
   selection_sort(a,n);
    
   for(int i=0;i<n;i++){
     cout<<a[i]<<" ";
   }
    
   int pos = BinarySearch(a,n,key);
   if(pos == -1){
    cout<<"key not found"<<endl;
   }else{
       cout<<"key found at index "<<pos<<endl;
   }

   return 0;
}

