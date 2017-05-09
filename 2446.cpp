#include <cstdio>
int main(int argc, const char * argv[]) {
    int n;
    int i;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(j<=i){
                printf(" ");
            }else if(2*n-i <= j){
                break;
            }else{
                printf("%c",'*');
            }
        }
        printf("\n");
    }
    i-=2;
    for(; i>=0; i--){
        for(int j=1; j<=2*n-1; j++){
            if(j<=i){
                printf(" ");
            }else if(2*n-i <= j){
                break;
            }else{
                printf("%c",'*');
            }
        }
        printf("\n");
    }
    return 0;
}
