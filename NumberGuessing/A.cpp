#include <iostream>
using namespace std;

void solve(int T) {
    int A,B,N;
    cin >> A >> B;
    cin >> N;
    A++;
    bool done = 0;
    while(A < B) {
        int m = (A+B) / 2;
        cout << m << endl;
        cout.flush();
        string resp; cin >> resp;
        if(resp == "CORRECT") {
            done = 1;
            break;
        }
        else if(resp == "TOO_SMALL") A = m+1;
        else B = m-1;
    }
    if(!done) {
        cout << A << endl;
        cout.flush();
        string resp; cin >> resp;
    }
}

int main() {
    int t; cin >> t;
    for(int i=1;i<=t;i++) solve(i);
}
