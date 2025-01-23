#include <iostream>
using namespace std;
int main_Task1();
int main_Task2A();
int main_Task2B();
int main_Task3();
int main_Task4A();
int main_Task4B();
int main_Task5A();
int main_Task5B();
int main_Task6A();
int main_Task6B();
int main_Task6C();
int main_Task6D();
int main_Task6E();
int main_Task7A();
int main_Task7B();
int main_Task7C();
int main_Task8();
int main_Task9();
int main_Bonus();
int main_Task10();
int main_Task11();
int main_Task12();
int main_Task13();
int main_Task14();
int main_Task15();
int main_Task16();
int main() {
    int choice;
	system("cls");
    do {
        cout << "\n===========================\n";
        cout << "   Menu: Task Selection    \n";
        cout << "===========================\n";
        cout << "1. Task 1: Multiplication Table (Range Based)\n";
        cout << "2. Task 2A: Multiplication Table of Odd Numbers\n";
        cout << "3. Task 2B: Multiplication Table of Even Numbers\n";
        cout << "4. Task 3: Reverse Multiplication Table\n";
        cout << "5. Task 4A: Multiplication Table with Forward Jumps\n";
        cout << "6. Task 4B: Multiplication Table with Backward Jumps\n";
        cout << "7. Task 5A: Cube of a Single Number\n";
        cout << "8. Task 5B: Cubes of Numbers in a Range\n";
        cout << "9. Task 6A: Series of Odd Numbers\n";
        cout << "10. Task 6B: Series of Even Numbers\n";
        cout << "11. Task 6C: Reverse Series of Odd Numbers\n";
        cout << "12. Task 6D: Reverse Series of Even Numbers\n";
        cout << "13. Task 6E: Halving Technique\n";
        cout << "14. Task 7A: Temperature Conversion (Celsius to Fahrenheit and Kelvin)\n";
        cout << "15. Task 7B: Temperature Conversion (Fahrenheit to Celsius and Kelvin)\n";
        cout << "16. Task 7C: Temperature Conversion (Kelvin to Celsius and Fahrenheit)\n";
        cout << "17. Task 8: Power Calculation (N^K)\n";
        cout << "18. Task 9: Swapping Two Integers\n";
        cout << "19. Task 10: Average of K Numbers\n";
        cout << "20. Task 11: Sum of K Numbers\n";
        cout << "21. Task 12: Sum of Multiples of 3 or 5 Below N\n";
        cout << "22. Task 13: Factorial of a Number\n";
        cout << "23. Task 14: Decremental Repetition with Minimum Reps\n";
        cout << "24. Task 15: Parking Lot Fee Calculation\n";
        cout << "25. Task 16: Compound Interest Calculation\n";
        cout << "0. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "\nTask 1: Prints a multiplication table for a given number within a specified range.\n";
            main_Task1();
            break;
        case 2:
            cout << "\nTask 2A: Prints a multiplication table for odd numbers only, within a given range.\n";
			main_Task2A();
            break;
        case 3:
            cout << "\nTask 2B: Prints a multiplication table for even numbers only, within a given range.\n";
			main_Task2B();
            break;
        case 4:
            cout << "\nTask 3: Prints a reverse multiplication table starting from a higher number and decrementing.\n";
			main_Task3();
            break;
        case 5:
            cout << "\nTask 4A: Prints a multiplication table with user-defined forward jumps between values.\n";
			main_Task4A();
            break;
        case 6:
            cout << "\nTask 4B: Prints a multiplication table with user-defined backward jumps between values.\n";
			main_Task4B();
            break;
        case 7:
            cout << "\nTask 5A: Calculates and displays the cube of a single number.\n";
			main_Task5A();
            break;
        case 8:
            cout << "\nTask 5B: Calculates and displays the cubes of numbers within a given range.\n";
			main_Task5B();
            break;
        case 9:
            cout << "\nTask 6A: Generates a series of odd numbers less than 100.\n";
			main_Task6A();
            break;
        case 10:
            cout << "\nTask 6B: Generates a series of even numbers less than 100.\n";
			main_Task6B();
            break;
        case 11:
            cout << "\nTask 6C: Generates a reverse series of odd numbers starting from 99.\n";
			main_Task6C();
            break;
        case 12:
            cout << "\nTask 6D: Generates a reverse series of even numbers starting from 98.\n";
			main_Task6D();
            break;
        case 13:
            cout << "\nTask 6E: Implements the halving technique, starting from 100 and halving until 1.\n";
			main_Task6E();
            break;
        case 14:
            cout << "\nTask 7A: Converts a given Celsius temperature to Fahrenheit and Kelvin.\n";
			main_Task7A();
            break;
        case 15:
            cout << "\nTask 7B: Converts a given Fahrenheit temperature to Celsius and Kelvin.\n";
			main_Task7B();
            break;
        case 16:
            cout << "\nTask 7C: Converts a given Kelvin temperature to Celsius and Fahrenheit.\n";
			main_Task7C();
            break;
        case 17:
            cout << "\nTask 8: Calculates N raised to the power of K.\n";
			main_Task8();
			break;
        case 18:
            cout << "\nTask 9: Swaps two integers and displays the results.\n";
			main_Task9();
            break;
        case 19:
			cout << "\nTask 10: Calculates the average of K user-input numbers.\n";
			main_Task10();
            break;
        case 20:
            cout << "\nTask 11: Calculates the sum of K user-input numbers.\n";
			main_Task11();
            break;
        case 21:
            cout << "\nTask 12: Calculates the sum of multiples of 3 or 5 less than a given number N.\n";
			main_Task12();
            break;
        case 22:
            cout << "\nTask 13: Calculates the factorial of a given number N.\n";
			main_Task13();
            break;
        case 23:
            cout << "\nTask 14: Performs decremental repetition with a user-defined minimum number of repetitions.\n";
			main_Task14();
            break;
        case 24:
            cout << "\nTask 15: Calculates parking lot fees based on hours parked, using tiered rates.\n";
			main_Task15();
            break;
        case 25:
            cout << "\nTask 16: Computes the total amount in a savings account after a certain number of years with a fixed interest rate.\n";
		    main_Task16();

            break;
        case 0:
            cout << "Exiting the program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice! Please select a valid task.\n";
        }
		
    } while (choice != 0);

    return 0;
}
int main_Task1()
{
	cout << "enter any number" << endl;
    cout <<"TASK 1"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int Start;
	cout << "Start=";
	cin >> Start;
	int End;
	cout << "End=";
	cin >> End;
	int i = Start;


	while (i <= End)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i + 1;
	}
	return 0;
}
int main_Task2A()
{

	// printing the table of odd number ;
	// enter any  number;
	cout << "enter any number" << endl;
  cout <<"TASK 2A"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int Range;
	cout << "Range =";
	cin >> Range;
	int i = 0;
	while (i <= Range)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i + 2;
	}
	return 0;
} 

int main_Task2B()
{

	
	cout << "enter any number" << endl;
	 cout <<"TASK 2B"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int Range;
	cout << "Range =";
	cin >> Range;
	int i = 0;
	while (i <= Range)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i + 2;
	}
	return 0;
} 
int main_Task3()
{

	
	cout << "enter any number" << endl;
	cout <<"TASK 3"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int end;
	cout << "end =";
	cin >> end;
	int start;
	cout << "start";
	cin >> start;
	int i = end;
	while (i >= start)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i -1;
	}
	return 0;
} 

int main_Task4A()
{

	
	cout << "enter any number" << endl;
	cout <<"TASK 4A"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int start;
	cout << "start =";
	cin >> start;
	int end;
	cout << "end =";
	cin >> end;
	int  jump ;
	cout << "enter the value of jump =";
	cin >> jump;
	int i = start;
	while (i <= end)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i + jump;
	}
	return 0;
} 


int main_Task4B()
{
	cout << "enter any number" << endl;
	cout <<"TASK 4B"<< endl;
	int Table;
	cout << "Table =";
	cin >> Table;
	int start;
	cout << "start =";
	cin >> start;
	int end;
	cout << "end =";
	cin >> end;
	int  jump;
	cout << "enter the value of jump =";
	cin >> jump;
	int i = end;
	while (i>= start)
	{
		cout << Table << "*" << i << "=" << Table * i << endl;
		i = i -jump;
	}
	return 0;
} 


int main_Task5A ()
{
	
	cout << "TASK 5A" << endl;
	cout << "enter the number" << endl;
	int number;
	cout << "number =";
	cin >> number;
	cout << " cube of" << " number = " << number * number * number << endl;
	return 0;
}


int main_Task5B()
{
	cout << "TASK 5B" << endl;
	cout << "enter the number" << endl;
	int startingnumber;
	cout << " starting number =";
	cin >> startingnumber;
	int endingnumber;
	cout << " ending number = ";
	cin >> endingnumber;
	int number = startingnumber;
	while (number <= endingnumber)
	{
		cout << " cube of" << " number = " << number * number * number << endl;
		number = number + 1;
	}
	return 0;
}



int main_Task6A()
{ // series of odd number ;
	cout << "TASK 6A" << endl;
	cout << " series of odd numbers" << endl;
	int number = 1;

	while (number < 100) {
		cout << number << "    ";
		number = number + 2;
	}

	return 0;
}

int main_Task6B()
{ // series of even number ;
	cout << " TASK 6B " << endl;
	cout << "series of even numbers" << endl;
	int number = 0;

	while (number < 100) {
		cout << number << "    ";
		number = number + 2;
	}

	return 0;
} 


int main_Task6C()
{ // series of odd number ;
	cout << "TASK 6C" << endl;
	cout << " reverse series of odd numbers" << endl;
	int number = 99 ;
	
	while (number >= 1) {
		cout << number << "     ";
		number = number - 2;
	}

	return 0;
} 

int main_Task6D()
{ // series of even number ;
	cout << "TASK 6D" << endl;
	cout << " reverse series of even numbers" << endl;
	int number = 98;

	while (number >= 0) {
		cout << number << "    ";
		number = number - 2;
	}

	return 0;
}

int main_Task6E()
{
	 /*halving teachique;*/
	cout << " TASK 6E" << endl;
	int number = 100;
	
	while (number > 0) {
	
		cout << number << "    ";
		number = number / 2;
	}	return 0;
}

int main_Task7A()
{// temrature coversions ;
 cout<<"TASK 7A"<<endl;
	cout << " Temprature conversions" << endl;
	double celciusC;
	cout << "enter temprature in celcius(C) =";
	cin >>celciusC;
	double fahrenheitF =( 9.0 / 5.0*celciusC)+32;
	double kelvinK;
	cout << "fahrenheit(F)" << "=" << fahrenheitF << endl;
	cout << "kelvin(k)" << "=" << celciusC + 273 << endl;
         return 0 ;
}

int main_Task7B()
{// temrature coversions ;
	cout << " Temprature conversions" << endl;
 cout<<"TASK 7B"<<endl;
	double fahrenheitF;
	cout << "enter temprature in fahrenheit (F) =";
	cin >> fahrenheitF;
	double celciusC;
	double kelvinK;
	cout << "celcius(C)" << "=" << (fahrenheitF-32)*5/9 << endl;
	cout << "kelvin(k)" << "=" << (fahrenheitF - 32) * 5 / 9 + 273.15 << endl;
         return 0 ;
}

int main_Task7C()
{// temrature coversions ;
	cout << " Temprature conversions" << endl;
 cout <<"TASK 7C"<<endl;
	double kelvinK;
    cout << "enter temprature in kelvin (K) =";
	cin >> kelvinK;
	double celciusC;
    double fahrenheitF;
	cout << "celcius(C)" << "=" << kelvinK - 273.15 << endl;
	cout << "fahreheit(F)" << "=" << (kelvinK - 273.15) * 9/5 + 32 << endl;
         return 0 ;
}

int main_Task8()
{
	cout << "TASK 8" << endl;
	int k;
	cout << "K=";
	cin >> k;
	int n;
	cout << "N=";
	cin >> n;
	int m = 1;
	int t = 0;
	while (t < k) 
	{
			m = m * n;
			t= t + 1;
	    }
			cout << endl << "N^K=" << m;
	return 0;
}

int main_Task9()
{
	/* swapping integers*/
 	cout << " TASK 9" << endl;
	cout << " swapping integers" << endl;
	int A;
	cout <<"A=";
	cin >> A;
	int B;
	cout <<"B=";
	cin >> B;
	int C;
	cout << "C=" << A << endl;
	cout << "A=" << B << endl;
	cout << "B=" << A << endl;

	return 0;
}

int main_Bonus()
{
	 
	cout << " BONUS " << endl;
	cout << " swapping integers" << endl;
	int A;
	cout << "A=";
	cin >> A;
	int B;
	cout << "B=";
	cin >> B;
	cout << "A=" << B << endl;
	cout << "B=" << A << endl;

	return 0;
}
int main_Task10()
{
	cout << "TASK 10" << endl;
	int k;
	cout << "K=";
	cin >> k;
	int num = 1;
	float n = 0;
	float sum = 0;
	while (num <= k)
	{

		cout << "ENTER THE NUMB:" << num << "=";
		cin >> n;
		sum = sum + n;
		num = num + 1;
	}
	cout << "Average of K numbers:" << sum / k;
	return 0;
}

int main_Task11()
{
	cout << "TASK 11" << endl;
	int k;
	cout << "K=";
	cin >> k;
    int num = 1;
	int n = 0;
	int sum = 0;
	while (num <=k) {
		cout << "ENTER NUM:"<<num<<"=";
		cin >> n;
		sum = sum + n;
		num = num + 1;
	}
	cout << sum;
	return 0;
}

int main_Task12()
{
 cout<<"TASK 12"<<endl;
	cout << "enter any positive integer=" << endl;
	int N;
	cout << "N =";
	cin >> N;
	int x = 0;
	int z = 0;
	while (x < N)
	{
		cout << x << " ";
		z = z + x;
		x = x + 3;

	}
	cout << endl << "sum of multiples of 3 = " << z << endl;
	int y = 0;
	int b = 0;
	while (y < N)
	{
		cout << y << " ";
		b = b + y;
		y = y + 5;
	}
	cout << endl << "sum of multiples of 5 = " << b << endl;

	int d = 0;
	int e = 0;
	while (d < N)
	{
		cout << d << "   ";
		e = e + 15;
		d = d + 15;
	}
	cout << endl << "sum of common multiples of 3 and 5 = " << e << endl;
	int c;
	c = (z + b ) - e;
	cout << endl << "sum of multiples of 3 or 5 less than N = " << c << endl;

	
	return 0;
}

int main_Task13()
{
	cout << "TASK 13" << endl;
	int N;
	cout << " N= ";
	cin >> N;
	int Y = 1;
	while (N >= 1)
	{
		cout << N << endl;
		Y = Y * N;
		N = (N - 1);
		
	}
	cout << endl << "fictorial of N = " << Y;
	return 0;
}

int main_Task14()
{
	cout << "TASK 14" << endl;
	int a;
	cout << "START REPS = ";
	cin >> a;
	int b ;
	cout << "decrement=";
	cin >> b;
	int c;
	cout << "MIN REPS = ";
	cin >> c;
	int x = 1;
	while (a >= c)
	{
		cout << "STEP:" << x << "=" << a << "reps " << endl; 
		a = a - b;
		x = x + 1;
		
	}
	cout << "TOTAL STEPS COMPLETED =" << x-1 << endl;
	return 0;
}

int main_Task15()
{
	cout << "TASK 15" << endl;
	int h;
	cout << "hours = ";
	cin >> h;
	int a = 5;
	int f = 0;
	int x = 1;
	cout << x << "hours cost $" << a << endl;
	f = f + a;
	int b = 3;
	int e = 0;
	int y = 2;
	while (y <= 5)
	{

		cout << y << "hours cost $" << b << endl;
		e = e + b;
		y = y + 1;
	}
	int c = 2;
	int d = 0;
	int z = 6;
	while (z <= h)
	{
		cout << z << "hours cost $" << c << endl;
		d = d + c;
		z = z + 1;

	}
	cout << "TOTAL FEE:" << f + e + d;
	return 0;
}

#include<iostream>
using namespace std;
int main_Task16()
{
	cout << "TASK 16" << endl;
	int P;
	cout << "initial amount=$";
	cin >> P;
	double R;
	cout << "intrest rate=";
	double a;
	cin >> R;
	a = R / 100;
	double b = 1 + a;
	double c = 1;
	int T;
	cout<< "number of years=";
	cin >> T;
    int x = 0;
	while (x < T)
	{
		c = c * b;
		x = x + 1;
	}
	c= c * P;
	cout << "After "<<T<<" years the amount increases to $" << c;

	return 0;
}