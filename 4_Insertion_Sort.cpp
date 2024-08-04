#include<iostream>
using namespace std;

void Insertion_Sort(int arr[], int size){

      for(int i=1; i<size; i++){       // Assume 0th index is sorted, then inti with i=1

            int temp = arr[i];
            int j = i-1;
            for( ; j>=0; j--){
               if(arr[j] > temp){
                  arr[j+1] = arr[j];      // Shift
               }
               else{
                  break;
               }
            }
            arr[j+1] = temp;
      }
}

int main(){
 
   int size;
      cout<<"Enter The size of arr: ";
      cin>>size;

      cout<<"Enter elements: "<<endl;
      int arr[size];
      for(int i=0; i<size; i++){
            cin>>arr[i];
      }

      Insertion_Sort(arr,size);

      cout<<"The Sorted array are: "<<endl;
      for(int i=0; i<size; i++){
            cout<< arr[i] <<endl;
      }
 
   return 0;
}