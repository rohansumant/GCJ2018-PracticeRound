#include <iostream>
#include <cstdio>
using namespace std;

void solve(int T) {
    int D,N;
    cin >> D >> N;
    double time = 0;
    for(int i=0;i<N;i++) {
        double k,s; cin >> k >> s;
        time = max(time,(D-k)/s);
    }
    printf("Case #%d: %.8f\n",T,(D/time));
}

int main() {
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
}
