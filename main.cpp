#include <iostream>
#include <iomanip>
using namespace std;
#include "BST.h"


int main(int argc, char **argv) {
  BST b;

  for (int i = 1; i < argc; ++i) {
    b.insert_node(atoi(argv[i]));
  }

  cout << "inOrder" << endl <<endl;
  b.print(0);
  cout << endl;

  cout << "preOrder" << endl<<endl;
  b.print(1);
  cout << endl;

  cout << "postOrder" << endl<<endl;
  b.print(2);
  cout << endl;


  cout << "Tree" << endl<<endl;
  cout << endl;

  b.print(4);   // default → printTree

  return 0;
}
