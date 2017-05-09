#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

char n[333334];
string fig[] = {"000","001","010","011","100","101","110","111"};
int main() {
    scanf("%s", n);

    int length = strlen(n);
    int i=0;
    
    if(n[0]-'0'< 4){
        if ((n[0]-'0') == 3){
            printf("%s","11");
        }else if((n[0]-'0') == 2){
            printf("%s","10");
        }else if((n[0]-'0') == 1){
            printf("%s","1");
        }else if((n[0]-'0') == 0){
            printf("%s","0");
        }
        i++;
    }
    
    for(; i<length; i++){
        printf("%s",fig[n[i]-'0'].c_str());
    }
    
    
    printf("\n");
    return 0;
}

