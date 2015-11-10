#include <iostream>
#include <complex>
#include <cmath>

using namespace std;

 complex <double> f(double p,complex <double> ii);

int main(){
  int N=100;
 
  // Example how to declare a single complex variable:
  complex<double> c[N];
  complex <double> z[N];
 
  double phi[N];
  phi[0]=0.0;

  // define i
  complex<double> ii = complex<double>(0.0, 1.0); 
 
  
  double dphi = (M_PI*2)/(N-1);
  
  //for(double phi=0.0; phi<=M_PI*2;phi+=dphi){
  
  for(int i=0;i<N;i++){
    
    phi[i]=i*dphi;
    c[i]=exp(phi[i]*ii);
    z[i] = f(phi[i],ii);
    
  }
  
  for(int j=0;j<N;j++){
    cout << phi[j] << "\t" << real(c[j])<< "\t"<<imag(c[j])<< "\t"<< abs(c[j])<< "\t" << z[j]<< endl;
    
    
  }
  
  

  return 0;
}

complex <double> f(double p,complex <double> ii){
 
 
 
   return tan(p*(1.0+ii));
  
}