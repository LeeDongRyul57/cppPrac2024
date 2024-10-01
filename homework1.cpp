#include <iostream>
int main(){
    int a,b,c;
    std::cout<<"enter the number under 50"<<std::endl;
    std::cin>>a>>b>>c;
    while(a>50){
        std::cout<<"re enter first num"<<std::endl;
        std::cin>>a;
    }
    while(b>50){
        std::cout<<"re enter second num"<<std::endl;
        std::cin>>b;
    }
    while(c>50){
        std::cout<<"re enter third num"<<std::endl;
        std::cin>>c;
    }
    if(a>b){
        if(a>c){
            std::cout<<"biggest num is first one  "<<a;
        }else{
            std::cout<<"biggest num is third one  "<<c;
        }     
    }else{
        if(b>c){
            std::cout<<"biggest num is secound one  "<<b;
        }else{
            std::cout<<"biggest num is third one  "<<c;
        }
    }
}

//t t