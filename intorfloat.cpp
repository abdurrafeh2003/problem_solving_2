#include <iostream>
using namespace std;
int main()
{
    double n;
    cin >> n;
    long long a;
    a = n;
    double c = (n - a);
    if (n == a)
    {
        cout << "int " << n << endl;
    }
    else
    {
        cout << "float " << a << " " <<  c << endl;
    }

    return 0;
}