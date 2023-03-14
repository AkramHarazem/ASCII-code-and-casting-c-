#include <iostream>

using namespace std;

int main()
{
    // ASCII code for character
    //cout << "Hello world!" << endl;
    char c;
    cout << "Enter Character: "<<endl;
    cin >> c;
    cout<< "ASCII code of " << c << " is " << int(c)<<endl;

    // ASCII value
    int n;
    cout << "Enter number: "<<endl;
    cin >> n;
    cout<< "ASCII char of " << n << " is " << char(n)<<endl;

    //task 3
    int x;
    cout<< "Enter x ";
    cin >> x;
    float y;
    cout<< "Enter y ";
    cin >> y;
    cout << "the result is " << float (x/y);

    return 0;
}
