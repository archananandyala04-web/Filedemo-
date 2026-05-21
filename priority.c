#include<stdio.h>
int main(){
int n,i,j,temp;
printf("Enter no.of the processes: ");
scanf("%d",&n);
int bt[n],pr[n],wt[n];
printf("Enter brust time:\n");
for(i=0,i<n;i++){
printf("p%d:",i+1);
scanf("%d",&bt[i]);
}
printf("Enter priority:\n");
for(i=0,i<n;i++){
printf("p%d:",i+1);
scanf("%d",&pr[i]);
}
for(i=o,i<n;i++){
for(j=i+1;j<n;j++){
if(pr[i]>pr[j]){
temp=pr[i];
pr[i]=pr[j];
pr[j]=temp;
temp=bt[i];
bt[i]=bt[j];
bt[j]=temp;
}
}
}
wt[0]=0;
for(i=1;i<n;i++){
wt[i]=wt[i-1]+bt[i];
}
float avg=0;
for(i=0;i<n;i++){
avg+=wt[i];
}
avg=avg/n;
printf("\n Execution order: ");
for(i=0;i<n;i++){
printf("%pd: ",i+1);
}
printf("\n Average waiting time=%.2f\n",avg);
return 0;
}
