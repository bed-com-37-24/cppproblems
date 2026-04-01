#include <iostream>
using namespace std;
double AreaTriangle(double base , double height){
   return 0.5 * base * height;
}
double Areasquare(double side){
   return side * side;
}
double AreaRectangle(double width , double length){
   return width * length;
}
 int main(){
   int choice;
   while(true){
   cout<<"\nSelect shape to calculate area:\n";
   cout<<"1. Triangle\n2. Square\n3. Rectangle\n4. Quit\n";
   cin>>choice;

   if(choice == 4)break;

   double a, b;
   switch(choice){
      case 1:
      cout<<"Enter base and height: ";
      cin>>a >> b;
      cout<<"Triangle area: "<<AreaTriangle(a, b)<<endl;
      break;
      case 2:
      cout<<"Enter side: ";
      cin>>a;
      cout<<"Square area: "<<Areasquare(a)<<endl;
      break;
      case 3:
      cout<<"Enter width and length: ";
      cin>> a >> b;
      cout<<"Rectangle area: "<<AreaRectangle(a, b)<<endl;
      break;
      default: 
      cout<<"Invalid input please try again.\n";
   }
   }
   return 0;
 }