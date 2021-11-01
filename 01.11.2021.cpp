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

int main()
{
    string st="GSU";
    int x[10],tmp;
    vector<int> vec;
    /*vec.push_back(3); //vec[0]
    vec.push_back(6); //vec[1]
    vec.push_back(4); //vec[2]
    vec.push_back(2); //vec[3]*/

    //cin>>x[0]>>x[1]>>x[2];
    //cout<<x[0]<<x[1]<<x[2];

    cin>>tmp;
    vec.push_back(tmp);
    cin>>tmp;
    vec.push_back(tmp);
    cin>>tmp;
    vec.push_back(tmp);

    cout<<vec[0]<<vec[1]<<vec[2];

    return 0;
}
