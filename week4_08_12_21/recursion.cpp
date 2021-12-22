//TENGRI BIZ MENEN

#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
#define tc int t;cin>>t;for(int i=1;i<=t;i++) f(i);
#define read(x) freopen(x,"r",stdin)
#define write(x) freopen(x,"w",stdout)
#define fr first
#define sc second
#define sz size
#define fi(x) for(int i=0;i<x;i++)
#define fj(x) for(int j=0;j<x;j++)
using namespace std;
typedef pair<int,int> pint;
typedef vector<int> vint;

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}

int fibonnaci(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibonnaci(x-1)+fibonnaci(x-2));
   }
}

int dpf[10000];

int dpfibonnaci(int x) {

    if(dpf[x]) return dpf[x];

   if((x==1)||(x==0)) {
      return(x);
   }else {
      return dpf[x]=(fibonnaci(x-1)+fibonnaci(x-2));
   }
}

int dpm[10000];

int merdiven(int x, int a, int b)
{
    if(dpm[x]) return dpm[x];
    if(x<=0) return 0;
    if(x==a||x==b) return 1;
    return dpm[x]=merdiven(x-a,a,b)+merdiven(x-b,a,b);
}

int val[] = { 60, 100, 120 };
int wt[] = { 10, 20, 30 };
int dpk[100][100];

int knapsack(int w,int i)
{
    if(w<0) return INT_MIN;
    if(i==3) return 0;
    if(dpk[w][i]) return dpk[w][i];
    return dpk[w][i]=max(val[i]+knapsack(w-wt[i],i+1),knapsack(w,i+1));
}

int main()
{

    return 0;
}
