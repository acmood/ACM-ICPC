/* Created Time: Friday, November 22, 2013 PM09:03:08 CST */
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 101000;
int n,h;
int a[N],ans[N],minid;
void work() {
    sort(a,a+n);
    int minx = a[n-1]+a[n-2]-a[0]-a[1];
    if (n==2) {
        printf("%d\n",0);
        return ;
    }
    int tmp = max(a[0]+a[n-1]+h,a[n-1]+a[n-2])
        - min(a[0]+a[1]+h,a[1]+a[2]);
    if (tmp<minx) {
        minx = tmp;
        ans[minid] = 1;
    }
    printf("%d\n",minx);
}
int main() {
    scanf("%d%d",&n,&h);
    int mx = 0X3F3F3F3F;
    for (int i = 0; i < n; i ++) {
        scanf("%d",&a[i]);
        if (a[i]<mx) {
            mx = a[i];
            minid = i;
        }
    }
    work();
    for (int i = 0; i < n; i ++)
        printf("%d ",ans[i]+1);
    return 0;
}