#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool check(long long W, int M, vector<long long>& L) {
    long long lines = 1; // Initialize with one line for the first word.
    long long line_width = L[0]; // Width of the current line.

    for (int i = 1; i < L.size(); i++) {
        // If the current word and the space fit on the current line, add them.
        if (line_width + L[i] + 1 <= W) {
            line_width += (L[i] + 1);
        }
        // Otherwise, start a new line with the current word.
        else {
            lines++; // Increment the number of lines.
            line_width = L[i]; // Reset the line width.
        }
    }

    return lines <= M; // Check if the number of lines is less than or equal to M.
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<long long> L(N);

    for (int i = 0; i < N; i++) {
        cin >> L[i];
    }

    long long left = *max_element(L.begin(), L.end()); // Minimum possible width is at least the width of the widest word.
    long long right = 1e18; // A large upper bound for binary search.

    while (left < right) {
        long long mid = left + (right - left) / 2;
        if (check(mid, M, L)) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << left << endl;

    return 0;
}

