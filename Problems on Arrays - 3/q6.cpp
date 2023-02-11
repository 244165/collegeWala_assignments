void solve() 
{
int n, q, x;
cin >> n >> q >> x;
vector<int> a(n, 0);
while (q--) {
int l, r;
cin >> l >> r;
if (r + 1 <= n - 1) a[r + 1] -= x;
a[l] += x;
}
// taking prefix sums
for (int i = 1; i < n; i++) {
a[i] += a[i - 1];
}
for (auto &i : a) cout << i << “ “;
}