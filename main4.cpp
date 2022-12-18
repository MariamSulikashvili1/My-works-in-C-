
#include <iostream>

using namespace std;

//მართკუთხედის კლასი, ენკაპსულაციის დაცვით

class Rectangle 
{
    private:
        int l, b;
    public:
        void input(int len, int bre){
            l = len;
            b = bre;
        }
        int area(){
            return l * b;
        }
};
   int main(){
    Rectangle r1, r2;
    r1.input(10, 9);
    r2.input(8, 6);
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
}

//მართკუთხედის პერიმეტრის გამოთვლა

int main()
{
	float width, length, perimeter;
	
	cout << "Please Enter the Width of a Rectangle  =  ";
	cin >> width;
	
	cout << "Please Enter the Length of a Rectangle =  ";
	cin >> length;
	
	perimeter = 2 * (length + width);
	
	cout << "Perimeter of a Rectangle =  " << perimeter;
	
 	return 0;
}