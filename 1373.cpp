#include <cstdio>
#include <cstring>
char n[1000001];
int main() {
    int sum = 0;
    scanf("%s", n);

    int length = strlen(n);
   
    int t = 0;
    if(length%3 == 1){
        printf("%d", (n[t]-'0') * 1);
        t++;
    }
    else if(length%3 == 2){
        printf("%d",(n[t]-'0')*2 + (n[t+1]-'0')*1);
        t += 2;
    }
    
    for(; t<length; t +=3 ){
        printf("%d", (n[t]-'0')*4 + (n[t+1]-'0')*2 + (n[t+2]-'0')*1);
    }
    printf("\n");
    return 0;
}
