#include <iostream>
using namespace std;

void solve(int T) {
    int A,B,N;
    cin >> A >> B >> N;
    for(int i=A+1;i<=B;i++) {
        cout << i << endl;
        cout.flush();
        string resp; cin >> resp;
        if(resp == "CORRECT") return;
    }
}

int main() {
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
}
