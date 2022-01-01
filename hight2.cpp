#include<bits/stdc++.h>
using namespace std;
int n,s,t,h,u,v,a[305][305];
void floyd()
{
    for ( int k=1; k<=n; k++)
        for ( int u=1; u<=n; u++)
            for ( int v=1; v<=n; v++)
                if(a[u][v]!=INT_MAX && a[u][k]!=INT_MAX && a[k][v]!=INT_MAX && u!=v && u!=k && k!=v)
                    a[u][v]=max(a[u][v], min(a[u][k], a[k][v]));
}
int main()
{
    freopen("hight.inp","r",stdin);
    freopen("hight.out","w",stdout);
    cin >> n >> s >> t;
    while( cin >> u >> v >> h )
    {
        a[u][v]=a[v][u]=h;
    }
    floyd();
    if (a[s][t]!=0)  cout << a[s][t];
    else cout << "NO SOLUTION";
    return 0;
}

