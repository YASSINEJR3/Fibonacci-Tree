#include "FibTree.h"

FibTree::FibTree()
{
    //ctor
    root = new node(1);
    root->fg = new node(0);
}


FibTree::~FibTree()
{
    //dtor
}

long FibTree::Fibonnaci(int number)
{
    for(int i=2 ; i <= number ;i++)
    {
        node* fib = new node(root->val + root->fg->val);
        fib->fg = root;
        fib->fd = root->fg;
        root = fib;
    }

    return root->val;

}



void padding ( char ch, int n )
{
  int i;
  for ( i = 0; i < n; i++ )
    putchar ( ch );
}

void structure( node* arbre, int level=0 )
{
  if ( arbre == nullptr ) {
    padding ( '\t', level );
    puts ( "~" );
  }
  else {
    structure ( arbre->fd, level + 1 );
    padding ( '\t', level );
    cout <<arbre->val<< endl;
    structure ( arbre->fg, level + 1 );
  }
}
void FibTree::afficher()
{
    if(root != nullptr)
        structure(root);
}

