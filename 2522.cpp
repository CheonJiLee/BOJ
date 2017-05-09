#include <cstdio>
int main(int argc, const char * argv[]) {
    int n;
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(int j=1; j<=n; j++){
            if(n-i<=j){
                printf("%c",'*');
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    i-=2;
    for(; i>=0; i--){
        for(int j=1; j<=n; j++){
            if(n-i<=j){
                printf("%c",'*');
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}