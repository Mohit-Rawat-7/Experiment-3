#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Addition ("<<a<<"+"<<b<<"): "<<(a+b)<<endl;
    cout<<"Subtraction ("<<a<<"-"<<b<<"): "<<(a-b)<<endl;
    cout<<"Multiplication ("<<a<<"*"<<b<<"): "<<(a*b)<<endl;
    cout<<"Division ("<<a<<"/"<<b<<"): "<<(a/b)<<endl;
    cout<<"Modulas ("<<a<<"%"<<b<<"): "<<(a%b)<<endl;

    return 0;
}