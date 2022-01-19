#include<iostream>

using namespace std;

int main()
{
  struct gig            //a custom datatype
{
    int rollno;
    float version;
    string codename;
};                       //dont forget this ;
    struct gig gig1;
    gig1.rollno=45;
    gig1.version=45.12;
    gig1.codename="dangerouscoder";

    cout<<gig1.rollno<<endl;
    cout<<gig1.version<<endl;
    cout<<gig1.codename<<endl;
     return 0;      
}   
//................................using typedef.................................
/*#include<iostream>

using namespace std;

int main()
{
  tuype def struct gig            //a custom datatype
{
    int rollno;
    float version;
    string codename;
}op;                       //dont forget this ;
    op gig1;
    gig1.rollno=45;
    gig1.version=45.12;
    gig1.codename="dangerouscoder";

    cout<<gig1.rollno<<endl;
    cout<<gig1.version<<endl;
    cout<<gig1.codename<<endl;
     return 0;      
}   */