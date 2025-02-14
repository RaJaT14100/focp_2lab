#include <iostream>
#include<limits> 
#include<limits.h>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include <iomanip>
using namespace std;
//q16->


/*bool oppositeSigns(int a, int b) {
    return (a ^ b) < 0;  
}

int main() {
    cout << boolalpha;
    cout << oppositeSigns(5, -3) << endl;  
    cout << oppositeSigns(-7, 2) << endl;  
    cout << oppositeSigns(4, 6) << endl;   
    cout << oppositeSigns(-2, -8) << endl; */
   
  // return 0;
  //}

  //q17->

/*int main(){
    int a, b;
    
    cout << "Enter Two Numbers: " << endl;
    cin >> a >> b;

    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 1; // Exit with error
    }

    int quotient = 0;
    
    while (a >= b) {  // Subtracting b from a until a is smaller than b
        a -= b;
        quotient++;
    }

    cout << "Quotient: " << quotient << endl;*/


   // return 0;
//}


//q18->


/*unsigned int circularLeftShift(unsigned int num, int shift, int bitSize) {
    return (num << shift) | (num >> (bitSize - shift));
}


unsigned int circularRightShift(unsigned int num, int shift, int bitSize) {
    return (num >> shift) | (num << (bitSize - shift));
}

int main() {
    unsigned int num;
    int shift;
    const int bitSize = sizeof(num) * 8; 

    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Enter number of positions to shift: ";
    std::cin >> shift;

    shift = shift % bitSize; 
    
    unsigned int leftShifted = circularLeftShift(num, shift, bitSize);
    unsigned int rightShifted = circularRightShift(num, shift, bitSize);

    std::cout << "Original number: " << num << "\n";
    std::cout << "After circular left shift: " << leftShifted << "\n";
    std::cout << "After circular right shift: " << rightShifted << "\n";

    return 0;
}*/

//q19->
/*int main(){
int marks;
cout<<"Enter Your Marks:-> "<<endl;
cin>>marks;
 
 if(marks>=90)
 cout<<"You Got A Grade";
 
 else if(marks>=80 && marks<=80)
 cout<<"You Got B Grade";
 
 else if(marks>=70 && marks<=70)
 cout<<"You Got C Grade";
 
 else
 cout<<"You Are Fail";
 
 
 return 0;
 }*/


//q20->


/*void showMenu() {
    cout << "\nSimple Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    int choice;
    double num1, num2;
    
    do {
        showMenu();
        cin >> choice;
        
        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }
        
        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero is not allowed!" << endl;
                break;
            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
    
    return 0;
}*/

//q21->

/*int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
        } else {
            cout << year << " is a leap year." << endl;
        }
    } else {
        cout << year << " is not a leap year." << endl;
    }
    
    return 0;
}*/

//q22->

/*int main() {
    int n, first = 0, second = 1, next;
    
    cout << "Enter the number of Fibonacci terms: ";
    cin >> n;
    
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
    
    return 0;
}*/

//q23->

/*int main() {
    int num, i = 2;
    bool isPrime = true;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 1) {
        isPrime = false;
    } else {
        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
            i++;
        }
    }
    
    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;
    
    return 0;
}*/

//q24->

/*int main() {
    int num, factorial = 1, i = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    } else {
        do {
            factorial *= i;
            i++;
        } while (i <= num);
        
        cout << "Factorial of " << num << " is " << factorial << endl;
    }
    
    return 0;
}*/

//q25->

/*int main() {
    string input;
    int sum = 0, count = 0, num;
    int maxNum = numeric_limits<int>::min();
    int minNum = numeric_limits<int>::max();
    
    cout << "Enter integers (type 'exit' to stop):" << endl;
    
    while (true) {
        cin >> input;
        
        if (input == "exit") {
            break;
        }
        
        try {
            num = stoi(input);
            sum += num;
            count++;
            
            if (num > maxNum) maxNum = num;
            if (num < minNum) minNum = num;
        } catch (exception &e) {
            cout << "Invalid input. Please enter an integer or 'exit' to quit." << endl;
        }
    }
    
    if (count > 0) {
        cout << "\nSummary:" << endl;
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Maximum: " << maxNum << endl;
        cout << "Minimum: " << minNum << endl;
    } else {
        cout << "No valid integers entered." << endl;
    }
    
    return 0;
}*/

//q26->


/*int main() {
    int n, count = 0, num = 2; 

    cout << "Enter the number of prime numbers to generate: ";
    cin >> n;

    cout << "First " << endl << " prime numbers:"<<endl;

    
    while (count < n) {
        bool isPrime = true;

        
        if (num <= 1) {
        isPrime = false;
    } else {
    for (int i = 2; i <= sqrt(num); i++) { 
    if (num % i == 0) {
    isPrime = false;
    break; 
     }
    }
    }

    if (isPrime) { 
     cout << num << " ";
    ount++;
    }
    num++;
    }

    cout << endl;
    return 0;
}*/

//q27->

/*int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}


bool isArmstrong(int num) {
    int sum = 0, temp = num;
    int digits = countDigits(num);
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;

    cout << "Armstrong numbers in the given range: ";
    for (int num = start; num <= end; num++) {
        if (isArmstrong(num)) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}*/

//q28->

/*int main() {
    srand(time(0));
    int number = rand() % 100 + 1; 
    int guess, attempts = 5;

    cout << "Guess the number (between 1 and 100). You have " << attempts << " attempts." << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congratulations! You guessed the number correctly." << endl;
            return 0;
        } else if (guess > number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }
        
        attempts--;
        if (attempts > 0) {
            cout << "Attempts remaining: " << attempts << endl;
        }
    }
    
    cout << "Sorry, you've run out of attempts. The number was " << number << "." << endl;
    return 0;
}*/

//q29->


/*int main() {
    int num = 51; 

    while (num % 7 != 0) {
        num++; 
    }

    std::cout << "The first number greater than 50 that is divisible by 7 is: " << num << std::endl;


    return 0;
}*/

//q30->

/*int main() {
    int sum = 0;

    for (int num = 1; num <= 500; num++) {
        if (num % 3 == 0 && num % 7 == 0) {
            continue; 
        }

        if (sum + num > 1000) {
            break; 
        }

        cout << num << " ";
        sum += num;
    }

    cout << "\nSum of printed numbers: " << sum << std::endl;
    return 0;
}*/

//q31->

/*int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (true) {
        int reversed = reverseNumber(num);
        cout << "Reversed Number: " << reversed << endl;

        if (isPalindrome(reversed)) {
            cout << "Palindrome reached! Terminating..." << endl;
            break;
    }

    num = num + reversed;

}
    return 0;
}*/

//q32->

/*int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        return -1;
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;
    bool foundSecond = false;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
            foundSecond = true;
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
            foundSecond = true;
        }
    }

    return foundSecond ? secondLargest : -1;
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size < 2) {
        cout << "Array must contain at least two elements!" << endl;
        return 0;
    }

    int *arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    delete[] arr;
    return 0;
}*/

//q33->

/*bool hasExactBinaryRepresentation(double num) {
    
    long long intPart = static_cast<long long>(num);
    double fracPart = num - intPart;

    if (fracPart == 0.0) return true;

    
    while (fracPart > 0.0) {
        fracPart *= 2;
        if (fracPart >= 1.0) {
            fracPart -= 1.0;
        }

        
        static int iterationLimit = 100; 
        if (--iterationLimit == 0) return false;
    }

    return true;
}

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;

    cout << fixed << setprecision(15); 

    if (hasExactBinaryRepresentation(num)) {
        cout << num << " can be exactly represented in binary." << endl;
    } else {
        cout << num << " cannot be exactly represented in binary." << endl;
        cout << "Explanation: Its fractional part has a denominator that is not a power of 2." << endl;
    }

    return 0;
}*/

//q32->

/*int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols]; 

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    
    cout << "\nFormatted 2D Array Table:\n";
    cout << "------------------------\n";

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(6) << arr[i][j] << " "; 
        }
        cout << endl;
    }

    cout << "------------------------\n";

    return 0;
}*/

//q35->

int computeGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int computeLCM(int a, int b) {
    return (a / computeGCD(a, b)) * b;  
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 == 0 || num2 == 0) {
        cout << "LCM and GCD are not defined for zero." << endl;
        return 0;
    }

    int gcd = computeGCD(num1, num2);
    int lcm = computeLCM(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;

    return 0;
}



