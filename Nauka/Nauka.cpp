#include <iostream>

using namespace std;

int main()
{
    int jarek[2] = { 1,5 };

    int* a = jarek ;
    int* b = jarek +2;
    cout << a << "\n" << b << endl;
    cout << b - a << endl;


    return 0;
}
