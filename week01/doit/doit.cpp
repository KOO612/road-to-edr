#include <iostream>
#include <string>
#include <iterator>
#include <array>
#include <vector>

using namespace std;

void swqp(int &ref_a, int &ref_b)
{
    cout << "before" << ref_a << " " << ref_b << endl;

    int temp = ref_a;
    ref_a = ref_b;
    ref_b = temp;

    cout << "after" << ref_a << " " << ref_b << endl;
}

int main()
{
    int a = 5, b = 10;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}