#include <iostream>
#include <string>
using namespace std;


int main()
{

	double tacos = 1.25;
	double tacosNum;
	double tacosTot;
	double taxeRate = 0.10;
	double realTotal;
	double taxes;


	cout << "                                     XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "                                    X X                 X                                                             X" << endl;
	cout << "                                   X X                  X                                                             X" << endl;
	cout << "                                  X X                   X       XXXXXXXXXXX                                           X" << endl;
	cout << "                                 X X                    X            X                                                X" << endl;
	cout << "                                X X                     X            X             X                                  X" << endl;
	cout << "                               X X                      X            X       XXXXXXX    XXXXXXX    XXXXXXX            X" << endl;
	cout << "                              X X                       X            X       X     X    X          X     X            X" << endl;
	cout << "                             X X                        X            X       X     X    X          X     X            X" << endl;
	cout << "                            XXXXXXXXXXXXXXXXXXXXXXXXXXXXX            X       XXXXXXX    XXXXXXX    XXXXXXX            X" << endl;
	cout << "                           X                            X                                                             X" << endl;
	cout << "               XXXXXXXXXXXX                             X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X                                        X                                                             X" << endl;
	cout << "               X         XXXXXX                         X                                           XXXXXX            X" << endl;
	cout << "               X        X      X                        X                                          X      X           X" << endl;
	cout << "               XXXXXXXXX        XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX        XXXXXXXXXXXX" << endl;
	cout << "                        X      X                                                                   X      X           " << endl;
	cout << "                         XXXXXX                                                                     XXXXXX            " << endl;
	cout << "" << endl;



	cout << "How many tacos do you want? :";
	cin >> tacosNum;

	tacosTot = tacosNum * tacos;
	taxes = tacosTot * taxeRate;
	realTotal = taxes + tacosTot;
	if (tacosNum == 5)
	{
		cout << "Your total is $" << realTotal << ".";
	}
	else if (tacosNum > 5)
	{
		cout << "Thats too many tacos for one person, please order less than five";
	}
	else if (tacosNum < 5)
	{

		cout << "Your total is $" << realTotal << ".";
	}

	

	system("pause");
	return 0;
}