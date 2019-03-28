#include <iostream>
using namespace std; 
int main () 
{ 
        int a; 
        
        cout<<"\nEnter a Number : "; 
       cin>>a; 
       
        if (a%2==0 && a>0) 
            cout<<"\n\nThe Number is Even and +ve"; 
        if (a%2==0 && a<0) 
         cout<<"\n\nThe Number is Even and -ve"; 
        if (a%2!=0 && a>0) 
            cout<<"\n\nThe Number is Odd and +ve"; 
        if (a%2!=0 && a<0) 
            cout<<"\n\nThe Number is Odd and -ve"; 
        return 0;
    }
