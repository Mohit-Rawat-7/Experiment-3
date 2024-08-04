#include <iostream>
using namespace std;
int main(){
    bool a,b;
    cout<<"Enter nature of a, 0 or 1: ";
    cin>>a;
    cout<<"Enter nature of b, 0 or 1: ";
    cin>>b;
    cout<<"a = "<<boolalpha<<a<<", b = "<<boolalpha<<b<<endl;
    cout<<"Logical AND ("<<a<<"&&"<<b<<"): "<<(a&&b)<<endl;
    cout<<"Logical OR ("<<a<<"||"<<b<<"): "<<(a||b)<<endl;
    cout<<"Logical NOT (!"<<a<<"): "<<(!a)<<endl;

    return 0;
}