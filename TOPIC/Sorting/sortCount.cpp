#include <iostream>
#include <vector>
using namespace std;
 
void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}
 
void bubbleSort(vector<int> arr) {
    int comparisons = 0, swaps = 0;
    cout << "Bubble Sort Steps:\n";
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = 0; j < arr.size() - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
                printArray(arr);
            }
        }
    }
    cout << "Total Comparisons: " << comparisons << ", Total Swaps: " << swaps << "\n\n";
}
 
 
void selectionSort(vector<int> arr) {
    int comparisons = 0, swaps = 0;
    cout << "Selection Sort Steps:\n";
    for (size_t i = 0; i < arr.size(); i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
            swaps++;
            printArray(arr);
        }
    }
    cout << "Total Comparisons: " << comparisons << ", Total Swaps: " << swaps << "\n\n";
}
 
 
void insertionSort(vector<int> arr) {
    int comparisons = 0, shifts = 0;
    cout << "Insertion Sort Steps:\n";
    for (size_t i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
            shifts++;
            printArray(arr);
        }
        comparisons++;
        arr[j + 1] = key;
        shifts++;
        printArray(arr);
    }
    cout << "Total Comparisons: " << comparisons << ", Total Shifts: " << shifts << "\n\n";
}
 
int main() {
    vector<int> arr = {32, 12, 67, 33, 22, 88, 44, 25};
 
    cout << "Original Array: ";
    printArray(arr);
 
 
    bubbleSort(arr);
 
 
    selectionSort(arr);
 
 
    insertionSort(arr);
 
    return 0;
}