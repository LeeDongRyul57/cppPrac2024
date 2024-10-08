#include <iostream>
using namespace std;
int sum_down(int x);
int power(int x);
int sum_downcopy(int x);
int main(){
    cout<<sum_down(19)<<endl;
    cout<<sum_downcopy(19);
}

int sum_down(int x){
    if(x>=0){
        x=x-1;
        int y=x+sum_down(x);
        return y+sum_down(x);
    }else{
        return 1;
    }
}

int power(int x){
    int result=1;
    for(int i=0;i<x;i++){
        result*=2;
    }
    return result;
}

int sum_downcopy(int x){
    int sum=0;
    for(int i=0;i<=x;i++){
       sum+=power(i)*(x-i);
    }
    return sum;
}