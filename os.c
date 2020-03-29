#include <stdio.h>
 #include <stdlib.h>
  #include <string.h>
  int main()
 
{
 
 FILE *fp = fopen("cpu_burst.txt", "r");
  int bt[20],p[20],wt[20],tat[20],i=0,j,n=5,total=0,pos,temp;
     float avg_wt,avg_tat;
  printf("\nReading CPU_BURST.txt File\n");
     {
 
         fscanf(fp, "%d", &bt[i]);
           if(bt[i]>0){
         p[i]=i+1;  i++;}         //contains process number
}
n=i;
for(i=0;i<n;i++)
 
{
    pos=i;
    for(j=i+1;j<n;j++)
    {
        if(bt[j]<bt[pos])
            pos=j;
    }
   
    temp=bt[i];
    bt[i]=bt[pos];
    bt[pos]=temp;
    temp=p[i];
    p[i]=p[pos];
    p[pos]=temp;
}
wt[0]=0;            


}
avg_wt=(float)total/n;     
total=0;
printf("\nProcess\t    Burst Time    \tWaiting Time\tTurnaround Time");

   printf("\n\nAverage Waiting Time=%f",avg_wt);
   printf("\nAverage Turnaround Time=%f\n",avg_tat);
   fclose(fp);
   return 0;
}
