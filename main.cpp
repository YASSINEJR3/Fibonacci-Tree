#include "FibTree.h"

int main()
{
    FibTree *fib = new FibTree();
    int n = 45;
    cout << "Fibonnacci de "<< n << " = " <<fib->Fibonnaci(n)<<endl;
    cout << "Fibonnaci tree de " << n <<endl;
    cout <<"--------------------------------------------\n"<<endl;

    //Afficher Tree
    fib->afficher();

    delete fib;
    return 0;
}
