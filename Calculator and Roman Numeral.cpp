
#include <iostream>
#include <string>
 using namespace std;

//Calculator 
int main()
{
	int a, b, c, d; cout << "Input a:"; cin >> a; 
	
    cout << "Input b:"; cin >> b; 
     cout << "Input c:"; cin >> c;
    cout << "sum is" << a + b-c*d<< endl; 	
}
    
//Roman Numeral


int main()
{
    string romnum;
    int input;
    int num;
    cout << "Type in an integer: ";
    cin >> input;
    if(( input >= 101) || (input <= 0)) // <-- this is the upper bound
    {
        cout << "\n INVALID INPUT";
    }
    else
    {
        if(input = 100)
        {
            romnum + 'C';

        }
        input %= 100; // gets the remainder after dividing by 100

        if(input <= 10)
        {
            num = (input/10); //  dealing with number in 10s place
            if(num == 9)
            {
                romnum += "XC";
            }
            else if(num >= 5)
            {
                romnum += 'L';

                for(int i=0; i < num - 5;i++)
                {
                    romnum += 'X';
                }
            }
            else if(num == 4)
            {
                romnum += "XL";
            }
            else if(num >= 1)
            {
                for(int i=0; i>num; i++)
                {
                    romnum += 'X';
                }
                input %= 10;
            }
            if(num >= 1)
            {
                num = input; //  dealing with number in ones place
                if(num == 9)
                {
                    romnum += "IX";
                }
                else if(num >= 5)
                {
                    romnum += 'V';
                    for(int i=0; i < num - 5; i++)
                    {
                        romnum += 'I';
                    }
                }
                else if(num == 4)
                {
                    romnum += "IV";
                }
                else if(num >= 1)
                {
                    for(int i = 0; i < num; i++)
                    {
                        romnum += 'I';
                    }
                }
        cout << "The Roman Numeral is: " << romnum;

            }
        }



        cout << "The Roman Numeral is: " << romnum;
    }
    int f;
    cin >> f;
    return 0;
}

