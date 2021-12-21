#include "Func.h"

int main(int argc, char *argv[]){

    string eq;

    for(auto i = 1; i < argc; i++){
        eq = eq + argv[i];
    }

    Func f(eq);
    f.printEquation();
    f.setVariable();
    f.printVariable();

    

};