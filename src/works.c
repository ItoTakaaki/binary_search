#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int sum=1;
    int a=0;
    int b;
    for (b=0;b<n;b++){
        if(A[b]>x){
            return 0;}
            a=a+A[b];
        if (a>x){
        sum=sum+1;
        a=A[b];}}
        
if(sum<=k){
    return 1;}
    else{
        return 0;}
    
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
lb=0;
    ub=1000000000;
    while(ub-lb>1){
        int m=(lb+ub)/2;
        if(p(m)){
            ub=m;
        }
        else{
            lb=m;
        }
    }
    printf("%d\n",ub);
   
  return 0;
}
