#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back

#define PI 3.14159265358979323846264338327950288419716939937510582
#define LSOne(S) ((S) & -(S))
#define popcountll(S) __builtin_popcountll(S)
#define ctzll(S) __builtin_ctzll(S)
#define rep(i, a, b) for (ll i = a; i < (b); i++)
#define repd(i, a, b) for (ll i = a; i > (b); i--)
#define pq priority_queue
#define umap unordered_map
#define uset unordered_set
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<pll> vpll;
typedef vector<string> vs;

double polygonArea(vector<double> X, vector<double> Y) {
	int n = X.size();
	double area = 0.0;
	int j = n - 1;
	for (int i = 0; i < n; i++)
	{
		area += (X[j] + X[i]) * (Y[j] - Y[i]);
		j = i;
	}
	return area / 2.0;
}

int main() {
	srand(time(0));
	cin.tie(0)->sync_with_stdio(0);
	cin.exceptions(cin.failbit);
	int n;
	cin >> n;
	while (n) {
		vector<double> x(n), y(n);
		rep(i, 0, n) {
			cin >> x[i] >> y[i];
		}
		double out = polygonArea(x, y);
		if (out < 0) {
			cout << "C";
			out *= -1;
		}
		cout << fixed << setprecision(1) << "CW "<< out << endl;
		cin >> n;
	}
}