#include <iostream>

using namespace std;

enum Example {
    A = 0,B = 2,C = 6
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
    Example value = B;
    if (value == B) {
        cout << "Hello World!\n";
    }


    return 0;
}
