#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long a,tipos,x,k,sum;
    cin>>a;
    while(a--){
        sum=0;
        cin>>tipos>>k;
        for(int i=0;i<tipos;++i){
                cin>>x;
                sum=sum+(x/k);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
