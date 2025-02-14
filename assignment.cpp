w


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

/*void calculateSumAndAverage(int arr[], int n) {
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
}*/

//q6-> 

/*int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the number to search: ";
    cin >> key;
    
    int index = linearSearch(arr, n, key);
    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    
    return 0;
}*/

//q7->

/*#include <set>

void removeDuplicates(int arr[], int n) {
    set<int> uniqueElements(arr, arr + n);  

    cout << "Array after removing duplicates: ";
    for (int num : uniqueElements) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeDuplicates(arr, n);
    return 0;
}*/

//q8->

/*#include <unordered_set>

int longestConsecutiveSubsequence(int arr[], int n) {
    unordered_set<int> s(arr, arr + n); 
    int maxLength = 0;

    for (int num : s) {
        
        if (s.find(num - 1) == s.end()) {
            int currentNum = num;
            int length = 1;

            while (s.find(currentNum + 1) != s.end()) {
                currentNum++;
                length++;
            }

            maxLength = max(maxLength, length);
        }
    }
    return maxLength;
}

int main() {
    int arr[] = {1, 9, 3, 10, 2, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of longest consecutive subsequence: " 
         << longestConsecutiveSubsequence(arr, n) << endl;

    return 0;
}*/

//q9->

/*void transposeMatrix(int matrix[][10], int rows, int cols) {
    int transpose[10][10];  

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix, rows, cols);
    return 0;
}*/

//q10->

/*void multiplyMatrices(int A[][10], int B[][10], int result[][10], int m, int n, int p) {
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += A[i][k] * B[k][j];  
            }
        }
    }
}

void displayMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m, n, p;
    cout << "Enter dimensions of first matrix (rows columns): ";
    cin >> m >> n;
    int A[10][10];

    cout << "Enter elements of first matrix (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter dimensions of second matrix (columns): ";
    cin >> p;  
    int B[10][10];

    cout << "Enter elements of second matrix (" << n << "x" << p << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    int result[10][10];  
    multiplyMatrices(A, B, result, m, n, p);

    cout << "Product of matrices:\n";
    displayMatrix(result, m, p);

    return 0;
}*/

//q11->

/*void diagonalSum(int matrix[][10], int n) {
    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum += matrix[i][i];                
        secondarySum += matrix[i][n - i - 1];      
    }

    cout << "Sum of primary diagonal: " << primarySum << endl;
    cout << "Sum of secondary diagonal: " << secondarySum << endl;
    
    
    if (n % 2 != 0) {
        int centerElement = matrix[n / 2][n / 2];
        cout << "Since it's an odd-sized matrix, the center element " << centerElement << " was counted twice." << endl;
        cout << "Corrected total sum of both diagonals: " << (primarySum + secondarySum - centerElement) << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[10][10];
    cout << "Enter the elements of the matrix (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    diagonalSum(matrix, n);
    return 0;
}*/

//q12->

/*void findMaxSumRow(int matrix[][10], int rows, int cols) {
    int maxSum = 0, maxRowIndex = 0;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];  
        }

        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }

    cout << "Row with the maximum sum is: Row " << maxRowIndex + 1 << " (0-based index: " << maxRowIndex << ")" << endl;
    cout << "Maximum sum: " << maxSum << endl;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    findMaxSumRow(matrix, rows, cols);
    return 0;
}*/

//q13->

/*bool searchInSortedMatrix(int matrix[][10], int rows, int cols, int target) {
    int i = 0, j = cols - 1;  

    while (i < rows && j >= 0) {
        if (matrix[i][j] == target) {
            cout << "Target " << target << " found at position: (" << i << ", " << j << ")" << endl;
            return true;
        } else if (matrix[i][j] > target) {
            j--;  
        } else {
            i++;  
        }
    }

    cout << "Target " << target << " not found in the matrix." << endl;
    return false;
}

int main() {
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements of the sorted matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target value to search: ";
    cin >> target;

    searchInSortedMatrix(matrix, rows, cols, target);
    return 0;
}*/

//q14->

/*void printBoundaryElements(int matrix[][10], int rows, int cols) {
    if (rows == 1) {  
        
        for (int j = 0; j < cols; j++)
            cout << matrix[0][j] << " ";
    } 
    else if (cols == 1) {  
    
        for (int i = 0; i < rows; i++)
            cout << matrix[i][0] << " ";
    } 
    else {  
        
        for (int j = 0; j < cols; j++)
            cout << matrix[0][j] << " ";
        
        
        for (int i = 1; i < rows - 1; i++)
            cout << matrix[i][cols - 1] << " ";
    
        
        for (int j = cols - 1; j >= 0; j--)
            cout << matrix[rows - 1][j] << " ";
        
        
        for (int i = rows - 2; i > 0; i--)
            cout << matrix[i][0] << " ";
    }
    
    cout << endl;
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Boundary elements of the matrix:\n";
    printBoundaryElements(matrix, rows, cols);
    
    return 0;
}*/

//q15->

void findSaddlePoint(int matrix[][10], int rows, int cols) {
    bool found = false;

    for (int i = 0; i < rows; i++) {
        int minRowIndex = 0;
        int minRowValue = matrix[i][0];

        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minRowValue) {
                minRowValue = matrix[i][j];
                minRowIndex = j;
            }
        }

        bool isSaddlePoint = true;
        for (int k = 0; k < rows; k++) {
            if (matrix[k][minRowIndex] > minRowValue) {
                isSaddlePoint = false;
                break;
            }
        }

        if (isSaddlePoint) {
            cout << "Saddle Point Found: " << minRowValue << " at position (" << i << ", " << minRowIndex << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "No Saddle Point Found\n";
    }
}

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int matrix[10][10];
    cout << "Enter elements of the matrix (" << rows << "x" << cols << "):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    findSaddlePoint(matrix, rows, cols);
    return 0;
}





