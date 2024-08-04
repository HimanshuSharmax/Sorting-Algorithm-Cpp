#include<iostream>
using namespace std;

void Bubble_Sort(int arr[], int size){

      for(int i=0; i<size-1; i++){          // For round 1 to n-1

            bool already_Swapped = false;      // For better opti
            for(int j=0; j<size-i; j++){             // Process element till n-i index
                  if(arr[j] > arr[j+1])
                        swap(arr[j], arr[j+1]);
                        already_Swapped = true;
            } 
            if(already_Swapped == false)
                  break;
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

      Bubble_Sort(arr,size);

      cout<<"The Sorted array are: "<<endl;
      for(int i=0; i<size; i++){
            cout<< arr[i] <<endl;
      }

      return 0;

}