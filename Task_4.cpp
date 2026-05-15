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
        cout << "4. Kilogram To gram" << endl;
        cout << "5. Gram To Kilogram" << endl;
        cout << "6. Celsius To Fehrenhit" <<endl;
        cout << "7. Fehrenhit To Celsius" <<endl;
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

            case 4:
                KilogramToGram();
                break;

            case 5:
                GramToKilogram();
                break;

            case 6:
                CelsiusToFehrenhit();
                break;

            case 7:
                FehrenhitToCelsius();
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
    void KilogramToGram()
    {
        cout << "\nConverting Kilogram to Gram"<<endl;
        int value,gram;

        cout << "Enter Value To Convert : ";
        cin >> value;

        gram = value * 1000;

        cout << value << "kg = "<<gram<<"g"<<endl;
    }
    void GramToKilogram()
    {
        cout << "\nConverting Celsius To Fehrenhit"<<endl;
        int value,kilogram;

        cout << "Enter Value To Convert : ";
        cin >> value;

        kilogram = value / 1000;

        cout << value << "g = "<<kilogram<<"kg"<<endl;
    }
    void CelsiusToFehrenhit()
    {
        cout << "\nConverting Fehrenhit To Celsius"<<endl;
        float celsius,fehrenhit;
        cout << "Enter Celsius : ";
        cin >> celsius;
        fehrenhit = (celsius * 9 / 5) + 32;
        cout << "Fehrenhit = "<<fehrenhit;
    }
    void FehrenhitToCelsius()
    {
        float celsius,fehrenhit;
        cout << "Enter fehrenhit : ";
        cin >> fehrenhit;
        celsius = (fehrenhit - 32) * 5 / 9;
        cout << "celsius = "<<celsius;
    }
};

int main()
{
    UnitConverter obj;

    obj.MenuBasedInput();

    return 0;
}
