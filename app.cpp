#include <iostream>
using namespace std;
 main()
{
  // App => Simple Calculator

  int n1, n2, op;
  cout << "Type Number One\n";
  cin >> n1;
  cout << "Type Number Two\n";
  cin >> n2;
  cout << "Choose Operation Number\n";
  cout << "[1] +\n";
  cout << "[2] -\n";
  cout << "[3] /\n";
  cout << "[4] *\n";
  cin >> op;

  switch (op)
  {
  case 1:
    cout << n1 << " + " << n2 << " = " << n1 + n2 << "\n";
    break;
  case 2:
    cout << n1 << " - " << n2 << " = " << n1 - n2 << "\n";
    break;
  case 3:
    cout << n1 << " / " << n2 << " = " << n1 / n2 << "\n";
    break;
  case 4:
    cout << n1 << " * " << n2 << " = " << n1 * n2 << "\n";
    break;
  default:
    cout << "Operation Is Not Valid\n";
  }

 return 0;
}