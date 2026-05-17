#include <iostream>
using namespace std;

int main() {
    int y;
    cin >> y;

    int found = 0;

    while (found == 0) {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;

        if (a != b && a != c && a != d &&
            b != c && b != d &&
            c != d) {
            cout << y << endl;
            found = 1;
        }
    }

    return 0;
}
