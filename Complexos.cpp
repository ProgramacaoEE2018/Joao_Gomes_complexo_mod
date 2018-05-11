#include <bits/stdc++.h>

using namespace std;

class Complexo{

    float real, im;

public:

    Complexo(float r, float i){
        real = r;
        im = i;
    }

    void imprimir(){
        if(im >= 0){
            cout << real << " + " << im << "i" << endl;
        }
        else {
            cout << real << " - " << -im << "i" << endl;
        }
    }

    Complexo operator+(Complexo c1){
        Complexo aux(0,0);
        aux.real = real + c1.real;
        aux.im = im +c1.im;

        return aux;
    }

    Complexo operator*(Complexo c1){
        Complexo aux(0,0);
        aux.real = (real * c1.real) - (im * c1.im);
        aux.im = (real * c1.im) + (im * c1.real);

        return aux;
    }

    float Modulo(){
        float aux = 0;
        aux = sqrt(pow(real,2) + pow(im,2));

        return aux;
    }

    Complexo operator/(Complexo c1){
        Complexo aux(0,0);
        aux.real = ((real * c1.real) + (im * c1.im))/ pow(c1.Modulo(),2);
        aux.im = (((-real) * c1.im) + (im * c1.real)) / pow(c1.Modulo(),2);

        return aux;
    }

    Complexo operator-(Complexo c1){
        Complexo aux(0,0);
        aux.real = real - c1.real;
        aux.im = im - c1.im;

        return aux;
    }

    Complexo Conjugado(){
        Complexo aux(0,0);
        aux.real = real;
        aux.im = 0 - im;

        return aux;
    }
};
