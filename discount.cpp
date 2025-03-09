#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x, p, op ;

    cin >> x >> p;
    // ds=(1-(x/100));
    op = p / (1 - (x / 100));
    cout<< fixed << setprecision(2) << op;

    return 0;
}