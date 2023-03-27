#include <bits/stdc++.h>
#define flash ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define ll long long

using namespace std;

void setIO()
{
    flash;
    
    #ifndef ONLINE_JUDGE
        freopen("inout/burger.in", "r", stdin);
        freopen("inout/burger.out", "w", stdout);
    #endif
}

void solve()
{
	ll x;
	cin >> x;
	if (x >= 67 && x <= 45000) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
    setIO();
    
    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
