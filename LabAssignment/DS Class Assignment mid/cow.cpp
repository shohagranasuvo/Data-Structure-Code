#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n = 5;
    double ratings[] = {4.05, 4.17, 4.04, 3.99, 4.13};

    sort(ratings, ratings + n);

    double minDifference = ratings[1] - ratings[0];
    for (int i = 1; i < n - 1; i++) {
        minDifference = min(minDifference, ratings[i + 1] - ratings[i]);
    }

    cout << "The minimum difference in ratings is: " << minDifference << endl;

    return 0;
}
