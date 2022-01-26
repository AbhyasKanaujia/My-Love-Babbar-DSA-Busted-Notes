#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;

  cout << "Value of n is " << n << endl;

  /* using if else */
  if (n > 0)
    cout << "N is positive" << endl;
  else
    cout << "N is negative" << endl;

  int a, b;

  /* a > b or b > a? */
  cout << "a > b or b > a?" << endl;
  cout << "Enter a and b: ";

  /* input multiple integers */
  cin >> a >> b;

  /* using cin.get */
  // a = cin.get();
  // b = cin.get();

  cout << "a: " << a << " b: " << b << endl;

  if (a > b)
  {
    cout << "A is greater" << endl;
  }
  if (b > a)
  {
    cout << "B is greater" << endl;
  }

  /* Number +ve, -ve or 0? */
  cout << "Number +ve, -ve or 0?" << endl;
  cout << "Enter the value of a: ";
  cin >> a;

  if (a > 0)
    cout << "A is positive" << endl;
  else
  {
    if (a < 0)
      cout << "A is negative" << endl;
    else
      cout << "A is 0" << endl;
    ;
  }

  /* if else-if else
  if() {

  } else if() {

  } else if() {

  } else {

  }
  */
  if (a > 0)
    cout << "A is positive\n";
  else if (a < 0)
    cout << "A is neagative\n";
  else
    cout << "A is 0";

  return 0;
}