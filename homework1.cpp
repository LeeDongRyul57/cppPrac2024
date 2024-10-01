#include <iostream>
int main(){
   std::cout<<"enter the number until you enter 0"<<std::endl;
   int a;
   int sum=0;
   while(true){
   std::cin>>a;
   if(a==0){
    break;
   }
    sum+=a;
    std::cout<<"sum is === "<<sum<<std::endl;
    }
    std::cout<<"terminated!!!";

}

//t t