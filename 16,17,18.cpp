// FUNCTION FOR SELECTION SORT

/*
#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    //for no of rounds

    for(int i=0; i<n-1; i++){          // i ko index ki trah bhi use krna hai isliye 0 to <n-1 kraa nhi to 1 to <n bhi kr skte the
        int minIndex = i;
         

        //traversing and checking min in the array

        for(int j=i+1 ; j<n ; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;

            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
*/




// FUNCTION FOR BUBBLE SORT

/*
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // for no rounds

    for(int i = 1 ; i<n ; i++){                   
        
        //traversing and checkinf condition in array

        for (int j=0 ; j<n-i ; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
*/

// OPTIMISED FUNCTION FOR BUBBLE SORT (for best case complexity, will break if array already sorted)

/*
#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // for no of rounds

    for(int i = 1 ; i<n ; i++){   
        
        bool swapped = false;                
        
        //traversing and checking condition in array

        for (int j=0 ; j<n-i ; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;           // ek bhi swap hua to ye true hojayega
            }
        }
        if(swapped == false){
            // array already sorted
            break;
        }
    }
}
*/



// FUNCTION FOR INSERTION SORT


#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    
    for (int i=1 ; i<n ; i++){
        int temp= arr[i];
        
        int j=i-1;
        for(; j>=0 ; j--){
            
            if(arr[j]>temp){
                // shift krdo
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
