#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

pair<ll,ll> get_ans(ll x) {
    ll hf = x / 2;
    return {hf,x-hf-1};
}

void solve(int T) {
    ll N,K;
    cin >> N >> K;
    map<ll,ll> mp;
    mp[N] = 1;
    ll seats = 1;
    while(seats < K) {
        ll new_seats = 0;
        map<ll,ll> nmp;
        for(auto it:mp) {
            ll hf = it.first / 2;
            nmp[hf] += it.second;
            nmp[it.first - hf - 1] += it.second;
            new_seats += 2LL * it.second;
            K -= it.second;
        }
        mp = nmp;
        seats = new_seats;
    }
    auto p1 = mp.begin(), p2 = ++mp.begin();
    pair<ll,ll> ans;
    if(p2 != mp.end() && K <= p2->second) ans = get_ans(p2->first);
    else ans = get_ans(p1->first);
    cout << "Case #" << T << ": " << ans.first << " " << ans.second << endl;
}

int main() {
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
}
