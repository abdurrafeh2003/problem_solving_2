#include <iostream>
using namespace std;
int main()
{
    char x, y;
    cin >> x;
    int a = x, b = x + 1;
    // cout<<a<<endl;
    y = b;
    if (b >= 97 && b <= 122)
    {
        cout << y << endl;
    }
    else if (b > 122)
    {
        cout << "a" << endl;
    }

    return 0;
}