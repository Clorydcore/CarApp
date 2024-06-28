#include <iostream>
using namespace std;

class Car
{
public:

    string carname;
    string bodywork;
    string engine;
    string wheels;
    string gastankname;
    int bodyworkweight = 0;
    int engineweight = 0;
    int wheel;
    int gastank;
    int speed = 60;

    int w = true;
    int choose;


    void Create_Car()
    {

        while (w)
        {
            cout << "1 Bodywork\n" << "2 Engine\n" << "3 Wheels\n" << "4 Gastank\n" << "5 Exit\n";
            cin >> choose;
            switch (choose)
            {
            case 1:
                system("cls");
                cout << "1 Micro\n" << "2 Sedan\n" << "3 Cabriolet\n" << "4 Pickup\n" << "5 Suv\n" << "6 Van\n" << "7 Truck\n";
                cin >> choose;
                switch (choose) {

                case 1:

                    bodywork = "Micro\n";
                    bodyworkweight = 200;
                    break;
                case 2:
                    bodywork = "Sedan\n";
                    bodyworkweight = 250;
                    speed -= 3;
                    break;
                case 3:
                    speed -= 5;
                    bodywork = "Cabrilet\n";
                    bodyworkweight = 320;
                    break;
                case 4:
                    speed -= 8;
                    bodywork = "Pickup\n";
                    bodyworkweight = 500;
                    break;
                case 5:
                    speed -= 6;
                    bodywork = "Suv\n";
                    bodyworkweight = 400;
                    break;
                case 6:
                    speed -= 12;
                    bodywork = "Van\n";
                    bodyworkweight = 600;
                    break;
                case 7:
                    speed -= 35;
                    bodywork = "Truck\n";
                    bodyworkweight = 1500;
                    break;
                }

                break;

            case 2:
                system("cls");
                cout << "1 Diesel engine\n" << "2 Petrol engine\n" << "3 Gas engine\n" << "4 Electric engine\n";
                cin >> choose;
                switch (choose)
                {
                case 1:
                    engine = "Diesel engine\n";
                    engineweight = 200;
                    break;
                case 2:
                    engine = "Petrol engine\n";
                    engineweight = 200;
                    break;
                case 3:
                    engine = "Gas engine\n";
                    engineweight = 200;
                    break;
                case 4:
                    engine = "Electric engine\n";
                    engineweight = 190;
                    break;
                }
                break;

            case 3:
                system("cls");
                cout << "1 Racing wheels\n" << "2 Off-Road wheels\n";
                cin >> choose;
                switch (choose)
                {
                case 1:
                    wheels = "Racing wheels\n";
                    wheel = 1;
                    break;
                case 2:
                    wheels = "Off-Road wheels\n";
                    wheel = 2;
                    break;
                }
                break;

            case 4:
                system("cls");
                cout << "1 50liter gastank\n" << "2 80liter gastank\n" << "3 125liter gastank\n";
                cin >> choose;
                switch (choose)
                {
                case 1:
                    gastankname = "50liter gastank\n";
                    gastank = 50;
                    break;
                case 2:
                    gastankname = "80liter gastank\n";
                    gastank = 80;
                    break;
                case 3:
                    gastankname = "125liter gastank\n";
                    gastank = 125;
                    break;
                }
                break;

            case 5:
                system("cls");
                w = false;
                cout << endl << endl;
                Menu();
            }
        }
    }

    void Menu()
    {
        cout << "Bodywork : " << bodywork << endl << " Weight: " << bodyworkweight << endl << endl;
        cout << "Engine : " << engine << endl << "Weight: " << engineweight << endl << endl;
        cout << "Wheels : " << wheels << endl;
        cout << "Gastank : " << gastankname << endl;
        cout << "Speed : " << speed << endl << endl << endl;

        cout << "1 Create Car\n";
        cin >> choose;
        switch (choose)
        {

        case 1:
            system("cls");
            Create_Car();
            break;
        }
    }

};

int main()
{
    Car car;

    car.Menu();

}
