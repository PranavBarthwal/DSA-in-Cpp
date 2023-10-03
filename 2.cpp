// BASIC C++ CODE

/*
#include<iostream>
using namespace std;

int main(){
    
    cout << "namaste dunia" << endl;

}
*/




// DATA TYPES AND VARIABLES

/*
#include<iostream>
using namespace std;

int main(){

    int a = 123;
    cout << a << endl;
   
    char ch = 'v';
    cout << ch << endl;
   
    bool bl = false;
    cout << bl << endl;
   
    float fl = 2.5;
    cout << fl << endl;
   
    double db = 1.23;
    cout << db <<endl;
    
    int size = sizeof(db);
    cout << "size of db is " << db << endl;
}
*/



// TYPECASTING

/*
#include<iostream>
using namespace std;

int main(){

    int ab = 'a';
    cout << ab << endl;

    char ch = 98;
    cout << ch << endl;

    char c = 123456;
    cout << c << endl;

}
*/  



int findPages(int arr[], int n, int m) {
    int temp = n-m+1;      //max no of books that can go to one student
    
    int minSum = 0;

    for(int x=0 ; x<temp; x++){
        minSum = minSum + arr[x];
    }

    for (int i =1 ; i<m ; i++ ){     // traversing the array to find min sum

    

             int sum =0;
             for(int j=i ; j<=m ; j++){                    // temp no of elements ka sum krna hai
                       sum = sum + arr[j];
                       m++;
             }

             if(sum<minSum){
                 minSum = sum;
                 return minSum;
             }
                          
          
        
        
    }
    return -1;
     
}


int main(){
    int arr[5]={25,46,28,49,24};
    
    findPages(arr, 5, 4);
}