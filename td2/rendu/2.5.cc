double FiboIter(double n){
  int f0=1;
  int f1=1;
  int f2=0;
  if(n==0 || n==1) return 1;
  for(int i=0;i<n-1;i++){
    f2=f0+f1;
    f0=f1;
    f1=f2;
  }
  return f2;
}
