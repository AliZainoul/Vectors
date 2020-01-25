#include <iostream>
#include "Vector.hpp"
using namespace std;
/*
  // Constructors
  Vector();                             // Constructor 0: Default Constructor
  Vector(int i);                        // Constructor 1: Size Constructor
  Vector(int i, double v);              // Constructor 2: Size-Value Constructor
  Vector(initializer_list<double> lst); // Constructor 3: List Constructor
  Vector(Vector const &v);              // Constructor 4: Copy Constructor
  Vector(Vector&& v);                   // Constructor 5: Move constructor

  // Destructors
  ~Vector();

  // void reset(double x);
  void affiche();
  int size() const;    // Return Size of the Vector

  // Norms
  double maxnorm() const;                // L-infinity norm
  double twonorm() const;                // L-2 norm

  // Operators
  Vector& operator=(Vector const &v);    // Assignment Operator
  Vector& operator=(Vector&& v);         // Move Assignment Operator
  Vector& operator+=(const Vector& vec); // Binary Operator, V += W
  Vector& operator-=(const Vector& vec); // Binary Operator, V -= W
  double& operator[](int i){return M_data[i];} // Subscript Operator left value
  double operator[](int i) const{return M_data[i];} // Subscript Operator const

  // Friends Functions
  friend double dot(const Vector&, const Vector&);  // Dot product
  friend Vector operator*(double, const Vector&);   // Scalar-Vector Product
  friend Vector operator*(const Vector&, double);   // Vector-Scalar Product
  friend Vector operator+(const Vector&);                 // Unary Operator, V = +W
  friend Vector operator-(const Vector&);                // Unary Operator, V = -W
  friend Vector operator+(const Vector&, const Vector&); // Binary Operator V = V1 + V2
  friend Vector operator-(const Vector&, const Vector&); // Binary Operator V = V1 - V2
  friend std::ostream& operator << (std::ostream&, const Vector&);// '<<' Overload
*/

int main()
{
	double lambda = 100;
	// Constructor 0: Default Constructor
  Vector v0;
	// Constructor 1: Size Constructor
	Vector v1(10);
	// Constructor 2: Size-Value Constructor
	Vector v2(10,5);
	// Constructor 3: List Constructor
	Vector v3={-4.3,4.5,-4.6,-4.7};
	// Constructor 4: Copy Constructor
	Vector v4 = v3;
	// Constructor 5: Move constructor
	Vector v5(v2);
	//  Vector& operator=(Vector const &v);    // Assignment Operator
	Vector v6 = v4;
	//	Vector& operator=(Vector&& v);         // Move Assignment Operator
	v0=v6;
	Vector v7(v0+=v6);
	cout << "***************" << endl;
	//cout << v1;
	v1.show();
	(v1*lambda).show();
	cout << "L2-Norm is : " << v1.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v1.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v2;
	v2.show();
	(v2*lambda).show();
	cout << "L2-Norm is : " << v2.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v2.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v3;
	v3.show();
	(v3*lambda).show();
	cout << "L2-Norm is : " << v3.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v3.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v4;
	v4.show();
	(v4*lambda).show();
	cout << "L2-Norm is : " << v4.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v4.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v5;
	v5.show();
	(v5*lambda).show();
	cout << "L2-Norm is : " << v5.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v5.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v6;
	v6.show();
	(v6*lambda).show();
	cout << "L2-Norm is : " << v6.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v6.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v7;
	v7.show();
	(v7*lambda).show();
	cout << "L2-Norm is : " << v7.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v7.maxnorm() << endl;
	getchar();

	cout << "***************" << endl;
	//cout << v0;
	v0.show();
	(v0*lambda).show();
	cout << "L2-Norm is : " << v0.twonorm() << endl;
	cout << "Linfinity-Norm is : " << v0.maxnorm() << endl;
	getchar();

}
