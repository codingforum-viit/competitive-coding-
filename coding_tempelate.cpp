#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                     \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define MOD 1000000007
typedef vector<ll> vi;
const string Y = "YES", N = "NO";

bool cmp(pair<ll, ll> a, pair<ll, ll> b)
{
  return (a.first - a.second) > (b.first - b.second);
}
void solve();
int main()
{
  FAST_IO;
  std::cout << std::fixed;
  std::cout << std::setprecision(6);
  int t = 1;
  cin >> t;
  while (t > 0)
  {
    solve();
    t--;
  }
  return 0;
}

// Hello
void solve()
{
  cout << 1 << '\n';
  double ans = 1.999999;
  deb(ans);
  vi v;
}