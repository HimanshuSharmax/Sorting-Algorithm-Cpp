#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){                        
    for(int i=0;i<n;i++){                         // Time complexity = O(n)
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int BinarySearch(int arr[],int size,int key){  

    int start_index =  0;                                     // In binary search array must be sorted first
    int end_index = size - 1;

    while(start_index <= end_index){

      //  int mid = (start_index + end_index) / 2;              For overlowing this   
        int mid = start_index + (end_index - start_index) / 2;  

        if(arr[mid] == key){
            return mid; 
        }
        else if(arr[mid] > key){                   // Time complexity = O(log^n)     [base:2]
            end_index = mid-1;
        }
        else{
            start_index = mid+1;
        }
    }
    return -1;
}

int main(){
    int size,key;
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size]  ;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number that you want to find : ";
    cin>>key;

    cout<<BinarySearch(arr,size,key)<<endl;
    return 0;
} 