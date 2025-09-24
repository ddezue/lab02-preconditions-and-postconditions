/*************************
 * Автор: Бакланова Ляна *
 * Вариант: 1            *
 *************************/
 
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main() {

  double g = 9.81;
  double m = 75.0;
  double k = 8.0;
  double v;
  
  vector <double> t_values = {0, 0.25, 0.5, 0.75, 1.0, 2.0, 3.0, 4.0, 5.0};
  
  cout << "t (с)   v (м/с)" << endl;
  cout << fixed << setprecision(3);
  
  for (double t : t_values) {
    v = sqrt(g * m / k) * tanh (t * sqrt((g * k / m)));
    cout << t  << "\t" << v << endl;
  }
    
  return 0;

}
