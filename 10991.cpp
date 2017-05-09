#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=1; j<=2*n; j++){
            if(n-i <= j && j <= n+i){
                printf("%c",'*');
                printf(" ");
                j++;
            }else if(j < n-i){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}