#include <cstdio>
#include <stack>

using namespace std;
int main() {
    int n, b;
    stack<int> s;
    scanf("%d %d", &n, &b);
    
    while(n !=0 ){
        int tmp = n%b;
        s.push(tmp);
        n /=b;
    }
    while(!s.empty()){
        if(s.top() >= 10 && s.top() <= 35){
            printf("%c",s.top()-10 + 'A');
        }else{
            printf("%d", s.top());
        }
        s.pop();
    }
    
    return 0;
}
