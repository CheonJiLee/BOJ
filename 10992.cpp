#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            if(n+i>=j){
                if(n-i == j || j == n+i){
                    printf("%c",'*');
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    for(int i=0; i<2*n-1; i++){
        printf("%c",'*');
    }
    printf("\n");
    return 0;
}
