#include <cstdio>
int main(int argc, const char * argv[]) {
    int n,num;
    int max = -1000000;
    int min = 1000000;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}