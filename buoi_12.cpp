#include <iostream>
#include <string>
using namespace std;

class Hoc_sinh {
    private:
        string name;
        int age;

    public:
        
        Hoc_sinh() {
            name = "";
            age = 0;
        }

        
        void getInformation() {
            cout << "Nhap ten hoc sinh: ";
            getline(cin, name);
            cout << "Nhap tuoi hoc sinh: ";
            cin >> age;
            cin.ignore(); 
        }

        
        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main() {
    Hoc_sinh student;

    
    student.getInformation();

    
    student.display();

    return 0;
}

