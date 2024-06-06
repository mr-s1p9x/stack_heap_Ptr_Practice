#include <iostream>
using namespace std;

// Примеры области видимости и адресов
// Автоматическая память стека
/*
 * Memory address a: 0x16ce8f65c
 * Memory address q: 0x16ce8f658
 * Memory address x: 0x16ce8f654
 * Memory address s: 0x16ce8f650
 * Memory address l: 0x16ce8f64c
 */

int main()
{
    int a;
    cout << "Memory address a: " << &a << endl;

    if (true)
    {
        int q;
        cout << "Memory address q: " << &q << endl;
    }

    int x;
    cout << "Memory address x: " << &x << endl;

    {
        int s;
        cout << "Memory address s: " << &s << endl;
    }

    int l;
    cout << "Memory address l: " << &l << endl;

    cout << endl << endl;

    int qq = 10;
    int* xx = new int(10);

    cout << "Pointer size: " << sizeof(xx) << endl;
    cout << "Pointer value: " << xx << endl;
    cout << "Pointer address in stack: " << &xx << endl;


    return 0;
}
