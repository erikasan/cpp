double Gaussian_Legendre(double a,double b,int n, function<double(double)> f){
  double *x = new double[n];
  double *w = new double[n];

  gauleg(a,b,x,w,n);
  double integral = 0;
  for (int i=0; i<n;i++){
    integral += w[i]*f(x[i]);
      }
  return integral;
} 
