#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double a[], int n, double b[]) {
 
  double sum = 0.0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }
  b[0] = sum / n;

 
  double sum_of_squares = 0.0;
  for (int i = 0; i < n; i++) {
    sum_of_squares += (a[i] - b[0]) * (a[i] - b[0]);
  }
  b[1] = sqrt(sum_of_squares / n);

 
  double product = 1.0;
  for (int i = 0; i < n; i++) {
    product *= a[i];
  }
  b[2] = pow(product, 1.0 / n);


  double sum_of_reciprocals = 0.0;
  for (int i = 0; i < n; i++) {
    sum_of_reciprocals += 1.0 / a[i];
  }
  b[3] = n / sum_of_reciprocals;

 
  b[4] = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > b[4]) {
      b[4] = a[i];
    }
  }


  b[5] = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] < b[5]) {
      b[5] = a[i];
    }
  }
}
