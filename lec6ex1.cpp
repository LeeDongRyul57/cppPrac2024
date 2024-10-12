#include <iostream>
using namespace std;
double max(double num1, double nume2);
int max(int num1, int num2);
int max(int num1, double num2);

int main(){
    int a=10;
    double b=100;
    double c=77;
    cout<<max(c,b)<<" "<<max(a,a)<<" "<<max(a,b);
    cout<<max(10.0,10.0)
    
}

double max(double num1, double nume2){
    return 100;
}

int max(int num1, int num2){
    return 200;
}

int max(int num1, double num2){
    return 300;
}