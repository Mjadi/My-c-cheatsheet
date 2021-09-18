#include <iostream>
#include <stdio.h>
using namespace std;

/*
int main()
{
	int x = 90;
	cout << x * x << endl;
	// Whatever
	int arr[6]={11,12,13,14,15,16};
    // Way -1
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
   
  	cout<<endl;
      // Way 2
    cout<<"By Other Method:"<<endl;
    for(int i=0;i<6;i++)  
        cout<<i[arr]<<" ";
   
    cout<<endl;
	return 0;
}
*/

/*
int main() {

	int d1[4] = {4, 3, 2, 1};
	for(int i=0;i<4;i++)
		cout<<d1[i]<<" ";
	cout<<endl<<"done!";
	return 0;
}
*/

/*
int main() {
	int test[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 3; j++)
		{
			
			cout << test[i][j] << endl;
		}
		
	}
	return 0;

}
*/

/*
int main()
{
	int n;
	cout << "Type a number:-\n";
	cin >> n;
	cout << "The value you entered is" << " " << n;
	return 0;
}
*/

/*
int main(int argc, char const *argv[])
{
	int arr[2][3][2];
	cout << "Enter 12 numbers:-" << endl;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cin >> arr[i][j][k];
			}
		}
	}

	cout << "The values are:-\n" << endl;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int k = 0; k < 2; ++k)
			{
				cout << arr[i][j][k] << endl;
			}
		}
	}
	// cout << "Values are" << " " << arr[i][j][k];
	return 0;
}
*/

/*
int main(int argc, char const *argv[])
{
	int a, b;
	cout << "Type a number: ";
	cin >> a;
	cout << "Type a second number: ";
	cin  >> b;
	cout<< "The sum of numbers is "<< a + b;

	return 0;
}
*/

/*
int main() {
	int a;
	cout << "Enter your age: " << endl;
	cin >> a;
	if (a >= 18)
	{
		cout << "A rated!";
	}
	else
	{
		cout << "R rated!";
	}
	return 0;
	
}
*/

/*
int main() {
	int v;
	cin >> v;
	switch (v)
	{
	case 5:
		cout << "Rajma chawal op!";
		break;
	
	default:
	cout << "la la lala la";
		break;
	}

}
*/

/*
int main()
{
	cout << "Lets learn counting till 69! Yay." << endl;
	int u = 0;
	while (u<=69)
	{
		cout << "Iterating" << " " << u << '\n';
		u++;
	}
	return 0;
	
}
*/

/*
int sum(int a, int b) {
	return a * b;
}

int main() {
	cout << sum(99, 69);
}
*/

/*
int main()
{
	int arr[8];
	for (int i = 1; i < 8 + 1; i++)
	{
		cout << "Enter the number of " << i << "th student: ";
		cin >> arr[i];
	}

	for (int j = 1; j < 8 + 1; j++)
	{
		cout << "The number of " << j << "th student is " << arr[j] << endl;
	}

	return 0;
}
*/

/*
int main() {
	float n = 78.45;
	// cout << (int) n;
	string s;
	s = "Mjadi";
	cout << s << endl;
	cout << s.length() << endl << s.substr(0, 2);
	return 0;
}*/

/*
int main()
{
	int y = 88;
	int* ptra;
	ptra = &y;
	cout << ptra << endl << *ptra;

	return 0;

}
*/

/*
int main()
{
	class jobber {
		public:
		string company = "Lato";
		string name;
		int salary;

		void details() {
			cout << "Employee is working for " << this->company << ',' << endl;
			cout << "He/she's name is " << this->name << ',' << endl << "His/her salry is " << this->salary << " dollars.";

		}

	};

	jobber turtle;
	turtle.name = "turtle";
	turtle.salary = 1000;
	turtle.details();

	return 0;
}*/

/*
int main()
{


	class jobber
	{
	public:
		string company = "Lato";
		string name;
		int salary;

		jobber(string name, int salary, int pass)
		{
			this->name = name;
			this->salary = salary;
			this->pass = pass;
		};

		void details()
		{
			cout << "Employee is working for " << this->company << ',' << endl;
			cout << "He/she's name is " << this->name << ',' << endl
				 << "His/her salry is " << this->salary << " dollars.";
		};

	private:
		int pass;
	};



	class worker
	{
	public:
		int code = 7893;
	};

	class staff : public worker
	{
	public:
		string name;
	};

	// jobber turtle("Lulla", 1500, 7471);
	// turtle.name = "turtle";
	// turtle.salary = 1000;
	// cout << turtle.pass; // inaccecible

	// turtle.details();
	staff trek;
	trek.name = "july";
	cout << trek.name << endl << trek.code;

	return 0;
}*/
int main()
{
	cout << "is everything working fine.";
	return 0;
}
