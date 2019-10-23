#include<bits/stdc++.h>

using namespace std;

#define fRead(x)        freopen(x,"r",stdin)
#define fWrite(x)       freopen (x,"w",stdout)

#define LL              long long
#define ULL             unsigned long long
#define ff              first
#define ss              second
#define pb              push_back
#define INF             2e16
#define PI              2 * acos(0.0)
#define mk              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>


#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define min4(a,b,c,d)   min(a,min(b,min(c,d)))
#define max4(a,b,c,d)   max(a,max(b,max(c,d)))
#define SQR(a)          ((a)*(a))
#define FOR(i,a,b)      for(int i=a;i<=b;i++)
#define ROF(i,a,b)      for(int i=a;i>=b;i--)
#define REP(i,b)        for(int i=0;i<b;i++)
#define MEM(a,x)        memset(a,x,sizeof(a))
#define ABS(x)          ((x)<0?-(x):(x))

#define SORT(v)         sort(v.begin(),v.end())
#define REV(v)          reverse(v.begin(),v.end())

#define FastRead        ios_base::sync_with_stdio(0);cin.tie(nullptr);


long double area(long double R,long double H)
{
    long double x = (PI * SQR(H) * (3 * R - H) ) /3;
    return x;
}
int main()
{
    long double H,h1,h2;
    while(cin >> H >> h1 >> h2){
            h1 = H - h1;
    h2 = H - h2;
    long double R = H/2.0;

    long double x = area(R,h1);

    long double y = area(R,h2);
    long double z = area(R,2 * R);
    vector<long double>vec;
    vec.push_back(x);
    vec.push_back(y - x);
    vec.push_back(z - y);

    sort(vec.begin(),vec.end());

    cout << fixed << setprecision(6) << vec[0] << " " << vec[1] << " " << vec[2] << "\n";
    }


}
