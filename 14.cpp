// PIVOT ELEMENT IN A SORTED ARRAY

/*
#include<iostream> 
using namespace std;

int getPivot(int arr[], int n) {

    int s = 0;
    int e = n-1;
    

    while(s<=e) {

        int mid = s + (e-s)/2;

        if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
            return mid;
        }

        else if(arr[mid]>arr[0]){
            s=mid+1;
        }

        else if(arr[mid]>arr[n-1]){
            e=mid-1;
        }

    }
   
}


int main() {
    int n;
    cout<< "enter size of array";
    cin>>n;

    int arr[n];

    for(int i =0 ; i<n ; i++){
        cout<<"enter element at "<< i <<" index ";
        cin>>arr[i];
    }



    cout << "Pivot is " << getPivot(arr, n ) <<" index";
}
*/




// FLOAT PART OF SQUARE ROOT OF A NUMBER

#include<iostream>
using namespace std;

 long long int sqrtInteger(int n) {
        
        int s = 0;
        int e = n;
        
        
        long long int ans = -1;
        while(s<=e) {

            long long int mid = s + (e-s)/2;

            long long int square = mid*mid;
            
            if(square == n){
                return mid;
            }
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            
        }
        return ans;
    }

double morePrecision(int n, int precision, int tempSol) {
    
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<precision; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j= j+factor ){
            ans = j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout <<" Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

    return 0;
}




