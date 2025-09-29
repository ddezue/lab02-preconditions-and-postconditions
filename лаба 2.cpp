/*************************
 * Автор: Бакланова Ляна *
 * Вариант: 1            *
 *************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
  double timeStep1 = 0.25;  // 0.25 - шаг времени падения до 1 с.
  int timeStep5 = 1;  // 1 - шаг времени падения после 1 с.
  double t;
  double g;
  double v;
  int m;
  int k;
  
  cout << "Enter 'g' ";
  cin >> g;
  
  cout << "Enter 'm' ";
  cin >> m;
  
  cout << "Enter 'k' ";
  cin >> k;
  
  cout << "t (с)   v (м/с)" << endl;
  cout << fixed;
  cout.precision(3);

  // Пока время падения меньше 1 с.
  while (t < 1.0) {
    v = sqrt(g * m / k) * tanh(t * sqrt((g * k / m)));
    cout << t  << "\t" << v << endl;
    t += timeStep1;
  }

  do {
    v = sqrt(g * m / k) * tanh(t * sqrt((g * k / m)));
    cout << t  << "\t" << v << endl;
    t += timeStep5; 
    // Пока время падения меньше или равно 5 с.
  } while (t <= 5.0);
    
  return 0;
}
