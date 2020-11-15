#include <iostream>
using namespace std;

class BytGeometryczny
{
public:
    virtual void id() = 0;
};

class Figura : public BytGeometryczny
{
private:
    double pole;

public:
    Figura(double ppole) : pole{ppole} {};
    void   setpole(double x) { pole = x; }
    double getpole() { return pole; }

    virtual void id() { cout << "rodzaj figury:Figura, pole figury:" << getpole() << endl; }
    virtual ~Figura() { cout << "figura zostala zniszczona" << endl; };
};

class Kolo : public Figura
{
public:
    Kolo(double d) : Figura{d * d * 3.14} {};

    void id() override { cout << "rodzaj figury:Kolo, pole figury:" << getpole() << endl; }
    virtual ~Kolo() { cout << "Kolo zostalo zniszczone" << endl; };
};

class Kwadrat : public Figura
{
public:
    Kwadrat(double a) : Figura{a * a} {};

    void id() override { cout << "rodzaj figury:Kwadrat, pole figury:" << getpole() << endl; }

    virtual ~Kwadrat() { cout << "kwadrat zostal zniszczony" << endl; };
};

void id(Figura& Fig)
{

    Fig.id();
}

int main()
{
    int i = 0;
    // Kolo B(2);
    // B.setpole(10);
    // cout << B.getpole() << endl;

    // Kolo K(2);
    // K.id();
    // cout << K.getpole() << endl;

    // Kwadrat Kw(5);
    // Kw.id();
    // id(Kw);
    // cout << Kw.getpole() << endl;

    Kolo* f = new Kolo{2};
    // f->id();

    // Figura& f = dynamic_cast< Figura& >(B);
    if (Kwadrat* B = dynamic_cast< Kwadrat* >(f)) {
        i++;
    }
    else {
    }
    cout << i;
    // f.id();

    // f = new Kolo{1};
    //  f->id();
    // f = new Figura{2};
    // f->id();
    // delete f;

    puts("Hello, World!");
}
