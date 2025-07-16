#include <iostream>
using namespace std;

class User {
private:
    string name;
    string password;

public:
    User() {
        name = "Alice";
        password = "Wonderland";
    }

    void set(string name, string password) {
        this->name = name;
        this->password = password;
    }

    void get() {
        cout << name << " " << password << "\n";
    }
};

int main() {
    User obj;
    obj.get();                
    obj.set("Tom", "Jerry");  
    obj.get();               
    return 0;
}
