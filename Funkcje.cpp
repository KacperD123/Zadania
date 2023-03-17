
#include <iostream>


using namespace std;

string getPesel() {

    string stringPesel;

    cout << "Podaj numer pesel 221221" << endl;
    cin >> stringPesel;

    return stringPesel;
}

bool checkPesel(string stringPesel)
{

}


int main()
{
    string stringPesel = getPesel();


    if (checkPesel(stringPesel) == true)
    {
        //pesel poprawny
    }
    else {
        //pesel niepoprawny
    }
}


