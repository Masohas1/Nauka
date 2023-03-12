#include <iostream>

void generuj(int* begin, int* end, int start)
{
    for (int* p = begin; p != end; ++p)
    {
        *p = start;
        std::cout <<*p << std::endl;

        ++start;
    }
}

void wypisz(int* begin, int size)
{
    while (size > 0)
    {
        std::cout << *begin << ' ';
        ++begin;
        --size;
    }
}

int main()
{
    int tab[10];
    generuj(tab, tab + 10, 100);
    wypisz(tab, 10);
}