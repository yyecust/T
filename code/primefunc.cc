#include <bits/stdc++.h>    
typedef long long ll;
using namespace std;    
ll f[340000],g[340000], n;    
void init(){    
    ll i, j, m;    
    for(m = 1; m * m <= n; ++m)f[m]=n/m-1;    
    for(i=1;i<=m;++i)g[i]=i-1;    
    for(i=2;i<=m;++i){    
        if(g[i]==g[i-1])continue;    
        for(j=1;j<=min(m-1,n/i/i);++j){    
            if(i*j<m)f[j]-=f[i*j]-g[i-1];    
            else f[j]-=g[n/i/j]-g[i-1];    
        }    
        for(j=m;j>=i*i;--j)g[j]-=g[j/i]-g[i-1];    
    }    
}    
int main()
{    
    while (cin >> n) {
      init();
      cout << f[1] << endl;
    }  
} 