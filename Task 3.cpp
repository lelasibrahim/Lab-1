#include <iostream>
using namespace std;
int main()
{
   double w,l,area,sqft_tile,num_tiles;
   cout<<"Enter the width of the room in feet: ";
   cin>>w;
   cout<<"Enter the length of the room in feet: ";
   cin>>l;
   area=w*l;
   sqft_tile=(6.0/12)*(6.0/12);
   num_tiles=area/sqft_tile;
   cout<<"The area of the room is: "<<area;
   cout<<"The number of tiles needed to cover the floor: "<<num_tiles;
   
    return 0;
}