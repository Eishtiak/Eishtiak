#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void displayInfo() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s;  
    cin >> s.name >> s.age;
    s.displayInfo();

    return 0;
}
