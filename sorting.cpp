#include <iostream>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a < b && a < c)
    {
        if (b < c)
        {
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << "\n";
        }
        else
        {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
            cout << "\n";
        }
    }
    else if (b < a && b < c)
    {
        if (a < c)
        {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
            cout << "\n";
        }
        else
        {
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
            cout << "\n";
        }
    }
    else if (c < a && c < b)
    {
        if (a < b)
        {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
            cout << "\n";
        }
        else
        {
            cout << c << endl;
            cout << b << endl;
            cout << a << endl;
            cout << "\n";
        }
    }
    else if (a == b)
    {
        if (a < c)
        { // a=b
            cout << a << endl;
            cout << b << endl;
            cout << c << endl;
            cout << "\n";
        }
        else
        {
            cout << c << endl;
            cout << a << endl;
            cout << b << endl;
            cout << "\n";
        }
    }
    else if (b == c)
    {
        if (b < a)
        { // b=c
            cout << b << endl;
            cout << c << endl;
            cout << a << endl;
            cout << "\n";
        }
        else
        {
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
            cout << "\n";
        }
    }
    else if(a==c){
        if(a<b){
            cout << a << endl;
            cout << c << endl;
            cout << b << endl;
            cout << "\n";
        }
        else {
            cout << b << endl;
            cout << a << endl;
            cout << c << endl;
            cout << "\n";
        }
    }
    else if(a==b && a==c && b==c){
        cout << c << endl;
        cout << a << endl;
        cout << b << endl;
        cout << "\n";
    }
    

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}