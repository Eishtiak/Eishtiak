#include <iostream>
using namespace std;
class Myclass{
    private:
    int privateValue;

    public:
    int publicValue;
    void publicFunction(){

    }
};
int main() {
    Myclass obj;
    obj.publicValue = 10;
    obj.publicFunction();
    return 0;
}