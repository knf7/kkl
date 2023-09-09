#include <iostream>
#include <string>
using namespace std;

struct Cleaner{
    string name;
    string availability;
    int phone_num;
    int cleaning_price;
    string car;

};

struct Car{
    string car_name;
    string type;
    int plate_num;
    string color;
    string location;
    string cleaner;
};


Car cars[200];
Cleaner cleaners[100];


void addCar(int num) {

    cout << "\nEnter Car information\n";
    cout << "Enter Car Name: ";
    getline(cin,cars[num].car_name);
    cout << "Enter Car Type: ";
    getline(cin,cars[num].type);
    cout << "Enter Car Plate Number: ";
    cin >> cars[num].plate_num;
    cout << "Enter Car Color: ";
    cin >> cars[num].color;
    cout << "Enter Car Location: ";
    cin >> cars[num].location;


}

void addCleaner(int num) {

    cout << "\nEnter Cleaner information\n";
    cout << "Enter Cleaner Name: ";
    getline(cin,cleaners[num].name);
    cout << "Enter Cleaner Availability Status: ";
    getline(cin,cleaners[num].availability);
    cout << "Enter Cleaner Phone Number: ";
    cin >> cleaners[num].phone_num;
    cout << "Enter Cleaner Cleaning Price: ";
    cin >> cleaners[num].cleaning_price;

}



void assign_cleaner(){
    string cleaner_name;
    string car_name;
    

    cout << "\nEnter cleaner name: ";
    cin >> cleaner_name;
    cout << "enter car name: ";
    cin >> car_name;

    for(int i = 0; i<100; i++)
    {
        if(cleaners[i].name==cleaner_name){
            for(int j = 0; j<200;j++){
                if(cars[j].car_name==car_name){
                    cars[j].cleaner=cleaners[i].name;
                    cleaners[i].car = cars[j].car_name;
                    break;
                }
                break;
            }
        }
    }
	
	cout << "\n\n";
}

void deleteAssign(){
	string cleaner_name;
    string car_name;
    cout << "\nEnter cleaner name: ";
    cin >> cleaner_name;
    cout << "enter car name: ";
    cin >> car_name;

    for(int i=0; i<100; i++)
    {
        if(cleaners[i].name==cleaner_name){
            for(int j=0; j<200;j++){
                if(cars[j].car_name==car_name){
                    cars[j].cleaner= "";
                    cleaners[i].car = "";
                }
            }
        }
    }
    
    cout << "\n\n";
}

void carsList(int num) {
    cout << "\nCars List\n\n";

    cout <<"__________________________________" << endl;
    for(int i = 0; i < num; i++) {
        cout <<"["<< i + 1 <<"]" << endl;
        cout << "Car Name: " << cars[i].car_name << endl;
        cout << "Car Type: " << cars[i].type << endl;
        cout << "Car Plate Number: " << cars[i].plate_num << endl;
        cout << "Car Color: " << cars[i].color << endl;
        cout << "Car Location: " << cars[i].location << " \n";
        cars[i].cleaner.empty() ? cout << "Car cleaner: Not assigned" << endl: cout << "Car cleaner: " << cars[i].cleaner << endl;
        cout <<"__________________________________" << endl;
    }
}

void cleanersList(int num) {
    cout << "\nCleaners List\n\n";

    cout <<"__________________________________" << endl;
    for(int i = 0; i < num; i++) {
        cout <<"["<< i + 1 <<"]" << endl;
        cout << "Cleaner Name: " << cleaners[i].name << endl;
        cout << "Cleaner Availability Status: " << cleaners[i].availability << endl;
        cout << "Cleaner Phone Number: " << cleaners[i].phone_num << endl;
        cout << "Cleaner Cleaning Price: " << cleaners[i].cleaning_price << " \n";
        cleaners[i].car.empty() ? cout << "Assigned Car: Not assigned" << endl: cout << "Assigned Car: " << cleaners[i].car << endl;
        cout <<"__________________________________" << endl;
    }
}
int num;
void updateCar(string car_name, int counter1){
    for(int ctr = 0; ctr < counter1 ; ctr++) {
        if(cars[ctr].car_name.compare(car_name) ==0) {
            cout << "\nWhich data you want to change?\n";
            cout << "1.Car Name " << endl;
            cout << "2.Car Type " << endl;
            cout << "3.Car Plate Number " << endl;
            cout << "4.Car Color " << endl;
            cout << "5.Car Location " << endl;


            cin >> num;


            switch(num){
                case 1:
                    cout << "Enter the new car name:\n ";
                    (cin >> cars[ctr].car_name);
                    cout << "\nCar details updated!\n";
                    cout << "Name: " << cars[ctr].car_name << endl;
                    cout << "Type: " << cars[ctr].type << endl;
                    cout << "Plate Number: " << cars[ctr].plate_num << " \n";
                    cout << "Color: " << cars[ctr].color << endl;
                    cout << "Location: " << cars[ctr].location << " \n\n";
                    break;
                case 2:
                    cout << "Enter the new car type:\n ";
                    (cin >> cars[ctr].type);
                    cout << "\nCar details updated!\n";
                    cout << "Name: " << cars[ctr].car_name << endl;
                    cout << "Type: " << cars[ctr].type << endl;
                    cout << "Plate Number: " << cars[ctr].plate_num << " \n";
                    cout << "Color: " << cars[ctr].color << endl;
                    cout << "Location: " << cars[ctr].location << " \n\n";
                    break;
                case 3:
                    cout << "Enter the new color : ";
                    (cin >> cars[ctr].color);
                    cout << "\nCar details updated!\n";
                    cout << "Name: " << cars[ctr].car_name << endl;
                    cout << "Type: " << cars[ctr].type << endl;
                    cout << "Plate Number: " << cars[ctr].plate_num << " \n";
                    cout << "Color: " << cars[ctr].color << endl;
                    cout << "Location: " << cars[ctr].location << " \n\n";
                    break;
                case 4:
                    cout << "Enter new plate number: ";
                    (cin >> cars[ctr].plate_num);
                    cout << "\nCar details updated!\n";
                    cout << "Name: " << cars[ctr].car_name << endl;
                    cout << "Type: " << cars[ctr].type << endl;
                    cout << "Plate Number: " << cars[ctr].plate_num << " \n";
                    cout << "Color: " << cars[ctr].color << endl;
                    cout << "Location: " << cars[ctr].location << " \n\n";
                    break;
                case 5:
                    cout << "Enter the new location: ";
                    (cin >> cars[ctr].location);
                    cout << "\nCar details updated!\n";
                    cout << "Name: " << cars[ctr].car_name << endl;
                    cout << "Type: " << cars[ctr].type << endl;
                    cout << "Plate Number: " << cars[ctr].plate_num << " \n";
                    cout << "Color: " << cars[ctr].color << endl;
                    cout << "Location: " << cars[ctr].location << " \n\n";
                    break;

            }
            return;
        }


    }
    cout << "\nCar not available!\n\n";
}

int Num;
void updateCleaner(string cleaner_name, int counter2) {
    for(int Ctr = 0; Ctr < counter2 ; Ctr++) {
        if(cleaners[Ctr].name.compare(cleaner_name) == 0) {
            cout << "\nWhich data you want to update?\n";
            cout << "1.Name " << endl;
            cout << "2Phone number " << endl;
            cout << "3.Cleaning price " << " \n";
            cout << "4.Availability " << " \n\n";

            cin >> Num;

            switch(Num){

                case 1:
                    cout << "Enter the new name: ";
                    (cin >> cleaners[Ctr].name);
                    cout << "\nCleaner information updated!\n";
                    cout << "Name: " << cleaners[Ctr].name << endl;
                    cout << "Phone number: " << cleaners[Ctr].phone_num << endl;
                    cout << "Cleaning price: " << cleaners[Ctr].cleaning_price << " \n";
                    cout << "Availability: " << cleaners[Ctr].availability << " \n\n";
                    break;


                case 2:
                    cout << "Enter the new phone number: ";
                    (cin >> cleaners[Ctr].phone_num);
                    cout << "\nCleaner information updated!\n";
                    cout << "Name: " << cleaners[Ctr].name << endl;
                    cout << "Phone number: " << cleaners[Ctr].phone_num << endl;
                    cout << "Cleaning price: " << cleaners[Ctr].cleaning_price << " \n";
                    cout << "Availability: " << cleaners[Ctr].availability << " \n\n";
                    break;

                case 3:
                    cout << "Enter new cleaning price : ";
                    (cin >> cleaners[Ctr].cleaning_price);
                    cout << "\nCleaner information updated!\n";
                    cout << "Name: " << cleaners[Ctr].name << endl;
                    cout << "Phone number: " << cleaners[Ctr].phone_num << endl;
                    cout << "Cleaning price: " << cleaners[Ctr].cleaning_price << " \n";
                    cout << "Availability: " << cleaners[Ctr].availability << " \n\n";
                    break;

                case 4:
                    cout << "Availability : ";
                    (cin >> cleaners[Ctr].availability);
                    cout << "\nCleaner information updated!\n";
                    cout << "Name: " << cleaners[Ctr].name << endl;
                    cout << "Phone number: " << cleaners[Ctr].phone_num << endl;
                    cout << "Cleaning price: " << cleaners[Ctr].cleaning_price << " \n";
                    cout << "Availability: " << cleaners[Ctr].availability << " \n\n";
                    break;

            }
            return;
        }
    }

    cout << "\nCleaner not available!\n\n";
}



void deleteCar(int &car_total){
    int found=0;
    string car;
    int tot=200;
    cout<<"\nEnter car to Delete: ";
    cin>>car;
    for(int i=0; i<tot; i++)
    {
        if(cars[i].car_name == car)
        {
            for(int j=i; j<(tot-1); j++)
                cars[j] = cars[j+1];
            found=1;
            i--;
            tot--;
            break;
        }
    }
    if(found==0)
        cout<<"\nNot Found ! \n\n" << endl;
    else
    {
        car_total -= 1;
        cout<<"\nCar Deleted Successfully!\n\n";
    }
}


void deleteCleaner(int &cleaner_total){

    int found=0;
    string cleaner;
    int tot=100;
    cout<<"\nEnter cleaner to Delete: ";
    cin>>cleaner;
    for(int i=0; i<tot; i++)
    {
        if(cleaners[i].name == cleaner)
        {
            for(int j=i; j<(tot-1); j++)
                cleaners[j] = cleaners[j+1];
            found=1;
            i--;
            tot--;
            break;
        }
    }
    if(found==0)
        cout<<"\nNot Found !\n\n";
    else
    {
        cleaner_total -= 1;
        cout<<"\n Cleaner Deleted Successfully!\n\n";
    }
}

void searchCar(string car)
{
    //cars[num].car_name
    cout << "\nEnter Car Name: ";
    getline(cin,car);
    for(int i=0;i<car.length();++i)
        if(car==cars[i].car_name)
        {
            cout <<"\n__________________________________" << endl;
            cout <<"["<< i + 1 <<"]" << endl;
            cout << "Car Name: " << cars[i].car_name << endl;
            cout << "Car Type: " << cars[i].type << endl;
            cout << "Car Plate Number: " << cars[i].plate_num << endl;
            cout << "Car Color: " << cars[i].color << endl;
            cout << "Car Location: " << cars[i].location << "\n";
            cout <<"__________________________________" << endl;
            break;
        }
}

void searchCleaner(string cleaner_name)
{
    cout << "\nEnter Cleaner Name: ";
    getline(cin,cleaner_name);
    for( int i=0;i<cleaner_name.length();++i)
    {
        if(cleaner_name==cleaners[i].name)
        {
            cout <<"\n__________________________________" << endl;
            cout <<"["<< i + 1 <<"]" << endl;
            cout << "Cleaner Name: " << cleaners[i].name << endl;
            cout << "Cleaner Availability Status: " << cleaners[i].availability << endl;
            cout << "Cleaner Phone Number: " << cleaners[i].phone_num << endl;
            cout << "Cleaner Cleaning Price: " << cleaners[i].cleaning_price << " \n";
            cout <<"__________________________________" << endl;
            break;
        }
    }
}

int main(){
    int counter1 = 0;//cars
    int counter2 = 0;//cleaners
    int choice = 0;

    string newcar, cleaner_name;

    string  name1; //cars
    string  name2; //cleaners

    do {
        cout <<"1.  Add Car\n";//done
        cout <<"2.  Add Cleaner\n";//done
        cout <<"3.  Assign Cleaner to Car\n";//done
        cout <<"4.  Remove Cleaner from Car Details and Vice Versa\n";//done
        cout <<"5.  Update Car Details\n";//done
        cout <<"6.  Update Cleaner Details\n";//done
        cout <<"7.  Delete Car Records\n";//done
        cout <<"8.  Delete Cleaner Records\n";//done
        cout <<"9.  Show Car List\n";//done
        cout <<"10. Show Cleaner List\n";//done
        cout <<"11. Search Car Details\n";//done
        cout <<"12. Search Cleaner Details\n";//done
        cout <<"13. Exit\n";
        cout <<"Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1:
                addCar(counter1);
                counter1++;
                cout << "\n";
                break;
            case 2:
                addCleaner(counter2);
                counter2++;
                cout << "\n";
                break;
            case 3:
                assign_cleaner();
                break;
            case 4:
                deleteAssign();
                break;
            case 5:
                cout<<"\nEnter Car Name :";
                cin >> name1;
                updateCar(name1,counter1);
                break;
            case 6:
                cout<<"\nEnter cleaner Name :\n";
                cin >> name2;
                updateCleaner(name2,counter2);
                break;
            case 7:
                deleteCar(counter1);
                break;
            case 8:
                deleteCleaner(counter2);
                break;
            case 9:
                carsList(counter1);
                cout << "\n";
                break;
            case 10:
                cleanersList(counter2);
                cout << "\n";
                break;
            case 11:
                searchCar(newcar);
                break;
            case 12 :
                searchCleaner(cleaner_name);
                break;
            case 13:
                cout << "\nThank you!\n\n";
                break;
            default:
                cout << "\nNot found! input!\n\n";
                break;

        }
    } while(choice!=13);

    return 0;
}

