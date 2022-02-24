#include <iostream>
using namespace std;
int main()
{
   int n,i,j,a[20][20],s=0;
   cout<<"n=";cin>>n;
   for(i=1;i<=n;i++)
      for(j=1;j<=n;j++)
      {
         cout<<"a["<<i<<"]["<<j<<"]=";
         cin>>a[i][j];
      }
   cout<<"Matricea este:"<<endl;
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=n;j++)
         cout<<a[i][j]<<" ";
      cout<<endl;
   }
   for(i=1;i<=n;i++)
      s=s+a[i][i];
   cout<<"Suma elementelor de pe diagonala principala a matricii este:"<<s<<endl;
   return 0;
}