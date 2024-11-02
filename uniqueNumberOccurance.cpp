#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

void uniqueNumberOccurrence(int arr[], int size) {
    unordered_map<int, int> occurrenceMap;  // To count occurrences of each number
    unordered_set<int> occurrenceSet;       // To check if occurrences are unique

    // Count the occurrences of each number
    for (int i = 0; i < size; i++) {
        occurrenceMap[arr[i]]++;
    }

    // Check if the occurrences are unique
    for (auto it : occurrenceMap) {
        if (occurrenceSet.find(it.second) != occurrenceSet.end()) {
            cout << "False" << endl; // Found duplicate occurrence
            return;
        }
        occurrenceSet.insert(it.second); // Store the unique occurrence
    }

    cout << "True" << endl; // All occurrences are unique
}

int main() {
    int arr[5] = {1, 2, 1, 2,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    uniqueNumberOccurrence(arr, size);

    return 0;
}
