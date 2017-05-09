#include <cstdio>
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=1; j<=2*n-1; j++){
            if(n+i>=j && n-i<= j){
                printf("%c",'*');
            }else if(n+i< j){
                break;
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}