#include <iostream>

int main(){
    int a,b,c,r;
    std::cout<<"enter the two num"<<std::endl;
    std::cin>>a>>b;
    if(b>a){
        c=b;
        b=a;
        a=c;
    }
   
    while(true){
         r=a%b;
        if(r==0){
            std::cout<<"gcd of a and b is... "<<b<<std::endl;
            break;
        }
        a=b;
        b=r;
    }
}