#include <iostream>
#include<limits> 
#include<cmath>
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

int main(){
cout << "Enter the starting number: ";
cin >> start;
cout << "Enter the ending number: ";
cin >> end;

cout << "Armstrong numbers between " << start << " and " << end << " are:"<<endl;


for (int num = start; num <= end; num++) {
    int sum = 0, temp = num, digits = 0;

    
int temp2 = num;
while (temp2 > 0) {
    temp2 /= 10;
    digits++;
    }

    
    temp = num;
    while (temp > 0) {
    int digit = temp % 10;
    sum += pow(digit, digits);
    temp /= 10;
    }

    
    if (sum == num) {
    cout << num << " ";
    }
}

cout << endl;

return 0;
}








   
   
    