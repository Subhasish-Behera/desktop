#include<iostream>
#include<cstdlib>
using namespace std; 
int main()
{
    int t;
   cin>>t;
   while(t--)
   { int kx,ky,r1x,r1y,r2x,r2y;
        //Scanner in = new Scanner(System.in);
       cin>>kx;
       cin>>ky;
        cin>>r1x;
        cin>>r1y;
        cin>>r2x;
        cin>>r2y;
        if(kx!=1||ky!=1||kx!=8||ky!=8)
        {
            cout<<("NO");
        }
        else
        {
            if ((kx==1)&&((r1x==2)||(r2x==2)))
            {
                if((abs(r1y-ky)>1)&&(abs(r2y-ky)>1)&&(r1y!=r2y))
                {
                    cout<<("YES");
                }
//                else if((Math.abs(r1y-ky)==1)&&(Math.abs(r2y-ky)==1)&&(r1y!=r2y))
//                {
//                    System.out.println("NO");
//                }
                else
                {
                    cout<<("NO");
                }
            }
            else if ((kx==8)&&((r1x==7)||(r2x==7)))
            {
                if((abs(r1y-ky)>1)&&(abs(r2y-ky)>1)&&(r1y!=r2y))
                {
                    cout<<("yes");
                }
//                else if((Math.abs(r1y-ky)==1)&&(Math.abs(r2y-ky)==1)&&(r1y!=r2y))
//                {
//                    System.out.println("NO");
//                }
                else
                {
                    cout<<("NO");
                }
            }
            else if ((ky==8)&&((r1y==7)||(r2y==7)))
        {
            if((abs(r1x-kx)>1)&&(abs(r2x-kx)>1)&&(r1x!=r2x))
            {
                cout<<("yes");
            }
//            else if((Math.abs(r1x-kx)==1)&&(Math.abs(r2x-kx)==1)&&(r1x!=r2x))
//            {
//                System.out.println("NO");
//            }
            else{
                cout<<("NO");
            }
        }
            else if ((ky==1)&&((r1y==2)||(r2y==2)))
            {
                if((abs(r1x-kx)>1)&&(abs(r2x-kx)>1)&&(r1x!=r2x))
                {
                    cout<<("yes");
                }
//                else if((Math.abs(r1x-kx)==1)&&(Math.abs(r2x-kx)==1)&&(r1x!=r2x))
//                {
//                    System.out.println("NO");
//                }
                else
                {
                    cout<<("NO");
                }
            }
        }
        cout<<""<<endl;
   }
    
}