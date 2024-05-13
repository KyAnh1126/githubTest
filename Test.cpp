#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define mod (ll)(1e9 + 7)
#define cout(m) cout << m << "\n"
#define cinarr(a, n) for(int i = 0; i < n; i ++) cin >> a[i];
#define coutarr(a, n) for(int i = 0; i < n; i ++) cout << a[i] << " "; cout("");

int a, b;

void solve() {
    cin >> a >> b;
    cout << a + b << '\n';
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int tt = 1;
    //cin >> tt;
    while(tt--) solve();
}