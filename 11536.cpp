
 //BISMILLAHIRRAHMANIRRAHIM
/*
 manus tar shopner soman boro
 Author :: Shakil Ahmed
.............AUST_CSE27.........
 prob   ::
 Type   ::
 verdict::
 */

#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pi acos(-1.0)
#define ff first
#define ss second
#define re return
#define QI queue<int>
#define SI stack<int>
#define SZ(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define sqr(x) ((x) * (x))
#define memo(a,b) memset((a),(b),sizeof(a))
#define G() getchar()
#define MAX3(a,b,c) max(a,max(b,c))

double const EPS=3e-8;
using namespace std;

#define FI freopen ("input.txt", "r", stdin)
#define FO freopen ("output.txt", "w", stdout)

typedef long long Long;
typedef long long int64;
typedef unsigned long long ull;
typedef vector<int> vi ;
typedef set<int> si;
typedef vector<Long>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<Long,Long>pll;
typedef pair<double,double>pdd;
typedef vector<pii> vpii;

// For loop

#define forab(i, a, b)	for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n)		forab (i, 0, (n) - 1)
#define For(i, n)		forab (i, 1, n)
#define rofba(i, a, b)	for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n)		rofba (i, 0, (n) - 1)
#define rof(i, n)		rofba (i, 1, n)
#define forstl(i, s)	for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)

template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }

//Fast Reader
template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction

/* **************************************  My code start here ****************************************** */
typedef long long ll ;
const int MX = (int) 1e6+100;
ll inp[MX] , S , freq[MX];
int n ;
int main()
{
   // ios_base::sync_with_stdio(0); cin.tie(0);
    int cs , t , n , m , k;
    read(t) ;
    for ( cs =  1 ; cs <= t ; cs++ )
    {
       read(n) , read(m) , read(k) ;
       int i ;
       inp[0] = 1 ;
       inp[1] = 2 ;
       inp[2] =  3 ;
       for ( i = 3 ; i < n ; i++ ) inp[i] = ( inp[i-1] + inp[i-2] + inp[i-3] )%m + 1 ;
       for( i = 0 ; i < n ; i++ )
       {
           freq[i] = 0 ;
           if(inp[i] > k ) inp[i] = 0 ;
       }
       int high = 0 , low = 0 , cnt = 0 , ans = n+2 ;
       while( high < n )
       {
           int t = inp[high++];
           if ( !t ) continue ;
           if( !freq[t] ) cnt++;
           freq[t]++;
           while( cnt == k && low < high )
           {

               ans = min( ans , high - low  );
               t = inp[low++];
               freq[t]--;
               if(!freq[t]) cnt--;
           }

       }
       printf("Case %d: ",cs);
       if( ans == n+2 ) printf("sequence nai\n");
       else printf("%d\n",ans);
    }


    return 0;
}
/*
2 6
dobarz
adatak
3 4
alfa
beta
zeta
*/
