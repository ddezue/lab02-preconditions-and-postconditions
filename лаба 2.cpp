/*************************
 * Автор: Бакланова Ляна *
 * Вариант: 1            *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  double g = 9.81;
  double m = 75.0;
  double k = 8.0;
  double t = 0.0;
  double v;

  cout << "t (с)   v (м/с)" << endl;
  cout << fixed;
  cout.precision(3);

  while (t < 1) {
    v = sqrt(g * m / k) * tanh(t * sqrt((g * k / m)));
    cout << t  << "\t" << v << endl;
    t += 0.25;
  }

  do {
    v = sqrt(g * m / k) * tanh(t * sqrt((g * k / m)));
    cout << t  << "\t" << v << endl;
    t += 1; 
  } while (t < 6);
    
  return 0;
}

