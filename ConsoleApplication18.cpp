#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int b[10];
    int c[10];

    int i;

    cout << "1 massiv " << endl;
    for (i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> a[i];
    }

    cout << "2 massiv" << endl;
    for (i = 0; i < 5; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> b[i];
    }

    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
        cout << c[i] << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}