#ifndef __FUNC_H__ 
#define __FUNC_H__

#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;


class Func{
    protected:
        string equation;
        char variable;
        double input;
        double output;
    public:
        Func();
        Func(string eq):equation(eq){};

        void printEquation(){
            cout<< this->equation<<endl;
        }

        void setVariable(){
            cout<< "variable: ";
            cin >> this->variable;
        }

        void printVariable(){
            cout<<this->variable<<endl;
        }


};

#endif