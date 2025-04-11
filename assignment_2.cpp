#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Person {
private:
    string name;
    int age;
    string ID;
    string contactInfo;

public:
    Person(string name, int age, string ID, string contactInfo) {
        setName(name);
        setAge(age);
        this->ID = ID;
        this->contactInfo = contactInfo;
    }

    virtual ~Person() {}

    void setName(const string& name) {
        if (!name.empty()) this->name = name;
    }

    void setAge(int age) {
        if (age > 0 && age < 120) this->age = age;
    }

    void setContactInfo(const string& contactInfo) {
        this->contactInfo = contactInfo;
    }

    void setID(const string& ID) {
        this->ID = ID;
    }

    string getName() const { return name; }
    int getAge() const { return age; }
    string getID() const { return ID; }
    string getContactInfo() const { return contactInfo; }

    virtual void displayDetails() const {
        cout << name << ", " << age << ", " << ID << ", " << contactInfo << endl;
    }

    virtual double calculatePayment() const {
        return 0.0;
    }
};

class Student : public Person {
private:
    string enrollmentDate;
    string program;
    double GPA;

public:
    Student(string name, int age, string ID, string contactInfo, string enrollmentDate, string program, double GPA)
        : Person(name, age, ID, contactInfo), enrollmentDate(enrollmentDate), program(program) {
        setGPA(GPA);
    }

    void setGPA(double GPA) {
        if (GPA >= 0.0 && GPA <= 4.0) this->GPA = GPA;
    }

    double getGPA() const { return GPA; }

    void displayDetails() const override {
        Person::displayDetails();
        cout << program << ", " << GPA << ", " << enrollmentDate << endl;
    }

    double calculatePayment() const override {
        return 1000.0;
    }
};

class Professor : public Person {
private:
    string department;
    string specialization;
    string hireDate;

public:
    Professor(string name, int age, string ID, string contactInfo, string department, string specialization, string hireDate)
        : Person(name, age, ID, contactInfo), department(department), specialization(specialization), hireDate(hireDate) {}

    void displayDetails() const override {
        Person::displayDetails();
        cout << department << ", " << specialization << ", " << hireDate << endl;
    }

    double calculatePayment() const override {
        return 5000.0;
    }
};

class Course {
private:
    string code;
    string title;
    int credits;
    string description;

public:
    Course(string code, string title, int credits, string description)
        : code(code), title(title), description(description) {
        setCredits(credits);
    }

    void setCredits(int credits) {
        if (credits > 0) this->credits = credits;
    }

    void display() const {
        cout << title << " (" << code << ") - " << credits << ": " << description << endl;
    }
};

class Department {
private:
    string name;
    string location;
    double budget;

public:
    Department(string name, string location, double budget)
        : name(name), location(location), budget(budget) {}
};

class GradeBook {
private:
    map<string, double> grades;

public:
    void addGrade(const string& studentID, double grade) {
        grades[studentID] = grade;
    }

    double calculateAverageGrade() const {
        double total = 0;
        for (const auto& entry : grades) total += entry.second;
        return grades.empty() ? 0.0 : total / grades.size();
    }

    double getHighestGrade() const {
        double maxGrade = 0;
        for (const auto& entry : grades) {
            if (entry.second > maxGrade) maxGrade = entry.second;
        }
        return maxGrade;
    }

    vector<string> getFailingStudents() const {
        vector<string> failing;
        for (const auto& entry : grades) {
            if (entry.second < 60) failing.push_back(entry.first);
        }
        return failing;
    }
};

class EnrollmentManager {
private:
    map<string, vector<string>> courseEnrollments;

public:
    void enrollStudent(const string& courseCode, const string& studentID) {
        courseEnrollments[courseCode].push_back(studentID);
    }

    void dropStudent(const string& courseCode, const string& studentID) {
        auto& students = courseEnrollments[courseCode];
        students.erase(remove(students.begin(), students.end(), studentID), students.end());
    }

    int getEnrollmentCount(const string& courseCode) const {
        auto it = courseEnrollments.find(courseCode);
        return it != courseEnrollments.end() ? it->second.size() : 0;
    }
};

void testPolymorphism(Person* person) {
    person->displayDetails();
    cout << person->calculatePayment() << endl;
}

int main() {
    Student s1("Alice", 20, "S001", "alice@email.com", "2023-08-01", "CS", 3.5);
    Student s2("Bob", 22, "S002", "bob@email.com", "2022-08-01", "Math", 3.8);
    Professor p1("Dr. Smith", 45, "P001", "smith@email.com", "Engineering", "AI", "2015-01-01");
    Professor p2("Dr. Jones", 50, "P002", "jones@email.com", "Science", "Physics", "2010-05-15");
    Course c1("CS101", "Intro to CS", 3, "Basic computer science concepts.");
    Course c2("MATH201", "Calculus I", 4, "Differential and Integral Calculus.");
    Department d1("Computer Science", "Building A", 200000);
    Department d2("Mathematics", "Building B", 150000);

    GradeBook gb;
    gb.addGrade("S001", 85);
    gb.addGrade("S002", 55);

    EnrollmentManager em;
    em.enrollStudent("CS101", "S001");
    em.enrollStudent("MATH201", "S002");

    vector<Person*> people = { &s1, &s2, &p1, &p2 };
    for (Person* p : people) {
        testPolymorphism(p);
    }

    return 0;
}