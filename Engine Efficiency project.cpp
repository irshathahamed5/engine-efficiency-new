
#include <iostream>

using namespace std;

class engine {
public:
    double work, heat;
    engine(double a, double b) {
        work = a;
        heat = b;
    }
    virtual double efficiency() {

        cout << "result for efficiency";
        return 0;
    }
};
class internalcombustineengine : public engine {
public:
    internalcombustineengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for internalcombustineengine efficiency ";
        return work / heat * 100;
    }
};
class externalcombustineengine :public engine {
public:
    externalcombustineengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for externalcombustineengine efficiency ";
        return work / heat * 100;
    }
};
class petrolengine :public engine {
public:
    petrolengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for petrolengine efficiency ";
        return work / heat * 100;
    }
};
class diselengine :public engine {
public:
    diselengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for diselengine efficiency";
        return work / heat * 100;
    }
};
class steamengine :public engine {
public:
    steamengine(double a, double b) :engine(a, b) {}
    double efficiency() {
        cout << "\n result for steamengine efficiency";
        return work / heat * 100;
    }
};
int main() {
    int input;
    cout << "press 1 for internal combustine engine";
    cout << "\n press 2 for external combustine engine\n";
    cin >> input;
    engine* e;
    if (input == 1) {
        cout << "press 1 for petrol engine ";
        cout << "\n press 2 for disel engine\n ";
        cin >> input;
        if (input == 1) {
            double a, b;
            cout << "Enter the work done by the Engine:   ";
            cin >> a;
            cout << "\nEnter the heat produce by the Engine:   ";
            cin >> b;
            petrolengine p(a, b);
            e = &p;
            cout << e->efficiency();
        }
        else if (input == 2) {
            double a, b;
            cout << "Enter the work done by the Engine:   ";
            cin >> a;
            cout << "\nEnter the heat produce by the Engine:   ";
            cin >> b;
            diselengine d(a, b);
            e = &d;
            cout << e->efficiency();
        }
        else
        {
            cout << "enter the valid number";
        }
    }
    else if (input == 2) {
        cout << "press 1 for steam engine\n";
        cin >> input;
        if (input == 1) {
            double a, b;
            cout << "Enter the work done by the Engine:   ";
            cin >> a;
            cout << "\n Enter the heat produce by the Engine:  ";
            cin >> b;
            steamengine s(a, b);
            e = &s;
            cout << e->efficiency();
        }
        else
        {
            cout << "enter the valid number";
        }
    }
    else
    {
        cout << "Wrong Input";

    }


}



