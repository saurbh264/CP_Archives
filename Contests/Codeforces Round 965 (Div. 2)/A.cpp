#include <iostream>
#include <vector>
using namespace std;

void mainCode() {
    int x = 0, y = 0, k = 0;
    cin >> x >> y >> k;

    if (k == 1) {
        cout << x << " " << y << endl;
    } else {
        int sumX = 0, sumY = 0;

        for (int i = 1; i < k; i++) {
            int xi = x + i;
            int yi = y - i;
            cout << xi << " " << yi << endl;
            sumX += xi;
            sumY += yi;
        }

        int lastX = x * k - sumX;
        int lastY = y * k - sumY;
        cout << lastX << " " << lastY << endl;
    }
}

int main() {
    int t = 1;
    cin >> t;
    while (t--) {
        mainCode();
    }
    return 0;
}
