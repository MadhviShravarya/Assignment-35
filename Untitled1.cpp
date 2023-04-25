/*Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates*/
#include<iostream>
using namespace std;

template <class Test> Test addition(Test num1, Test num2)  //Created generic template
{
        return (num1+num2);
}
int main()
{
        cout<<"\n Addition of Multiple Types of Data using Generic Template";
        cout<<"\n ---------------------------------------------------------";
        cout<<"\n Addition of Integer Parameters : "<<addition(10, 10);  
                //Data is passed as Integer

        cout<<"\n Addition of Float Parameters : "<<addition(15.5, 20.10);    
                 //Data is passed as Float
                //Generic template claims both the parameters to be of same data type.
        return 0;
}
