#include <iostream>

#include <cmath>

using namespace std;

int * time(int seconds) {
    static int ret[3];
    ret[0] = seconds / 3600;
    seconds = seconds % 3600;
    ret[1] = seconds / 60;
    seconds = seconds % 60;
    ret[2] = seconds;

    return ret;
}

int main() {
    int seconds;
    cout << "Enter a time in seconds: ";
    cin >> seconds;
    int * ret = time(seconds);
    cout << seconds << "seconds = " << ret[0] << " hour(s)" << ret[1] << "minute(s) " << ret[2] << "second(s)";
}