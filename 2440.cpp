#include <cstdio>
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j>n-i){
                printf("%c",'*');
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}