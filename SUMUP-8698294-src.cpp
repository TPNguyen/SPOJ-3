#include <cstdio>
int main() {
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("%.5f\n",((n+1)/(n+1+1./n)/2));
    }return 0;
}
