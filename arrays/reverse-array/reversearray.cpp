
// REVERSE AN ARRAY

#include<iostream>
using namespace std;

void reArr(int arr[],int start ,int last){  // function to reverse array

  int temp;

  while(start <last){
    temp =arr[start];        // simple swap
    arr[start]=arr[last];
    arr[last]=temp;
    last--;
    start++;
  }
}


int main(){
 int n;
 cout<<"Enter size of array : ";
 cin>>n;
 int arr[n];
 cout<<"Enter the element of array\n";

  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
 reArr(arr,0,n-1);            //  function for reverse array element
 cout<<"Reversed array\n";

 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }

 return 0;
}
