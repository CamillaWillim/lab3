#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
int main(){

  // Example how to declare a single complex variable:
  complex<double> z_o;
  complex<double> z_n,z_s;
  
  

  for (double re = -2; re <= 2; re += 0.01){
    for (double im = -2; im <= 2; im += 0.01){
      z_o = complex<double>(re,im);
      z_s = z_o;
      z_n = z_o-(pow(z_o,4)-1.0)/(z_o*z_o*z_o*4.0);;
      int n=0;
      while(n<40 && abs(z_n-z_o)>1e-8){
	n++;
	z_o=z_n;
	z_n=z_o-(pow(z_o,4)-1.0)/(z_o*z_o*z_o*4.0);
// 	cout << real(z_o) << "\t" << imag(z_o) <<endl;
      }
      cout << real(z_s) << "\t" << imag(z_s) << "\t" << n << endl;
    }
  }
      
  return 0;
}
