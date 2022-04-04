

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
#define PYES cout << "YES\n"
#define PNO cout << "NO\n"

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
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
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



ll countArray(ll n, ll k, ll x)
{
    if(x!= 1)
{
    if(n==3)
    {
        ll ans = k - 2;
        return ans;
    }
    else
    {
        ll ans1 = pow((ll)k-1, (ll)(n-2), 1000000007);
        ll ans2 = pow(k-1, n-4, 1000000007);
        ll ans3 = (ans2 * (k-2))%M;
        return (ans1 - ans3);
    }
}
else
{
    if(n==3)
    {
        ll ans = k-1;
        return ans;
    }
    else
    {
        ll ans1 = pow((ll)(k-1), (ll)n-3, M);
        ll ans2 = (ans1 * (k-2))%M;
        return ans2;
    }
}
    
}


   int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    ll n = stoi(first_multiple_input[0]);

    ll k = stoi(first_multiple_input[1]);

    ll x = stoi(first_multiple_input[2]);

    ll answer = countArray(n, k, x);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

    

