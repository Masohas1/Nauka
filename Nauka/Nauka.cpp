#include <iostream>

using namespace std;

enum Example {
    A = 0,B = 2,C = 6
};

int main()
{
    Example value = B;
    if (value == B) {
        cout << "Czesc\n";
    }


    return 0;
}
