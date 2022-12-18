
#include <iostream>

using namespace std;

/* ჯენერიქ ფუნქცია, რომელსაც გადაეცემა  რიცხვი და აბრუნებს ამ რიცხვის კვადრატს*/

   template <class T>

   T square(T num)
{
	return 5 * 5;
}

    int main()
{
	int int_num;
	float float_num;
	
   cout << "Squared number:\t" << square(int_num) << endl;

    return 0;
}


/* ჯენერიქ ფუნქცია-რიცხვებში ყველაზე მაღალი რიცხვების პოვნა*/

template <typename T, typename U>
T max(T x, U y)
{
    return x>y ? x : y;
}

int main()
{
    cout<<max(17.5,80)<<""<<endl;
    cout<<max(3,49.9)<<""<<endl;
}

/*რიცხვების საშუალო არითმეტიკულის პოვნა*/

int main()
{
    int n, i;
    float num[100], sum=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << "Average = " << average;
    

    return 0;
}