

#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define mp make_pair
#define be begin()
#define en end()
#define all(v) v.be, v.en
#define le length()
#define fi first
#define se second
#define lb lower_bound()
#define ub upper_bound()
#define endl "\n"
#define inf LLONG_MAX

#define forz(i, n) for (ll i = 0; i < n; i++)
#define fora(i, m, n) for (ll i = m; i < n; i++)
#define rforz(i, n) for (ll i = n - 1; i >= 0; i--)
#define rfora(i, m, n) for (ll i = n; i >= m; i--)

#define vll vector<ll>
#define vpll vector<pair<ll, ll>>
#define mll map<ll, ll>
#define pll pair<ll, ll>

#define P0(a) cout << a << " "
#define P1(a) cout << a << endl
#define PYES cout << "Yes\n"
#define PNO cout << "No\n"

#define rev(v) reverse(v.be, v.en)
#define srt(v) sort(all(v));

#define collect(v, n)          \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> v[i];           \
    }

// sort(a.rbegin(), a.rend());
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////=======================FUNCIONS======================================================////////
/////////////////////////////////////////////////////////////////////////////////////////////////////

using namespace std;
ll M = 1000000007;

void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

ll pow(ll a, ll b, ll m)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
            ans = (ans * a) % m;
        b /= 2;
        a = (a * a) % m;
    }
    return ans;
}

ll power(ll a, ll b)
{
    ll s = 1;
    for (int x = 0; x < b; x++)
    {
        s *= a;
    }
    return s;
}

ll count_digits(ll n)
{
    string num = to_string(n);
    return num.size();
}
unsigned int nextPowerOf2(unsigned int n)
{
    n--;
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n++;

    return log2(n);
}

ll factorial(ll n)
{
    ll factorial = 1;
    for (ll i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

ll nCr(ll n, ll r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////CODE////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void solve()
{
    string s;
    cin>>s;
    map<char, ll>m;
    m[s[0]]++;
    ll ans=0;
    for(ll i = 1; i<s.size(); i++)
    {
        if(m[s[i]]==0)
        {
            m[s[i]]++;

        }
        else
        {
            m[s[i]]=0;
            for(ll  j= 97; j<=122; j++)
            {
                if(m[char(j)])
                {
                    m[char(j)]=0;
                    ans++;
                }
            }

        }

    }

    for(ll i = 97; i<=122; i++)
    {
        if(m[char(i)])
        {
            ans++;
        }
    }

    cout<<ans<<endl;
}


   
    



int main()
{
    ll t;

    cin>>t;
    while(t--){
      solve();
    }
    

}
