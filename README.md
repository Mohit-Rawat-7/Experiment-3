# Experiment 3
### Program 1
### Aim:
To take two numbers from the user and perform arithmetic operations on them.

### Software Used:
Visual Studio Code

## Theory:
Arithmetic operators in C++ let you perform basic math operations:

+: Addition
-: Subtraction
*: Multiplication
/: Division
%: Modulus (remainder after division)

# Program code:
``` javascript
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
```
### Output:
![image](https://github.com/user-attachments/assets/a758cfa7-de79-446b-8a03-b2c6422e9057)

### Conclusion:
We learned how to apply arithmetic operators to perform calculations in C++.



### Program 2
### Aim:
To take two numbers from the user and perform comparison operations on them.

### Software Used:
Visual Studio Code

## Theory:
Relational operators compare two values and return a boolean (true or false):
==: Equal to
!=: Not equal to
<: Less than
>: Greater than
<=: Less than or equal to
>=: Greater than or equal to

# Program code:
``` javascript
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
```

### Output:
![image](https://github.com/user-attachments/assets/36a18e53-954c-48c6-920e-4e6a7de9a547)

### Conclusion:
We learned how to use relational operators to compare values in C++.



### Program 3
Aim:
To take two numbers from the user and perform logical operations on them.

### Software Used:
Visual Studio Code

## Theory:
Logical operators in C++ work with boolean values and include:

&&: Logical AND (both conditions must be true)
||: Logical OR (at least one condition must be true)
!: Logical NOT (inverts the truth value)

# Program code:
``` javascript
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
```

### Output:
![image](https://github.com/user-attachments/assets/3cacff31-b3cc-4977-aed1-e9bd9fd89fdc)


### Conclusion:
We learned how to use logical operators to make decisions based on boolean logic in C++.
