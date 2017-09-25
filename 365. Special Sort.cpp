#include <stdio.h>
#include <queue>
long long n,x;
std::priority_queue<long long>im;
std::priority_queue<long long,std::vector<long long>,std::greater<long long> >p;
int main(){
    scanf("%lld", &n);
    for(int i=0;i<n;++i){
        scanf("%lld", &x);
        if(x%2==0)p.push(x);
        else im.push(x);
    }
    while(!p.empty()){
            printf("%lld\n", p.top());
            p.pop();
    }
    while(!im.empty()){
            printf("%lld\n", im.top());
            im.pop();
    }
}
