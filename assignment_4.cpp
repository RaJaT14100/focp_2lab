#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stdexcept>

using namespace std;

class UniversitySystemException : public runtime_error {
public:
    UniversitySystemException(const string& msg) : runtime_error(msg) {}
};

class EnrollmentException : public UniversitySystemException {
public:
    EnrollmentException(const string& msg) : UniversitySystemException("Enrollment Error: " + msg) {}
};

class GradeException : public UniversitySystemException {
public:
    GradeException(const string& msg) : UniversitySystemException("Grade Error: " + msg) {}
};

class PaymentException : public UniversitySystemException {
public:
    PaymentException(const string& msg) : UniversitySystemException("Payment Error: " + msg) {}
};

class Person {
protected:
    string name;
    int age;
    string ID;
    string contactInfo;

public:
    Person(string name, int age, string ID, string contactInfo) : name(name), age(age), ID(ID), contactInfo(contactInfo) {
        if (ID.empty()) throw UniversitySystemException("ID cannot be empty");
    }
    virtual ~Person() {}

    virtual void displayDetails() const {
        cout << name << ", " << age << ", " << ID << ", " << contactInfo << endl;
    }

    virtual double calculatePayment() const {
        return 0.0;
    }
};

class Student : public Person {
protected:
    string enrollmentDate;
    string program;
    double GPA;

public:
    Student(string name, int age, string ID, string contactInfo, string enrollmentDate, string program, double GPA)
        : Person(name, age, ID, contactInfo), enrollmentDate(enrollmentDate), program(program), GPA(GPA) {
        if (GPA < 0.0 || GPA > 4.0) throw GradeException("Invalid GPA value");
    }

    void displayDetails() const override {
        Person::displayDetails();
        cout << program << ", " << GPA << ", " << enrollmentDate << endl;
    }

    double calculatePayment() const override {
        return 1000.0;
    }
};

class UndergraduateStudent : public Student {
private:
    string major;
    string minor;
    string graduationDate;

public:
    UndergraduateStudent(string name, int age, string ID, string contactInfo, string enrollmentDate, string program,
                         double GPA, string major, string minor, string graduationDate)
        : Student(name, age, ID, contactInfo, enrollmentDate, program, GPA),
          major(major), minor(minor), graduationDate(graduationDate) {}

    void displayDetails() const override {
        Student::displayDetails();
        cout << major << ", " << minor << ", " << graduationDate << endl;
    }
};

class GraduateStudent : public Student {
private:
    string researchTopic;
    string advisor;
    string thesisTitle;

public:
    GraduateStudent(string name, int age, string ID, string contactInfo, string enrollmentDate, string program,
                    double GPA, string researchTopic, string advisor, string thesisTitle)
        : Student(name, age, ID, contactInfo, enrollmentDate, program, GPA),
          researchTopic(researchTopic), advisor(advisor), thesisTitle(thesisTitle) {}

    void displayDetails() const override {
        Student::displayDetails();
        cout << researchTopic << ", " << advisor << ", " << thesisTitle << endl;
    }

    void trackAssistantships() const {
        cout << "Tracking assistantships for: " << name << endl;
    }
};

class Professor : public Person {
protected:
    string department;
    string specialization;
    string hireDate;
    int yearsOfService;

public:
    Professor(string name, int age, string ID, string contactInfo, string department,
              string specialization, string hireDate, int yearsOfService)
        : Person(name, age, ID, contactInfo), department(department), specialization(specialization),
          hireDate(hireDate), yearsOfService(yearsOfService) {}

    virtual void displayDetails() const override {
        Person::displayDetails();
        cout << department << ", " << specialization << ", " << hireDate << ", Years: " << yearsOfService << endl;
    }

    virtual double calculatePayment() const override {
        return 5000.0 + (yearsOfService * 100);
    }
};

class AssistantProfessor : public Professor {
public:
    AssistantProfessor(string name, int age, string ID, string contactInfo, string department,
                       string specialization, string hireDate, int yearsOfService)
        : Professor(name, age, ID, contactInfo, department, specialization, hireDate, yearsOfService) {}

    double calculatePayment() const override {
        return 6000.0 + (yearsOfService * 120);
    }
};

class AssociateProfessor : public Professor {
public:
    AssociateProfessor(string name, int age, string ID, string contactInfo, string department,
                       string specialization, string hireDate, int yearsOfService)
        : Professor(name, age, ID, contactInfo, department, specialization, hireDate, yearsOfService) {}

    double calculatePayment() const override {
        return 7000.0 + (yearsOfService * 150);
    }
};

class FullProfessor : public Professor {
private:
    double researchGrants;

public:
    FullProfessor(string name, int age, string ID, string contactInfo, string department,
                  string specialization, string hireDate, int yearsOfService, double researchGrants)
        : Professor(name, age, ID, contactInfo, department, specialization, hireDate, yearsOfService),
          researchGrants(researchGrants) {}

    double calculatePayment() const override {
        return 9000.0 + (yearsOfService * 200) + researchGrants;
    }
};

class Course {
private:
    string code;
    string title;
    int credits;
    string description;
    Professor* instructor;

public:
    Course(string code, string title, int credits, string description, Professor* instructor)
        : code(code), title(title), credits(credits), description(description), instructor(instructor) {
        if (credits <= 0) throw EnrollmentException("Course credits must be positive");
    }

    void display() const {
        cout << title << " (" << code << ") - " << credits << " credits: " << description << endl;
        if (instructor) instructor->displayDetails();
    }
};

class Department {
private:
    string name;
    string location;
    double budget;
    vector<Professor*> professors;

public:
    Department(string name, string location, double budget)
        : name(name), location(location), budget(budget) {}

    void addProfessor(Professor* professor) {
        professors.push_back(professor);
    }
};

class University {
private:
    vector<Department> departments;

public:
    void addDepartment(const Department& dept) {
        departments.push_back(dept);
    }
};

class Classroom {
private:
    string roomNumber;
    int capacity;

public:
    Classroom(string roomNumber, int capacity) : roomNumber(roomNumber), capacity(capacity) {}
};

class Schedule {
private:
    map<string, pair<string, string>> timeSlots;

public:
    void addSlot(const string& courseCode, const string& time, const string& room) {
        timeSlots[courseCode] = make_pair(time, room);
    }
};

int main() {
    try {
        UndergraduateStudent u1("Alice", 20, "U001", "alice@example.com", "2022-09-01", "BSc CS", 3.6, "CS", "Math", "2026-05-01");
        GraduateStudent g1("Bob", 25, "G001", "bob@example.com", "2021-09-01", "MSc AI", 3.8, "Machine Learning", "Dr. Smith", "Deep Learning Optimization");

        AssistantProfessor p1("Dr. Green", 40, "P001", "green@example.com", "CS", "AI", "2015-08-15", 8);
        FullProfessor p2("Dr. Blue", 55, "P002", "blue@example.com", "CS", "ML", "2000-08-15", 25, 3000.0);

        Course course1("CS101", "Intro to Programming", 4, "Basic C++ course", &p1);
        Department dept("Computer Science", "Building A", 100000.0);
        dept.addProfessor(&p1);
        dept.addProfessor(&p2);

        University uni;
        uni.addDepartment(dept);

        course1.display();
        u1.displayDetails();
        g1.displayDetails();
        g1.trackAssistantships();
        p1.displayDetails();
        p2.displayDetails();

        cout << "Payment for Assistant Prof: " << p1.calculatePayment() << endl;
        cout << "Payment for Full Prof: " << p2.calculatePayment() << endl;
    } catch (const UniversitySystemException& e) {
        cerr << "Exception: " << e.what() << endl;
    } catch (const exception& e) {
        cerr << "Standard exception: " << e.what() << endl;
    }

    return 0;
}