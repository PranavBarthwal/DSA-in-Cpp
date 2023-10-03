// BINARY SEARCH IMPLEMENTATION

/*
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size-1;

    while (start<=end){
        
        // To prevent integer overflow (start+end)/2 mein kahi integer ke range se bahar na nikl jaye addition ki wjah se
        int mid = start + (end - start)/2;

        if(arr[mid]==key){
            return mid;
        }

        // going to right part
        if(key>arr[mid]){
            start=mid+1;
         }

        // going to the left part
        else{
            end=mid-1;
        }
     }
     return -1;
}


int main(){

    int size;
    cout<<"enter size of array";
    cin>>size;

    cout<< "enter the array in ascending order" << endl<< endl;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout<< "enter element at "<< i<< "index";
        cin>>arr[i];
    }

   
    int key;
    cout<< "enter key";
    cin>>key;

   
    int hello = binarySearch(arr, size, key);

    cout<< "Index of key is " << hello <<endl;
}
*/