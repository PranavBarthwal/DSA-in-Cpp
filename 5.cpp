// BITWISE OPERATOR

/*
#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<"a&b"<< "=" << (a&b) <<endl;
    cout<<"a|b"<< "=" << (a|b) <<endl;
    cout<<"~a"<< "=" << (~a) <<endl;
    cout<<"a^b"<< "=" << (a^b) <<endl;

}
*/


// LEFT AND RIGHT SHIFT 

/*
#include <iostream>
using namespace std;
int main(){
    
    cout<< (17>>1) <<endl;
    cout<< (17<<2) <<endl;

}
*/



// INCREMENT / DECREMENT OPERATOR

/*
#include<iostream>
using namespace std;
int main(){

    int i=7;
     cout<< (++i) <<endl;
     cout<< (i++) <<endl;
     cout<< (i--) <<endl;
     cout<< (--i) <<endl;
}
*/


// FOR LOOP

// SUM OF ALL VALUES FROM 1 to n

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n" << endl;
    cin>>n;

    int sum=0;

    for(int i=1 ; i<=n ; i++){
        sum = sum + i;
    }
    cout<< sum;
}
*/


// FIBONACCI SERIES

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n" << endl;
    cin>>n;

    int a=0 , b=1 ;

    cout << a << " " << b << " ";

    for(int i=1 ; i<=n ; i++){
        int next= a+b;
        cout<< next << " ";

        a=b;
        b=next;


    }
}
*/



// PRIME NUMBER OR NOT

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n"<<endl;
    cin>>n;

    bool tester = 1;
 
    for(int i=2 ; i<n ; i++){
        if(n%i == 0){
            tester = 0;
            break;
        }
    }

    if(tester == 0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }
}
*/



// (PRODUCT-SUM) OF DIGITS OF A NUMBER

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int prod=1;
    int sum=0;

    while(n!=0){
        int digit=n%10;
        prod = prod*digit;
        sum = sum+digit;

        n=n/10;
    }
    cout<<(prod-sum);
}
*/





// COUNTING 1 BITS IN A NUMBER

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;

}
*/