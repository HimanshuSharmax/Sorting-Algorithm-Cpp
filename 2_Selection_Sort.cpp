#include<iostream>
using namespace std;

void Selection_Sort(int arr[],int size){
      
      for(int i=0; i<size-1; i++){
         int min_index = i;

         for(int j=i+1; j<size; j++){
            if(arr[j] < arr[min_index])
               min_index = j;
         }
         swap(arr[min_index] , arr[i]);
     }
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
      cout << arr[i] << " ";
      cout << endl;
    }
}

int main(){
 
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    Selection_Sort(arr,size);

    cout << "Sorted array: \n";
    printArray(arr, size);

     return 0;
}