// TAKING INPUTS FROM USER

// Example1
/*
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a & b:"<<endl;
    cin>>a>>b;
    cout <<"the value of a & b is :" <<a <<"\t" <<b <<endl;
}
*/



// Example 2 : use of cin.get() - koi bhi cheez (including space,tab,enter) dalenge to ye uski corresponding ascii value return krega
/*
#include <iostream>
using namespace std;
int main(){
    int a;
    a = cin.get();
    cout<< "value of a is : " <<a <<endl;
 }
*/
 








// CONDITIONAL STATEMENTS


// Example1 : else if statement
/*
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a : "<<endl;
    cin>>a;

    if(a>0){
        cout<<"a is postive"<<endl;
    }
    else if(a<0){
        cout<<"a is negative"<<endl;
    }
    else{
        cout<<"a is 0"<<endl;
    }
}
*/


// Example2 : Determining if entered charcter is lowecase uppercase or numeric

/*
#include <iostream>
using namespace std;
int main(){
    char ch;
    cout<< "enter value of ch : " << endl;
    cin>> ch;

    if(ch>'a' && ch<'z'){
       cout << "ch is lowercase";
    }
    else if(ch>'A' && ch<'z'){
       cout << "ch is uppercase";
    }
    else{
        cout << "ch is numeric";
    }
}
*/








// WHILE LOOP

// Example1 : Printing numbers from 1 to n

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "enter value of n : " << endl;
    cin >> n;

    int i=1;

    while(i<=n){
        cout<< i <<endl;
        i=i+1;
    }

}
*/



// Example2 : sum of numers from 1 to n

/*
#include<iostream>
using namespace std;
int main(){
    int i, n, sum;
    i = 1;
    sum = 0;
    cout << "enter value of n : " << endl;
    cin >> n;

    while(i<=n){
        sum = sum + i;
        i=i+1;
    }

    cout<< "value of sum is : " << sum;
}
*/




// Example3 : sum of all even numbers from 1 to n

/*
#include<iostream>
using namespace std;
int main(){
    int i, n, sum;
    i=2;
    sum=0;
    cout << "enter n : " <<endl;
    cin >> n;

    while(i<=n){
        sum=sum+i;
        i=i+2;
    } 
    
    cout << "sum of all even numbers from one to n is : " << sum;
}
*/




// Example4 : check whether given no is prime or not

/*
#include<iostream>
using namespace std;
int main(){

    int i,n;
    i=2;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    while(i<n){
        if(n%i == 0){
            cout<< "not prime for" << i <<endl;
        }
        else{
            cout<< "prime for" << i << endl;
        }
        i=i+1;
    }    
}
*/




// Pattern1

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern2

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "enter no of rows : " <<endl;
    cin >> n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern3

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;

        }
        cout<<endl;
        i=i+1; 
    
    }
}
*/



// Pattern4

/*
 #include<iostream>
 using namespace std;
 int main(){
    int n, count;
    cout<<  "enter no of rows : "<<endl;
    cin>>n;
    count=1;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
            }
            cout<<endl;
            i=i+1;
    }
 }
*/



// Pattern5

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : "<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/


// Pattern 6

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter value of n : "<< endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern7

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : "<<endl;
    cin>>n;
    int count=1;                      // ye loop ke bahar declare krna hoga. agar andar kra to count ki value firse 1 hi initialize hoti rhegi

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<< count;
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern8

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n"<<endl;
    cin>>n;

    int i=1;

    while(i<=n){
        int j=1;
        int value=i;                   // ye loop ke andar declare krna hoga. agar bahar kra to ye increase nhi hoga.
        while(j<=i){
            cout<<value;
            value=value+1;
            j=j+1;
            }
        cout<<endl;
        i=i+1;

        }
}
*/



// Pattern9

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int value=i;
        int j=1;
        while(j<=i){
            cout<< value<<" ";
            value=value-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    
    }
}
*/



// Pattern10

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows : "<<endl;
    cin>>n;
    char value= 'A';

    int i=1;
    while(i<=n){
        int j=1;
        
        while(j<=n){
            cout<< value;
            j=j+1;
            

        }
        cout<<endl;
        value=value+1;
        i=i+1;
    }

}
*/



// Pattern11

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        char value='A';
        int j=1;
        while(j<=n){
            cout<<value;
            value=value+1;
            j=j+1;
            }
            cout<<endl;
            i=i+1;
    }
}
*/



// Pattern12

/*
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter value of n"<< endl;
    cin>>n;

    int i=1;
    char value='A';

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<value;
            value = value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;

    }
}
*/



// Pattern13

/*
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<< "enter value of n : " <<endl;
    cin>>n;
   
    int i=1;
    while(i<=n){
        int j=1;
        char value= 'A'+i+j-2;
        while(j<=n){
            cout<<value;
            value=value+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}
*/


// ALTERNATE SOLUTION

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        char ch= 'A'+i-1;
        int j=1;
        while(j<=n){
            cout<<ch;
            ch=ch+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern14

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    char value='A';

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout << value;
            j=j+1;
        }

        cout<<endl;
        value=value+1;
        i=i+1;


    }
}
*/



// Pattern 15

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    char value='A'; 

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<value;
            j=j+1;
            value=value+1;
        }
        cout<< endl;
        i=i+1;
        
    }

}
*/



// Pattern16

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char ch= 'A'+i+j-2;
        while(j<=i){
            cout << ch;
            ch=ch+1;
            j=j+1;
         }
        cout<<endl;
        i=i+1;

    }
}
*/



// Pattern17

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        
        while(j<=i){
            cout<<ch;
            ch=ch+1;
            j=j+1;
            }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern18

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}
*/

// Pattern19

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}
*/



// Pattern20

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=1;
    while(i<=n){
        int space=1;
        while(space<=i-1){
            cout<<" ";
            space++;
        }

        int j=1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
*/


// Alternate Solution : ulta loop chalaya (reversed the loop of pattern18)

/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=n;
    while(i>=1){
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space=space+1;
        }
        int j=1;
        while(j<=i){
            cout<<"*";
            j=j+1;
        }    
        cout<<endl;
        i=i-1;
    }
}
*/



// Pattern21

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    
    
}




