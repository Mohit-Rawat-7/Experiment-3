#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Equal to ("<<a<<"=="<<b<<"): "<<(a==b)<<endl;
    cout<<"Not equal to ("<<a<<"!="<<b<<"): "<<(a!=b)<<endl;
    cout<<"Greater than ("<<a<<">"<<b<<"): "<<(a>b)<<endl;
    cout<<"Less than ("<<a<<"<"<<b<<"): "<<(a<b)<<endl;
    cout<<"Greater than or equal to ("<<a<<">="<<b<<"): "<<(a>=b)<<endl;
    cout<<"Less than or equal to ("<<a<<"<="<<b<<"): "<<(a<=b)<<endl;

    cout<<"Textual form: "<<endl;
    cout<<"Equal to ("<<a<<"=="<<b<<"): "<<boolalpha<<(a==b)<<endl;
    cout<<"Not equal to ("<<a<<"!="<<b<<"): "<<boolalpha<<(a!=b)<<endl;
    cout<<"Greater than ("<<a<<">"<<b<<"): "<<boolalpha<<(a>b)<<endl;
    cout<<"Less than ("<<a<<"<"<<b<<"): "<<boolalpha<<(a<b)<<endl;
    cout<<"Greater than or equal to ("<<a<<">="<<b<<"): "<<boolalpha<<(a>=b)<<endl;
    cout<<"Less than or equal to ("<<a<<"<="<<b<<"): "<<boolalpha<<(a<=b)<<endl;

    return 0;
}