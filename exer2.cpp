#include <iostream>
using namespace std;
char chicken(int generation);
char egg(int generation);


int main(){
    int generation=15;
   cout<< chicken(generation);
}

char chicken(int generation){
    if(generation == 0){
        return 'c';
    }else{
        int count=generation;
        count--;
        cout<<"generation count chic "<<count<<endl;
        return egg(generation-1);
    }
}

char egg(int generation){
    if(generation==0){
        return 'e';
    }else{
        int count=generation;
        count--;
        cout<<"generation count egg "<<count<<endl;
        return chicken(generation-1);
    }
}