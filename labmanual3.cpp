#include <iostream>
#include <string>
#include <cmath>
#include <cstdarg>
#include <limits.h>
using namespace std;

//q1->

/*int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    
    cout << "The larger number is: " << maxNumber(num1, num2) << endl;
    
    return 0;
}*/

//q2->

/*int factorial(int n) {
    if (n < 0) {
        cout     << "Error: Factorial of a negative number is undefined." << endl;
        return -1; 
    }
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int fact = factorial(num);
    if (fact != -1) {
        cout << "Factorial of " << num << " is: " << fact << endl;
    }
    return 0;
}*/

//q3->

/*int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int reversedNum = reverseNumber(num);
    cout << "Reversed number: " << reversedNum << endl;
    
    return 0;
}*/

//q4->

/*int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int sum = sumOfDigits(num);
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}*/

//q5->

/*bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}*/

//q6->

/*long long fibonacci(int n) {
    if (n <= 0) {
        cout << "Input should be a positive integer" << endl;
        return -1;
    } else if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    
    long long a = 0, b = 1;
    for (int i = 2; i < n; ++i) {
        long long temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}*/

//q7->

/*int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}*/

//q8->

/*void print(const string &s) {
    cout << "String: " << s << endl;
}

void print(int num) {
    cout << "Integer: " << num << endl;
}


void print(const string &s, int num) {
    cout << "String: " << s << ", Integer: " << num << endl;
}

int main() {
    string str = "Hello";
    int num = 42;

    print(str);            
    print(num);            
    print(str, num);       

    return 0;
}*/

//q9->

/*class Calculator {
public:
    
    int sum(int a, int b) {
        return a + b;
    }

    double sum(double a, double b, double c) {
        return a + b + c;
    }

    float sum(int a, float b) {
        return a + b;
    }
};

int main() {
    
    Calculator calc;
    int intResult = calc.sum(5, 10);                   
    double doubleResult = calc.sum(2.5, 3.5, 4.5);        
    float floatResult = calc.sum(3, 4.5f);                

    
    cout << "Sum of two integers: " << intResult << endl;
    cout << "Sum of three doubles: " << doubleResult << endl;
    cout << "Sum of one integer and one float: " << floatResult << endl;

    return 0;
}*/

//q10->

/*class Calculator {
public:
    
    int multiply(int a, int b) {
        return a * b;
    }
    double multiply(int a, double b) {
        return a * b;
    }

    float multiply(float a, float b, float c) {
        return a * b * c;
    }
};

int main() {
    Calculator calc;

    
    int intResult = calc.multiply(5, 10);            
    double doubleResult = calc.multiply(3, 4.5);       
    float floatResult = calc.multiply(2.5f, 3.5f, 4.0f);

    cout << "Product of two integers: " << intResult << endl;
    cout << "Product of one integer and one double: " << doubleResult << endl;
    cout << "Product of three floats: " << floatResult << endl;

    return 0;
}*/

//q11->

/*class Greeter {
public:
    
    void greet() {
        cout << "Hello!" << endl;
    }
        void greet(const string &name) {
        cout << "Hello, " << name << "!" << endl;
    }

    void greet(const string &name, int age) {
        cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    }
};

int main() {
    Greeter greeter;

    greeter.greet();                       
    greeter.greet("Alice");                
    greeter.greet("Bob", 30);    

    return 0;
}*/

//q12->

/*class Shape {
public:
    
    int area(int side) {
        return side * side;
    }

    int area(int length, int width) {
        return length * width;
    }

    double area(double radius) {4
        return 3.14159 * radius * radius;
    }
};

int main() {
    Shape shape;

    int squareArea = shape.area(5);             
    int rectangleArea = shape.area(4, 6);          
    double circleArea = shape.area(3.5);           

    cout << "Area of square: " << squareArea << endl;
    cout << "Area of rectangle: " << rectangleArea << endl;
    cout << "Area of circle: " << circleArea << endl;

    return 0;
}*/

//q13->

/*class StringManipulator {
public:
    string concat(const string &str1, const string &str2) {
        return str1 + str2;
    }

    string concat(int num, const string &str) {
        return to_string(num) + str;
    }
};

int main() {
    StringManipulator sm;

    string result1 = sm.concat("Hello, ", "World!");  
    string result2 = sm.concat(42, " is the answer"); 

    cout << "Concatenation of two strings: " << result1 << endl;
    cout << "Concatenation of int and string: " << result2 << endl;

    return 0;
}*/

//q14->

/*class Calculator {
public:
    
    int power(int base, int exponent) {
        return static_cast<int>(pow(base, exponent));  
    }

    double power(double base, int exponent) {
        return pow(base, exponent);  
    }
};

int main() {
    Calculator calc;

    int intResult = calc.power(2, 3);        
    double doubleResult = calc.power(2.5, 3); 

    cout << "2^3 = " << intResult << endl;
    cout << "2.5^3 = " << doubleResult << endl;

    return 0;
}*/

//q15->

/*int sum(int count, ...) {
    va_list args;  
    va_start(args, count);  

    int total = 0;
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);  
    }

    va_end(args);  
    return total;
}

int main() {
    
    cout << "Sum of 3, 5, 7: " << sum(3, 3, 5, 7) << endl;
    cout << "Sum of 10, 20, 30, 40: " << sum(4, 10, 20, 30, 40) << endl;
    cout << "Sum of 1, 2, 3, 4, 5: " << sum(5, 1, 2, 3, 4, 5) << endl;

    return 0;
}*/

//q16->

/*int findLargest(int count, ...) {
    va_list args;
    va_start(args, count);
    
    int max = va_arg(args, int); 
    
    for (int i = 1; i < count; i++) {
        int num = va_arg(args, int);
        if (num > max) {
            max = num;
        }
    }
    
    va_end(args);
    return max;
}

int main() {
    cout << "Largest: " << findLargest(5, 10, 25, 7, 199, 3) << endl;
    return 0;
}*/

//q17->

/*void concatStrings(int count, ...) {
    va_list args;
    va_start(args, count);
    
    string result;
    for (int i = 0; i < count; i++) {
        const char* str = va_arg(args, const char*);
        result += str;
    }
    
    va_end(args);
    cout << "Concatenated String: " << result << endl;
}

int main() {
    concatStrings(3, "Hello, ", "world", "!");
    return 0;
}*/

//q18->

/*int gcd(int a, int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int num1 = 56, num2 = 98;
    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    
    return 0;
}*/

//q19->



/*int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    
    
    int num = 6;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    
    return 0;
}*/

//q20->

/*int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num1 = 56, num2 = 98;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    
    int fibNum = 6;
    cout << "Fibonacci number at position " << fibNum << " is: " << fibonacci(fibNum) << endl;
    
    return 0;
}*/

//q21->

/*string reverseString(string str) {
    if (str.empty()) {
        return "";
    }
    return str.back() + reverseString(str.substr(0, str.size() - 1));
}

int main() {
    string input = "hello";
    cout << "Reversed string: " << reverseString(input) << endl;
    return 0;
}*/

//q22->

/*int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n = 5;
    cout << "Sum of first " << n << " natural numbers: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}*/

//q23->

/*int power(int base, int exp) {
    if (exp == 0) {
        return 1; 
    }
    return base * power(base, exp - 1);
}

int main() {
    int base = 2, exp = 3;
    cout << base << "^" << exp << " = " << power(base, exp) << endl;
    return 0;
}*/

//q24->

/*void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    swapNumbers(x, y);
    
    cout << "After swap: x = " << x << ", y = " << y << endl;
    return 0;
}*/

//q25->

/*int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size]; 
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    
    return 0;
}*/

//q26->

/*int findMax(int arr[], int size) {
    int maxVal = arr[0]; 
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i]; 
        }
    }
    return maxVal;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size]; 
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Maximum element: " << findMax(arr, size) << endl;
    
    return 0;
}*/

//q27->

/*void findSecondLargest(int arr[], int size, int &secondLargest) {
    if (size < 2) {
        cout << "Array must have at least two elements." << endl;
        secondLargest = INT_MIN; 
        return;
    }

    int largest = INT_MIN;
    secondLargest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i]; 
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i]; 
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "No second largest element found (all elements might be equal)." << endl;
    }
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    int arr[size]; 
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    int secondLargest;
    findSecondLargest(arr, size, secondLargest);

    if (secondLargest != INT_MIN) {
        cout << "Second largest element: " << secondLargest << endl;
    }

    return 0;
}*/

//q28->

/*int* generateFibonacci(int n) {
    if (n <= 0) {
        return nullptr; 
    }

    int* fibArray = new int[n]; 

    
    if (n >= 1) fibArray[0] = 0;
    if (n >= 2) fibArray[1] = 1;

    
    for (int i = 2; i < n; i++) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }

    return fibArray; 
}

int main() {
    int n;
    cout << "Enter the number of Fibonacci numbers to generate: ";
    cin >> n;

    int* fibArray = generateFibonacci(n);

    if (fibArray) {
        cout << "Fibonacci sequence: ";
        for (int i = 0; i < n; i++) {
            cout << fibArray[i] << " ";
        }
        cout << endl;

        delete[] fibArray; 
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }

    return 0;
}*/

//q29->

/*struct Student {
    string name;
    int marks;
};


void displayStudents(Student arr[], int size) {
    cout << "\nStudent Details:\n";
    for (int i = 0; i < size; i++) {
        cout << "Name: " << arr[i].name << ", Marks: " << arr[i].marks << endl;
    }
}

int main() {
    int size;

    cout << "Enter the number of students: ";
    cin >> size;

    Student students[size]; 


    for (int i = 0; i < size; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, students[i].name);
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> students[i].marks;
    }


    displayStudents(students, size);

    return 0;
}*/

//q30->

/*void doubleArray(int (&arr)[6]) {
    for (int i = 0; i < 6; i++) {
        arr[i] *= 2; 
    }
}
int main() {
    int arr[6];
    cout << "Enter 6 elements: ";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
    doubleArray(arr);

    cout << "Doubled array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}*/

































