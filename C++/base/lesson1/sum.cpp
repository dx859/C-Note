#include <iostream>

using namespace std;

int main(void) {
    int value = 0, sum = 0;
    cout << "Please Enter some numbers:" << endl;
    while (cin >> value)
       sum += value;
    cout << "Sum is: " << sum << endl;

    return 0;
}
