#include <iostream>
using namespace std;

// Bai 1
/*
class Shape {
public:
    double width;
    double height;

    
    Shape(double w, double h) : width(w), height(h) {}

    
    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};


class Rectangle : public Shape {
public:
    
    Rectangle(double w, double h) : Shape(w, h) {}

    
    double area() {
        return width * height;
    }
};


class Triangle : public Shape {
public:
    
    Triangle(double w, double h) : Shape(w, h) {}

    
    double area() {
        return 0.5 * width * height;
    }
};

int main() {
    
    Rectangle rectangle(7, 5);
    rectangle.display();
    cout << "Area of Rectangle: " << rectangle.area() << endl;

    
    Triangle triangle(7, 5);
    triangle.display();
    cout << "Area of Triangle: " << triangle.area() << endl;

    return 0;
}
*/


// Bai 2

class Employee {
public:
    string name;
    double salary;
    int thoi_gian_lam;

    
    Employee(string n, double s, int h) : name(n), salary(s), thoi_gian_lam(h) {}

    
    void display() {
        cout << "Name: " << name << ", Salary: " << salary << " VND, Thoi gian lam viec: " << thoi_gian_lam << endl;
    }
};
class Manager : public Employee {
public:
    string department;

    
    Manager(string n, double s, int h, string d) : Employee(n, s, h), department(d) {}

    
    void display() {
        Employee::display();
        cout << "Department: " << department << endl;
    }
};


class Worker : public Employee {
public:
    
    Worker(string n, double s, int h) : Employee(n, s, h) {}

    
    void display() {
        Employee::display();
    }
};

int main() {
    
    Worker worker1("Linh", 10000000, 40);
    cout << "Employee 1:" << endl;
    worker1.display();
    cout << "Position: Accountant" << endl << endl;

    
    Worker worker2("Truong", 15000000, 45);
    cout << "Employee 2:" << endl;
    worker2.display();
    cout << "Position: Programmer" << endl << endl;

    
    Manager manager1("Duc Anh", 100000000, 50, "CEO Office");
    cout << "Employee 3:" << endl;
    manager1.display();
    cout << "Position: Manager" << endl;

    return 0;
}
