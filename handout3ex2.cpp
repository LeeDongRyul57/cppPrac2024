#include <iostream>
using namespace std;
void count_chars(char text[]);
int main(){
    char text[] = "Today is a nice day for having a little picnic.";
	count_chars(text);
}

void count_chars(char text[]){
    int n=0;
    char s[26];
    char b[26];
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;i<26;i++){
        s[i]='a'+i;
    }
    for(int i=0;i<26;i++){
        b[i]='A'+i;
    }
    while(text[n]){
        for(int i=0;i<26;i++){
           
            if(s[i]==text[n]||b[i]==text[n]){
                count[i]++;
            }
        }
        n++;
    }
    int maxNum=0;
    for(int i=0;i<26;i++){
        if(count[i]>maxNum){
            maxNum=count[i];
        }
    }

    for(int i=maxNum;i>0;i--){
        for(int j=0;j<26;j++){
            if(count[j]>=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<26;i++){
        cout<<b[i];
    }
}