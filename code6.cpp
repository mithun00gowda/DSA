#include<iostream>
using namespace std;

int checkQ(int x, int y) {
    if (x == y) {
        return 1; // x and y are equal
    } else {
        return 0; // x and y are not equal
    }
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        int result = checkQ(x, y);

        cout << result << endl;
    }

    return 0;
}
