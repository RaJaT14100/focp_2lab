#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

//q1->

/*bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}


int nextPrime(int n) {
    int next = n + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}


void printFactors(int n) {
    cout << "Factors of " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "Next prime number is: " << nextPrime(n) << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        printFactors(n);
    }

    return 0;
}*/

//q2->
/*void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}


void findSecondLargestAndSmallest(vector<int> arr) {
    sort(arr.begin(), arr.end()); 
    int smallest = arr[0], secondSmallest = -1;
    int largest = arr[arr.size() - 1], secondLargest = -1;

    for (int num : arr) {
        if (num > smallest) {
            secondSmallest = num;
            break;
        }
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] < largest) {
            secondLargest = arr[i];
            break;
        }
    }

    cout << "Second Smallest: " << secondSmallest << endl;
    cout << "Second Largest: " << secondLargest << endl;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(arr);
    cout << "Reversed Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    findSecondLargestAndSmallest(arr);

    return 0;
}*/

//q3->

/*bool isPalindrome(string str) {
    string cleanedStr = "";
    for (char c : str) {
        if (isalnum(c)) cleanedStr += tolower(c);
    }
    string reversedStr = cleanedStr;
    reverse(reversedStr.begin(), reversedStr.end());
    return cleanedStr == reversedStr;
}


void countFrequency(string str) {
    map<char, int> freq;
    for (char c : str) {
        if (isalpha(c)) freq[tolower(c)]++;
    }

    cout << "Character frequencies:\n";
    for (auto pair : freq) {
        cout << pair.first << ": " << pair.second << endl;
    }
}


string replaceVowels(string str, char replacement) {
    string vowels = "aeiouAEIOU";
    for (char &c : str) {
        if (vowels.find(c) != string::npos) c = replacement;
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    countFrequency(str);

    string modifiedStr = replaceVowels(str, '*');
    cout << "String after replacing vowels: " << modifiedStr << endl;

    return 0;
}*/

//q4->

/*void generateSpiralMatrix(int n) {
    int matrix[n][n];
    int num = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) matrix[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) matrix[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) matrix[i][left] = num++;
        left++;
    }

    cout << "Spiral Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    generateSpiralMatrix(n);
    return 0;
}*/


//q5->

#include <iostream>
using namespace std;


void rotateMatrix90(int matrix[][100], int n) {
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n / 2; j++) {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }
}

void printMatrix(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;

    int matrix[100][100]; 

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Original Matrix:\n";
    printMatrix(matrix, n);

    rotateMatrix90(matrix, n);

    cout << "Matrix after 90-degree rotation:\n";
    printMatrix(matrix, n);

    return 0;
}



