#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int score;
    int age;

    void eligible() {
        if (score > 10 && age > 20) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Age: " << age << endl;
        cout << "Eligible: ";
        eligible();
        cout << endl;
    }
};

int main() {
    Student obj;
    obj.name = "Tom";
    obj.score = 15;
    obj.age = 21;
    obj.display();
    return 0;
}
