#include <iostream>
#include <string>
#include <cmath>
#include <cstdarg>
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
        cerr << "Error: Factorial of a negative number is undefined." << endl;
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

    double area(double radius) {
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

int sum(int count, ...) {
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
}




















