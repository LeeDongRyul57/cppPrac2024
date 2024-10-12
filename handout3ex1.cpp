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
    for(int i=0;i<26;i++){
        cout<<b[i]<<", "<<s[i]<<" : "<<count[i]<<endl;
    }
}