#include<iostream>
using namespace std;

class UnitConverter
{
    int choice;

public:

    void MenuBasedInput()
    {
        cout << "UNIT CONVERTER SUITE" << endl;
        cout << "1. Kilometer To Meter" << endl;
        cout << "2. Meter To Kilometer" << endl;
        cout << "3. Centimetre To Meter" << endl;

        cout << "Enter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                KilometreToMeter();
                break;

            case 2:
                MeterToKilometre();
                break;

            case 3:
                CentimetreToMeter();
                break;

            default:
                cout << "Invalid Choice";
        }
    }

    void KilometreToMeter()
    {
        cout << "\nConverting Kilometer To Meter" << endl;

        int value, meter;

        cout << "Enter Value To Convert : ";
        cin >> value;

        meter = value * 1000;

        cout << value << " km = " << meter << " meter";
    }

    void MeterToKilometre()
    {
        cout << "\nConverting Meter To Kilometer" << endl;

        int value;
        float kilometer;

        cout << "Enter Value To Convert : ";
        cin >> value;

        kilometer = value / 1000.0;

        cout << value << " meter = " << kilometer << " km";
    }

    void CentimetreToMeter()
    {
        cout << "\nConverting Centimetre To Meter" << endl;

        int value;
        float meter;

        cout << "Enter Value To Convert : ";
        cin >> value;

        meter = value / 100.0;

        cout << value << " cm = " << meter << " meter";
    }
};

int main()
{
    UnitConverter obj;

    obj.MenuBasedInput();

    return 0;
}