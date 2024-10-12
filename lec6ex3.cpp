#include <iostream>
using namespace std;

int main(){
    int num1,product;
    int *ptr1;
    double *ptr2;
    double num2;
    num1=5;
    num2=7.5;
    cout<<int(num2);
    ptr1=&num1;
    ptr2=&num2;
    //ptr2=&num1;
    //ptr1=&num2;

    product=num1*(*ptr2);
    cout<<product;
}