#include <iostream>

#include <cmath>

using namespace std;

void perim(float dia) {
    cout << "\nPerimeter = " << 3.14 * dia;
}
void perim(float hei, float wid) {
    cout << "\nPerimeter = " << 2 * (hei + wid);
}
void perim(float s1, float s2, float s3) {
    cout << "\nPerimeter = " << s1 + s2 + s3;
}

void input(int key) {
    float dia;
    cout << "\nEnter circle diameter: ";
    cin >> dia;
    perim(dia);
}
void input(double key) {
    float wid;
    float hei;
    cout << "\nEnter rectangle length and width: ";
    cin >> wid >> hei;
    perim(wid, hei);
}
void input(int key1,int key2) {
    float v1;
    float v2;
    float v3;
    cout << "\nEnter triangle side lengths: ";
    cin >> v1 >> v2 >> v3;
    perim(v1,v2,v3);
}

int main() {
    char go = 'Y';
    while ((go == 'Y')) {
        int val;
        cout << "\nSelect shape (1=circle, 2=rectangle, 3=triangle, other to exit): ";
        cin >> val;
        switch (val) {
        case 1:
            input(1);
            break;
        case 2:
            input(1.1);
            break;
        case 3:
            input(1,1);
            break;

        default:
            val = 0;
            go ='N';
            break;
        }
    }
}