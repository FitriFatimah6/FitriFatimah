#include <iostream>
#include <string>
using namespace std;

class Hewan{
    public:
        void predator(){
        cout<<"Hewan ini predator"<<endl;}
        void taring(){
        cout<<"Hewan ini bertaring"<<endl;}
        void cakar(){
        cout<<"Hewan ini memiliki cakar"<<endl;}
};
class Harimau:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Harimau"<<endl;}
};
class Singa:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Singa"<<endl;}
};
class Macan:public Hewan {
    public:
        void predator(){
        cout<<"Ini adalah Macan"<<endl;}
};
int main () {
    Harimau hrm;
    // hrm.getHarimau();
    hrm.predator();
    hrm.taring();
    hrm.cakar();

    Singa sng;
    // sng.getSinga();
    sng.predator();
    sng.taring();
    sng.cakar();


    Macan mcn;
    // mcn.getMacan();
    mcn.predator();
    mcn.taring();
    mcn.cakar();

    return 0;
}