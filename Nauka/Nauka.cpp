#include <iostream>

using namespace std;

int main()
{
    int jarek = 75;
    int* ap = & jarek;

    cout << ap << endl;
    cout << & ap << endl;
    cout << *ap << endl;


    return 0;
}
