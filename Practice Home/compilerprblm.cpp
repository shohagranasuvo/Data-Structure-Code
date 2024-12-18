#include <bits/stdc++.h>
using namespace std;

int main () {

    
    int tt;
    cin >> tt;
    
    while (tt!=0) {
        int n, cnt = 0;
        cin >> n;
        
        int arr[n];
        
        for(int i =0 ; i< n-1; i++) {
            cin >> arr[i];
            
        }
        
        
        sort(arr, arr + n);
        
         
         for (int i = 0; i< n-1; i++) {
             if(arr[i]==arr[i+1]) {
                 cnt++;
                 i++;
             }
         }
        
        
        cout << cnt << endl;
        
        
        tt--;
    }
    
    
}