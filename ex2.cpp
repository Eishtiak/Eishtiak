#include <iostream>
using namespace std;
class Myclass{
    public:
    void myMethod(){
        cout << "Hello, World!";
    }
};
int main() {
    Myclass myObj;
    myObj.myMethod();
    return 0;
}