#include <iostream>
using namespace std;

//q1->

/*void printButterfly(int n) {
    
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;
    printButterfly(n);
    return 0;
}*/


//q2->

/*void reverseArray(int arr[], int n) {
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    reverseArray(arr, n);
    
    return 0;
}*/

//q3->

/*void findMaxMin(int arr[], int n) {
    int maxVal = arr[0]; 
    int minVal = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; 
        }
        if (arr[i] < minVal) {
            minVal = arr[i]; 
        }
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    findMaxMin(arr, n);
    
    return 0;
}*/

//q4->

void calculateSumAndAverage(int arr[], int n) {
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    double average = (double)sum / n;
    
    cout << "Sum of elements: " << sum << endl;
    cout << "Average of elements: " << average << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    calculateSumAndAverage(arr, n);
    
    return 0;
}

