/* ***********************************************
Author :111qqz
Created Time :2017年08月01日 星期二 21时37分37秒
File Name :AA.cpp
************************************************ */

#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define PB push_back
#define fst first
#define sec second
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define ms(a,x) memset(a,x,sizeof(a))
typedef long long LL;
#define pi pair < int ,int >
#define MP make_pair

using namespace std;
const double eps = 1E-8;
const int dx4[4]={1,0,0,-1};
const int dy4[4]={0,-1,1,0};
const int inf = 0x3f3f3f3f;
const int N=1E6+7;
LL a[N];
int n;
pair<LL,int>mx0,mx1,mx2,mn1,mn0;
int main()
{
	#ifndef  ONLINE_JUDGE 
	freopen("./in.txt","r",stdin);
  #endif
	while (~scanf("%d",&n))
	{
	    mx0.fst=mx1.fst=mx2.fst=-inf;
	    mx0.sec=mx1.sec=mx2.sec=-1;
	    mn0.fst=mn1.fst=inf;
	    mn0.sec=mn1.sec=-1;
	    for ( int i = 1 ; i <= n ; i++) scanf("%lld",&a[i]);
	    for ( int i = 1 ; i <= n ; i++)
		if (a[i]>mx0.fst)
		{
		    mx0.fst = a[i];
		    mx0.sec = i;
		}
	    bool zero = false;
	    for ( int i = 1 ; i <= n ; i++)
	    {
		if (a[i]==0) zero = true;
		if (a[i]>mx1.fst&&i!=mx0.sec)
		{
		    mx1.fst = a[i];
		    mx1.sec = i;
		}
	    }
	    for ( int i = 1; i <= n ; i++)
	    {
		if (a[i]>mx2.fst&&i!=mx0.sec&&i!=mx1.sec)
		{
		    mx2.fst = a[i];
		    mx2.sec = i ;
		}
	    }
	    for ( int i = 1 ; i <= n ; i++)
	    {
		if (a[i]<mn0.fst)
		{
		    mn0.fst = a[i];
		    mn0.sec = i ;
		}
	    }
	    for ( int i =1 ; i <= n ; i++)
	    {
		if (a[i]<mn1.fst&&i!=mn0.sec)
		{
		    mn1.fst = a[i];
		    mn1.sec =  i;
		}
	    }
	    LL ans;
	    ans = mx0.fst*mx1.fst*mx2.fst;
	    ans = max(ans,mn0.fst*mn1.fst*mx0.fst);
	    if (zero) ans = max(ans,0LL);
	    printf("%lld\n",ans);
	}
  #ifndef ONLINE_JUDGE  
  fclose(stdin);
  #endif
    return 0;
}
