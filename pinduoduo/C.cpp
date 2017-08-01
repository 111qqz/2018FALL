/* ***********************************************
Author :111qqz
Created Time :2017年08月01日 星期二 21时24分54秒
File Name :C.cpp
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
const int N=2E6+7;
int n,m;
LL h[N],w[N];
int main()
{
	#ifndef  ONLINE_JUDGE 
	//freopen("./in.txt","r",stdin);
  #endif
	while (~scanf("%d",&n))  //匈牙利？？？贪心乱搞就行吧。。？？？
	{
	    for (int i = 1 ; i <= n ;i++) scanf("%lld",&h[i]);
	    scanf("%d",&m);
	    for ( int i = 1;  i <= m ; i++) scanf("%lld",&w[i]);
	    sort(h+1,h+n+1);
	    sort(w+1,w+m+1);
	    if (n==0||m==0)
	    {
		printf("0\n");
		continue;
	    }
	    int cur = 1;
	    for ( int i = 1 ; i <= m ; i++) //枚举巧克力
	    {
		if (w[i]>=h[cur])
		{
		    cur++;
		}
		if (cur>n) break;
	    }
	    int ans = cur-1;
	    ans = min(ans,n); //最多不能超过小朋友人数
	    printf("%d\n",ans);
	}


  #ifndef ONLINE_JUDGE  
  fclose(stdin);
  #endif
    return 0;
}
