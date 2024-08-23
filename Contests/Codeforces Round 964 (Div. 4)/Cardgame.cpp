#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int suneetWins = 0;
        vector<pair<int, int>> suneetCards = {{a1, a2}, {a2, a1}};
        vector<pair<int, int>> slavicCards = {{b1, b2}, {b2, b1}};

        for (auto s : suneetCards) {
            for (auto sl : slavicCards) {
                int suneetScore = 0;
                int slavicScore = 0;

                if (s.first > sl.first) suneetScore++;
                else if (s.first < sl.first) slavicScore++;

                if (s.second > sl.second) suneetScore++;
                else if (s.second < sl.second) slavicScore++;

                if (suneetScore > slavicScore) suneetWins++;
            }
        }

        cout << suneetWins << endl;
    }

    return 0;
}
