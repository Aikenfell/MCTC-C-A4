#include <iostream>

#include <cmath>

using namespace std;

float * calc(float radius,float height) {
    float vol;
    float area;
    vol = 3.14*radius*radius*height;
    area = (2*(3.14*radius*height))+(2*(3.14*radius*radius));
    static float val[2] = {area,vol};

    return val;
}

int main() {
    float rad;
    float hei;
    
    cout << "Enter can radius (inches): ";
    cin >> rad;
    cout << "Enter can height (inches): ";
    cin >> hei;

    float * ret = calc(rad,hei);
    cout << "\nCan surface area = " << ret[0] << " square inches";
    cout << "\nCan volume = " << ret[1] << " cubic inches";
}