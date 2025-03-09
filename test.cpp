#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int num1 = 123;
    int num2 = 4567;
    int num3 = 89;
    cout<<"Output of the numbers : \n";
    cout  << num1 <<  num2  << num3 << endl;
    
    cout<<"Output of the numbers by using setw : \n";
    cout << setw(8) << num1 << setw(8) << num2 << setw(8) << num3 << endl;

    return 0;
}
