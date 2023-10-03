//TAKING INPUT OF ARRAY FROM USER AND PRINTING THE ARRAY

/*
#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<< "enter no of values in arrays";
    cin>>n;

    int array[n];

    for (int j=0 ; j<n ; j++){
        cout<< "enter value at" << j << " index";
        cin>> array[j];
    }

    for (int i=0 ; i<n ; i++){
        cout<< array[i] <<" ";
        }
}
*/



// MAKING A FUNCTION AND PRINTING AN ARRAY

/*
#include <iostream>
using namespace std;

void printArray(int array[] , int size){
    for(int i=0 ; i<size ; i++){
        cout<< array[i] <<" ";
    }
}

int main(){
    
    int arr[]={1,45,79,456,25};
    printArray(arr , 5);

    cout<< endl;

    int brr[]={452,3563,31358,35};
    printArray(brr , 4);
}
*/




// MAX AND MIN ELEMENT IN AN ARRAY

/*
#include<iostream>
using namespace std;

int max(int array[] , int size){

    int maximum = array[0];

    for(int i=1 ; i<size ; i++){
        if (array[i] > maximum){
            maximum = array[i];
        }
    }
    return maximum;
}


int min(int array[] , int size){

    int minimum = array[0];

    for(int i=1 ; i<size ; i++){
        if (array[i] < minimum){
            minimum = array[i];
        }
    }
    return minimum;
}

int main(){

    int length;
    cout<< "enter length of array";
    cin>> length;

    int arr[length];

    for(int i=0 ; i<length ; i++){
        cout<<"enter vale at " << i <<" index"<<endl;
        cin>>arr[i];
    }

    cout<< "maximum value of array is " << max(arr , length) << endl;

    cout<< "minimum value of array is " << min(arr , length);

}
*/




// SUM OF ALL ELEMENTS IN AN ARRAY

/*
#include<iostream>
using namespace std;

int addition(int arr[] , int n){
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum=sum + arr[i];
    }
    return sum;
}

int main(){

    int length;
    cout<< "enter length of array"<< endl;
    cin>> length;

    int array[length];

    for(int i=0 ; i<length ; i++){
        cout<< "enter element at " << i << " index";
        cin>>array[i];
    }


    cout<< addition(array , length);

}
*/




// LINEAR SEARCH

/*
#include <iostream>
using namespace std;

int search(int arr[] , int size , int key){

    for(int i=0 ; i<size ; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}


int main(){
    
    int size;
    cout<<"enter size of the array";
    cin>> size;

    int array[size];

    for(int i=0 ; i<size ; i++){
        cout<<"enter element at " << i << " index";
        cin>> array[i];
    }

    int key;
    cout<<"enter the element you want to search";
    cin>>key;

    search(array , size , key);
    
    bool found = search(array , size , key);
    
    if(found){
        cout<<"key is present";
    }
    else{
        cout<<"key is absent";
    }
}
*/




// REVERSE AN ARRAY

/*
#include<iostream>
using namespace std;

void reverse(int array[], int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(array[start], array[end]);
        start++;
        end--;
    }

}

void printArray(int array[], int n){
    for(int i=0 ; i<n ; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={1, 4, 0, 5, -2, 15};
    int brr[5]={2, 6, 3, 9, 4};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);

    return 0;
}
*/





