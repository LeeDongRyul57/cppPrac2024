#include <iostream>
#define plus3(x) (x+x+x) 
int main(){
    const int five=5;
    int i=7;
    float x=7.0;
    std::cout<<five+i/2<<std::endl; //8
    std::cout<<five+x/2<<std::endl; //8.5
    if(-1){
        x=15.57;
    }
    std::cout<<five+x/2<<std::endl;
    int day=40;
    switch(day){
        case 1:
        std::cout<<"monday"<<std::endl;
        break;
        case 4:
        std::cout<<"thursday"<<std::endl;
        break;
        default:
        std::cout<<"weekend"<<std::endl;
        break;
    }
    int b=3;
    b/=2;
    std::cout<<b*b++<<" "<<b<<std::endl;
    int e1=1;
    do
    {
        std::cout<<"일단 한번 실행"<<std::endl;
    } while (e1>3);
    for(int i=1;i<10;i++){
    std::cout<<"i는 "<<i<<std::endl;
    }
    int grade=80;
    char lettergrade;
    int cutoff;
    for(lettergrade='A',cutoff=90;grade<cutoff;lettergrade++){
        cutoff-=10;
    }
    if(lettergrade>'F'){
        lettergrade='F';
    }
    std::cout<<lettergrade<<std::endl;
    
    for (i=1; i<100;i++) {
	std::cout << "Checking " << i << std::endl;
	if ( i%2 ) 
		std::cout << i << " is odd" << std::endl;
	else
		std::cout << i << " is even" << std::endl;
}

}