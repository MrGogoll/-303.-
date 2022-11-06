
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int коров;
    int n;
    cin >> n;
    if (n % 10 == 1) {
        cout << n << " корова";
    }
    if (n % 10 == 2 || n % 10 == 3 || n % 10 == 4) {
        cout << n << " коровы";
    }
    if (n % 10 != 2 && n % 10 != 3 && n % 10 != 4 && n % 10 != 1) {
        cout << n << " коров";
    }


     
}

