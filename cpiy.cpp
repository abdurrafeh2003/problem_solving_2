#include <iostream>
using namespace std;

class Example {
    public:
        void display(int a) {
            cout << "Integer: " << a << endl;
        }

        void display(double b) {
            cout << "Double: " << b << endl;
        }

        void display(int a, double b) {
            cout << "Integer: " << a << ", Double: " << b << endl;
        }
};

int main() {
    Example ex;
    ex.display(5); // Calls the first display(int) function
    ex.display(3.14); // Calls the second display(double) function
    ex.display(5, 3.14); // Calls the third display(int, double) function
    return 0;
}
