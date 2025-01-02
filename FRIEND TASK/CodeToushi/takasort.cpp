#include <iostream>
using namespace std;


void sortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
if (arr[i] < arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int banknotes[10];
    int totalAmount = 0, targetAmount , notesCount = 0;

    
    cout << "Enter 10 banknote values: ";
    for (int i = 0; i < 10; i++) {
        cin >> banknotes[i];
        totalAmount += banknotes[i]; 
    }

    
    sortDescending(banknotes, 10);

   
    cout << "After Sort: ";
    for (int i = 0; i < 10; i++) {
        cout << banknotes[i] << " ";
    }
    cout << endl;

    
    cout << "Total Amount: " << totalAmount << " taka" << endl;

    cout<<"Give targate ammount ";
    cin>>targetAmount;
    if (targetAmount >= totalAmount) {
        cout << "Target amount must be less than total amount." << endl;
        return 0;
    }

    
    int remainingAmount = targetAmount;

    int j=0;
    int arr1[10];
    for (int i = 0; i < 10 && remainingAmount > 0; i++) {
        if ( remainingAmount >= banknotes[i]) {
            remainingAmount -= banknotes[i];
           arr1[j]=banknotes[i];
           j++;
            notesCount++;
        }
    }
    cout << endl;

   
    cout << "Number of notes used: " << notesCount << " which are : ";

    for(int k = 0 ;k<j ;k++ )
    {

        cout<<arr1[k]<<" ";



    
    }

    return 0;
}
