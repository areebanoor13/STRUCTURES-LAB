#include <iostream>
using namespace std;

struct Numbers {
    int values[20];
};

void findGreatest(Numbers num) {
    int greatest = num.values[0];

    for (int i = 1; i < 20; i++) {
        if (num.values[i] > greatest) {
            greatest = num.values[i];
        }
    }

    cout << "The greatest number is: " << greatest << endl;
}

int main() {
    Numbers num;

    cout << "Enter 20 numbers: " << endl;
    for (int i = 0; i < 20; i++) {
        cin >> num.values[i];
    }

    findGreatest(num);

    return 0;
}
