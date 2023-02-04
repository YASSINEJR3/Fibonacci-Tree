#ifndef FIBTREE_H
#define FIBTREE_H

#include <iostream>
using namespace std;

typedef struct nd{
    long val;
    struct nd* fg;
    struct nd* fd;
    nd(int val)
    {
        this->val = val;
        fg = fd = nullptr;
    }
}node;

class FibTree
{
    public:
        FibTree();
        virtual ~FibTree();
        long Fibonnaci(int number);
        void afficher();

    protected:

    private:
        node *root;
};

#endif // FIBTREE_H
