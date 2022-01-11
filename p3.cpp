#include <iostream>
using namespace std;
int main()
{
int s1,s2,s3,s4,s5;
int s1c1,s1c2,s1c3,s1c4,s1c5;
int s2c1,s2c2,s2c3,s2c4,s2c5;
int s3c1,s3c2,s3c3,s3c4,s3c5;
int s4c1,s4c2,s4c3,s4c4,s4c5;
int s5c1,s5c2,s5c3,s5c4,s5c5;
int total1,total2,total3,total4,total5;
cout<<"Student 1 marks";
cin>>s1c1;
cin>>s1c2;
cin>>s1c3;
cin>>s1c4;
cin>>s1c5;
total1=s1c1+s1c2+s1c3+s1c4+s1c5;
cout<<"Student 2 marks";
cin>>s2c1;
cin>>s2c2;
cin>>s2c3;
cin>>s2c4;
cin>>s2c5;
total2=s2c1+s2c2+s2c3+s2c4+s2c5;
cout<<"Student 3 marks";
cin>>s3c1;
cin>>s3c2;
cin>>s3c3;
cin>>s3c4;
cin>>s3c5;
total3=s3c1+s3c2+s3c3+s3c4+s3c5;
cout<<"Student 4 marks";
cin>>s4c1;
cin>>s4c2;
cin>>s4c3;
cin>>s4c4;
cin>>s4c5;
total4=s4c1+s4c2+s4c3+s4c4+s4c5;
cout<<"Student 5 marks";
cin>>s5c1;
cin>>s5c2;
cin>>s5c3;
cin>>s5c4;
cin>>s5c5;
total5=s5c1+s5c2+s5c3+s5c4+s5c5;
if (total1 > total2 && total1 > total3 && total1 > total4 && total1 > total5)
cout<<"Student 1 obtain highest marks with aggregate of "<<total1<<endl;
if (total2 > total1 && total2 > total3 && total2 > total4 && total2 > total5)
cout<<"Student 2 obtain highest marks with aggregate of "<<total2<<endl;
if (total3 > total1 && total3 > total2 && total3 > total4 && total3 > total5)
cout<<"Student 3 obtain highest marks with aggregate of "<<total3<<endl;
if (total4 > total1 && total4 > total2 && total4 > total3 && total4 > total5)
cout<<"Student 4 obtain highest marks with aggregate of "<<total4<<endl;
if (total5 > total1 && total5 > total2 && total5 > total3 && total5 > total4)
cout<<"Student 5 obtain highest marks with aggregate of "<<total5<<endl;
return 0;
}