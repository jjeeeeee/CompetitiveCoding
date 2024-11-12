#include <bits/stdc++.h>
using namespace std;

// This solution solves the "Double Up" problem in C++ as a practice exercise.
// Note that the problem involves 100-bit integers, which exceed the range of
// C++'s 64-bit long long type. For a correct solution, use Python, which
// supports arbitrary-precision integers.

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> sequence(n);
    for (int i = 0; i < n; i++) {
        cin >> sequence[i];
    }

    deque<long long> dq;

    for (long long number : sequence) {
        while (!dq.empty() && dq.front() <= number) {
            if (dq.front() == number) number *= 2LL;
            dq.pop_front();
        }
        dq.push_front(number);
    }

    cout << dq.back();

    return 0;
}
