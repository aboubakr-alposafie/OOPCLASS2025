// home_Work1.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Vector_
{
private :
    double X, Y, Z;
public :
    Vector_():X(0),Y(0),Z(0)
    { }
    Vector_(double Xi, double yi, double zi) : X(Xi), Y(yi), Z(zi)
    { }
    
    void showdate()
    {
        cout << "X :" << X
            << endl << "Y : " << Y
            << endl << "Z : " << Z;
    }
    void showDateofVector()
    {
       
            cout  << (X >= 0 ? "+" : "") << X << "i";
            cout  << (Y >= 0 ? "+" : "") << Y << "j";
            cout  << (Z >= 0 ? "+" : "") << Z << "k";
        
    }
    void getvector()
    {
      cout << "get vector X ="; cin >> X;
      cout << "get vector Y ="; cin >> Y;
      cout << "get vector Z ="; cin >> Z;

    }
     
    void addvector(Vector_ V1, Vector_ V2);
    void dotProduct(Vector_ V1 ,Vector_ V2);
    void CrossProduct(Vector_ V1, Vector_ V2);

};
void Vector_::addvector(Vector_ V1 ,Vector_ V2)
{
    X = V1.X + V2.X;
    Y = V1.Y + V2.Y;
    Z = V1.Z + V2.Z;

}
void Vector_::dotProduct(Vector_ V1, Vector_ V2)
{

    X = V1.X * V2.X;
    Y = V1.Y * V2.Y;
    Z= V1.Z * V2.Z;

}
void Vector_::CrossProduct(Vector_ V1, Vector_ V2)
{

        X = V1.Y * V2.Z - V1.Z * V2.Y;
        Y = V1.Z * V2.X - V1.X * V2.Z;
        Z = V1.X * V2.Y - V1.Y * V2.X;

}
int main()
{
    
    Vector_ V2,V3 ,V4 ,V5;
  Vector_ V1(1, 22, 34);
  V2.getvector();
  cout << "\n -----------------------------------------------\n";
  V3.addvector(V1, V2);
  V3.showDateofVector();
  cout << "\n -----------------------------------------------\n";
  V4.dotProduct(V1, V2);
  V4.showDateofVector();
  cout << "\n -----------------------------------------------\n";
  V5.CrossProduct(V1, V2);
  V5.showDateofVector();



}

