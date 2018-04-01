#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;


void solve(int T) {
    int n; cin >> n;
    priority_queue<pair<int,char>> Q;
    for(int i=0;i<n;i++) {
        int x; cin >> x;
        Q.push({x,'A'+i});
    }
    vector<string> soln;
    auto a = Q.top(); Q.pop();
    while(a.first > Q.top().first) {
        soln.push_back(string(1,a.second));
        a.first--;
    }
    Q.push(a);
    while(Q.top().first > 1) {
        a = Q.top(); Q.pop();
        auto b = Q.top();
        if(a.first == b.first) {
            Q.pop();
            soln.push_back(string(1,a.second)+string(1,b.second));
            a.first--; b.first--;
            Q.push(a); Q.push(b);
        } else {
            soln.push_back(string(1,a.second));
            a.first--;
            Q.push(a);
        }
    }
    while(Q.size() > 2) {
        soln.push_back(string(1,Q.top().second));
        Q.pop();
    }
    a = Q.top(); Q.pop();
    soln.push_back(string(1,a.second) + string(1,Q.top().second));
    Q.pop();
    cout << "Case #" << T << ": ";
    for(string it:soln) cout << it << " ";
    cout << endl;
}


int main() {
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
}
