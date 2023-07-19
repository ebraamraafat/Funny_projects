#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    
    int i,x,j;
    /*
      1
      2
      21
      3
      321
      4
      4321
      */
    cin>>x;
    cout<<endl;
    for(i=1; i<=x; i++)
    {
        cout<<i<<" " <<"ra7 yrosh ... ra7 yrosh gnena "<<endl;
        if(i>1)
        {
            for(j=i; j>0; j--)
            {
                cout<<j<<" ";
        
            }   
            cout<<"ra7 yrosh ... ra7 yrosh gnena "<<endl;
        }
    }
    cout<<"Press any key to close "<<endl;
    getch();
    
    return 0;
}



