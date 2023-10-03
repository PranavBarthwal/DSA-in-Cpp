// SWAPPING ALTERNATE ELEMENTS IN AN ARRAY

/*
#include<iostream>
using namespace std;

void printArray(int array[] , int n){
    for(int i=0 ; i<n ; i++){
        cout<<array[i]<<" ";
    }
}

void swapAlt(int array[], int n){
    int index=0;
    
    while(index+1 < n){
        swap(array[index] , array[index+1]);
        index=index+2;
    }
}

int main(){
    
    int size;
    cout<<"emter size of array";
    cin>>size;

    int arr[size];

    for(int i=0 ; i<size ; i++){
        cout<<"enter element at "<< i << " index";
        cin>> arr[i];
    }

    swapAlt(arr , size);

    printArray(arr , size);
}
*/




// FIND UNIQUE ELEMENT

/*
int findUnique(int *arr, int size)
{
    int ans=0;

    for(int i=0 ; i<size ; i++){
        ans=ans^arr[i];
    }
    return ans;

}
*/




// FIND DUPLICATES

/*
int findDuplicate(vector<int> &arr) 
{
   int ans = 0;

   for(int i=0 ; i<arr.size() ; i++){
       ans=ans^arr[i];
   }

   for(int i=1 ; i<arr.size() ; i++){
       ans=ans^i;
   }
   return ans;
	
}
*/




// INTERSECTION OF TWO SORTED ARRAYS

/*
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
   vector<int> ans;

   int i,j = 0;

   while(i<n && j<m){

	   if(arr1[i]==arr2[j]){
		   ans.push_back(arr1[i]);
		   i++;
		   j++;
	   }

	   else if(arr1[i]<arr2[j]){
		   i++;
	   }

	   else if(arr1[i]>arr2[j]){
		   j++;
	   }
   }
   return ans;

}
*/




// PAIR SUM

/*
#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector <vector<int>> ans;

   for(int i=0; i<arr.size(); i++){
   for(int j=i+1; j<arr.size(); j++){
      if(arr[i]+arr[j]==s){
         vector<int>temp;
         temp.push_back(min(arr[i], arr[j]));
         temp.push_back(max(arr[i], arr[j]));
         ans.push_back(temp);
      }
   }
   }
   sort(ans.begin(), ans.end());
   return ans;
}
*/




// SORT 0s & 1s

/*
#include<iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}
*/