/* ***********************************************
Author :111qqz
Created Time :2017年08月01日 星期二 20时53分10秒
File Name :B.cpp
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
const int N=5E3+7;
char numberN[N];
char numberM[N];
int a[N],b[N];
int c[N];
int n,m;
int main() {
    scanf("%s%s", numberN, numberM);
    int n = strlen(numberN), m = strlen(numberM);
    int i, j;
    ms(c,0);
    for (i = 0, j = n - 1; i < n; i++, j--) {
        a[i] = numberN[j] - '0';
    }
    for (i = 0, j = m - 1; i < m; i++, j--) {
        b[i] = numberM[j] - '0';
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            c[i + j] += a[i] * b[j];
        }
    }
    for (i = 0; i < n + m; i++) {
        if (c[i] >= 10) {
            c[i + 1] += c[i] / 10;
            c[i] %= 10;
        }
    }
    for (j = N-1; j > 0; j--) {
        if (c[j] != 0)
        break;
    }
    for (i = j; i >= 0; i--) {
    printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}
