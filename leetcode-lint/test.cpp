#include <string>
#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    cout.width(4);
    cout << 12 << endl;
    cout << 12 << endl;

    cout.width(8);
    cout.fill('#');
    cout << 12 << endl;

    cout << 1234 << ',' << hex << 1234 << ',' << oct << 1234 << endl;
    cout << '(' << setw(4) << setfill('#') << 12 << ") (" << 12 << ")\n";

    system("pause");
}
