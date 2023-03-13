#include <iostream>

void sortuj(int* begin, int* end) {
    for (int* i = begin; i != end; ++i) {
        for (int* j = i+1 ; j < end ; j++) {
            std::cout << *(j - 1)<<" " << *j << std::endl;
            if (*(j - 1) > *j) {
                std::swap(*(j - 1), *j);
            }
        }
    }
}

void wypisz(int* begin, int size)
{
    while (size > 0)
    {
        //std::cout << *begin << ' ';
        ++begin;
        --size;
    }
}

int main()
{
    /*int tab[10] = { 0, 9, 1, 3, 8, 2, 6, 7, 5, 4 };
    sortuj(tab, tab + 10);
    wypisz(tab, 10);*/

    std::cout << '\n';

    int tab2[16] = { 9, 7, 8, 6, 5, 4, 4, 0, 9, 6, 7, 1, 6, 3, 1, -100 };
    sortuj(tab2, tab2 + 15);
    wypisz(tab2, 15);
}