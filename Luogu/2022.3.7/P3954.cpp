//
// Created by Rain on 2022/3/7.
//

// Just a simple program, no complex algorithm.
// qyl27 2022.3.7.

#include <iostream>

using namespace std;

int main() {

    int homework = 0;
    int test = 0;
    int exam = 0;

    cin >> homework >> test >> exam;

    double scores = homework * 0.2 + test * 0.3 + exam * 0.5;

    cout << ((int) scores) << endl;

    return 0;
}
