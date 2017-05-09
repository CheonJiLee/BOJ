#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main() {
    char n[100];
    int b;
    int sum =0;
    
    scanf("%s%d", n, &b);
    
    int length = strlen(n);
    for(int i=0; i<length; i++){
        int exp = length-1-i;
        if(n[i]>=65 && n[i]<=90){
           sum += pow(b, exp)*(n[i] - 65 +10);
        }else{
            sum += pow(b, exp)*(n[i] - '0');
        }
    }
    printf("%d\n", sum);
    return 0;
}
