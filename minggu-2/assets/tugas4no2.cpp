#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    float fahrenheit, kelvin, reamur, celcius;

    cout <<"Ini adalah program konversi suhu Celcius ke Fahrenheit, Kelvin,dan Reamur\nMasukkan nilai Celcius : ";
    cin  >>celcius;

    fahrenheit = (9/5*celcius+32),
    kelvin = (273+celcius),
    reamur = (4/9*celcius+32);

    cout <<"Nilai dalam Farenheit : "<<fahrenheit<<endl;
    cout <<"Nilai dalam Kelvin : "<<kelvin<<endl;
    cout <<"Nilai dalam Reamur : "<<reamur<<endl;

    cin.get();
    return 0;
}
