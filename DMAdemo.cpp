#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int *p1;
    p1 = &n;

    cout << n << "\t" << &n << endl;
    cout << *p1 << "\t" << p1 << endl;
    cout << &p1 << endl;

    int *p2 = new int;
    *p2 = 20;

    cout << *p2 << "\t" << p2 << endl;
    cout << &p2 << endl;

    // Moved the misplaced part inside main() without modifying it
    {
        int *p2 = new int;
        *p2 = 20;
        cout << *p2 << "\t" << endl;
        cout << &p2 << endl;

        delete (p2);

        p2 = new int(30);
        cout << "\n New changes" << endl;
        cout << &p2 << endl;
    }

    return 0;
}
