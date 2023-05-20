#include <iostream>
using namespace std;

//program menghitung luas prisma dan lingkaran

//fungsi menghitung luas lingkaran
float luas_lingkaran(float r){
    float luas;
    luas = 3.14 * r * r;
    return luas;
}

//fungsi menghitung luas prisma
float luas_prisma(float r, float t){
    float luas;
    luas = 2 * luas_lingkaran(r) + 3.14 * 2 * r * t;
    return luas;
}

int main() {
    float r, t;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    cout << "Masukkan tinggi prisma: ";
    cin >> t;
    cout << "Luas prisma: " << luas_prisma(r, t) << endl;
    cout << "Luas lingkaran: " << luas_lingkaran(r);
}