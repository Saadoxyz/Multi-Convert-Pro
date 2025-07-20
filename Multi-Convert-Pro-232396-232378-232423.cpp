#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

const double exchangeRates[] = {
  278.42, 309.544698, 356.79, 75.22, 15.44,
  0.22, 1.97, 8.08, 39.48, 9.68,
  1.23, 1.68, 1.07, 0.75, 8.31,
  9.55, 6.12, 1.84, 9.12
};
const float MAX_GPA = 4.0;
void display()
{
    cout << endl;
    cout << "\t\t ----------------" << endl;
    cout << "\t\t|CAR FUEL ECONOMY|" << endl;
    cout << "\t\t ----------------\n\n";
    cout << "\tSimplifying Your Fuel Conversion Needs\n"
         << endl;
}

void input(int &model)
{
    cout << "CHOOSE Your Car Model : \n"
         << endl;
    cout << "1.Corolla" << endl;
    cout << "2.Civic" << endl;
    cout << "3.Swift\n"
         << endl;
    cout << "> ";
    cin >> model; // I will use 1 2 and 3 as replacing their real name in the main function

    switch (model)
    {
    case 1:
        cout << endl;
        cout << "    Corolla." << endl;
        cout << "55 Liters Capacity " << endl;
        break;
    case 2:
        cout << endl;
        cout << "     Civic." << endl;
        cout << "40 Liters Capacity " << endl;
        break;
    case 3:
        cout << endl;
        cout << "      Swift." << endl;
        cout << "35 Liters Capacity " << endl;
        break;
    default:
        cout << "Invalid choice. Please choose 1, 2, or 3." << endl;
        break;
    }
}

void dist(string &location, int &distance, int &fuel, int &speed)
{

    cout << "\nNow Input Your Real Time Data BY Car Dash-O-Meter INFO:\n"
         << endl;
    cout << "    Location Of Your Destination     :";
    cin >> location;
    cout << "Total Distance Of Destination ( Km ) :";
    cin >> distance;
    // In the main function, I will use 1 as low octane or 2 as high octane
    cout << "\nChoose Your Fuel Type :" << endl;
    cout << "1.Low Octane" << endl;
    cout << "2.High Octane" << endl;
    cout << "> ";
    cin >> fuel;
    cout << "Input Your Average Speed Through The Whole Trip (km/s) :";
    cin >> speed;
}

void displayMenu() 
{
    cout << "******" << endl;
    cout << "**CURRENCY CONVERTER**" << endl;
    cout << "******" << endl;
    cout << "1./////// Rupees to Dollars //////////////" << endl;
    cout << "2./////// Rupees to Euros  ///////////////" << endl;
    cout << "3./////// Rupees to Pounds   /////////////" << endl;
    cout << "4./////// Rupees to Riyal   //////////////" << endl;
    cout << "5./////// Rupees to Rand   ///////////////" << endl;
    cout << "6./////// Rupees to Won    ///////////////" << endl;
    cout << "7./////// Rupees to Yen   ////////////////" << endl;
    cout << "8./////// Rupees to Thai Baht  ///////////" << endl;
    cout << "9./////// Rupees to Yuan    //////////////" << endl;
    cout << "10.////// Rupees to Lira   ///////////////" << endl;
    cout << "11.////// Rupees to Canadian Dollar  /////" << endl;
    cout << "12.////// Rupees to Australian Dollar ////" << endl;
    cout << "13.////// Rupees to Swiss Franc   ////////" << endl;
    cout << "14.////// Rupees to Singapore Dollar /////" << endl;
    cout << "15.////// Rupees to Swedish Krona  ///////" << endl;
    cout << "16.////// Rupees to Norwegian Krone  /////" << endl;
    cout << "17.////// Rupees to Danish Krone   ///////" << endl;
    cout << "18.////// Rupees to New Zealand Dollar  //" << endl;
    cout << "19.////// Rupees to Hong Kong Dollar /////" << endl;
    cout << "20./////  Convert to All   ///////////////" << endl;
    cout << "21.///////     Exit          /////////////" << endl;
    cout << "******" << endl;
}

double convertCurrency(double rupees, int choice) 
{
    if (choice < 1 || choice > 21) 
    {
        throw invalid_argument("Invalid choice");
    }
    return rupees / exchangeRates[choice - 1];
}

void displayConversion(double converted_amount, int choice, ofstream& outFile) {
    cout << "Amount in ";
    outFile << "Amount in";
    if (choice == 1) {
        cout << "Dollars";
        outFile << "Dollars";
    }
    else if (choice == 2) {
        cout << "Euros";
        outFile << "Euros";
    }
    else if (choice == 3) {
        cout << "Pounds";
        outFile << "Pounds";
    }
    else if (choice == 4) {
        cout << "Riyal";
        outFile << "Riyal";
    }
    else if (choice == 5) {
        cout << "Rand";
        outFile << "Rand";
    }
    else if (choice == 6) {
        cout << "Won";
        outFile << "Won";
    }
    else if (choice == 7){
        cout << "Yen";
        outFile << "Yen";
    }
    else if (choice == 8) {
        cout << "Thai Baht";
        outFile << "Thai Baht";
    }
    else if (choice == 9){
        cout << "Yuan";
        outFile << "Yuan";
    }
    else if (choice == 10) {
        cout << "Lira";
        outFile << "Lira";
    }
    else if (choice == 11) {
        cout << "Canadian Dollar";
        outFile << "Canadian Dollar";
    }
    else if (choice == 12) {
        cout << "Australian Dollar";
        outFile << "Australian Dollar";
    }
    else if (choice == 13) {
        cout << "Swiss Franc";
        outFile << "Swiss Franc";
    }
    else if (choice == 14){
        cout << "Singapore Dollar";
        outFile << "Singapore Dollar";
    }
    else if (choice == 15) {
        cout << "Swedish Krona";
        outFile << "Swedish Krona";
    }
    else if (choice == 16) {
        cout << "Norwegian Krone";
        outFile << "Norwegian Krone";
    }
    else if (choice == 17) {
        cout << "Danish Krone";
        outFile << "Danish Krone";
    }
    else if (choice == 18){
        cout << "New Zealand Dollar";
        outFile << "New Zealand Dollar";
    }
    else if (choice == 19) {
        cout << "Hong Kong Dollar";
        outFile << "Hong Kong Dollar";
    }

    cout << ": " << converted_amount << " ";
    outFile << ": " << converted_amount << " ";
    if (choice == 1) {
        cout << "$";
        outFile << "$";
    }
    else if (choice == 2) {
        cout << "�";
        outFile << "�";
    }
    else if (choice == 3){
        cout << "�";
        outFile << "�";
    }
    else if (choice == 4){
        cout << "SAR";
        outFile << "SAR";
    }
    else if (choice == 5) {
        cout << "R";
        outFile << "R";
    }
    else if (choice == 6) {
        cout << "?";
        outFile << "?";
    }
    else if (choice == 7) {
        cout << "�";
        outFile << "�";
    }
    else if (choice == 8) {
        cout << "?";
        outFile << "?";
    }
    else if (choice == 9) {
        cout << "CN�";
        outFile << "CN�";
    }
    else if (choice == 10){
        cout << "?";
        outFile << "?";
    }
    else if (choice == 11){
        cout << "CAD";
        outFile << "CAD";
    }
    else if (choice == 12) {
        cout << "AUD";
        outFile << "AUD";
    }
    else if (choice == 13) {
        cout << "CHF";
        outFile << "CHF";
    }
    else if (choice == 14) {
        cout << "SGD";
        outFile << "SGD";
    }
    else if (choice == 15){
        cout << "SEK";
        outFile << "SEK";
    }
    else if (choice == 16) {
        cout << "NOK";
        outFile << "NOK";
    }
    else if (choice == 17) {
        cout << "DKK";
        outFile << "DKK";
    }
    else if (choice == 18){
        cout << "NZD";
        outFile << "NZD";
    }
    else if (choice == 19) {
        cout << "HKD";
        outFile << "HKD";
    }
    cout<<endl;
}

void convertToAllCurrencies(double rupees, ofstream& outFile) 
{
    outFile << "\nConverting to All Currencies:\n";
    outFile << "----------------------------\n";
    for (int i = 0; i < 19; ++i) {
        try {
            double converted_amount = convertCurrency(rupees, i + 1);
            displayConversion(converted_amount, i + 1, outFile);
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    }
    outFile << "----------------------------\n";
}
float calculatePercentage(float num, float total) {
    return num / total * 100;
}

float convertToPercentage(float gpaa) {
    return gpaa / MAX_GPA * 100;
}

float convertToGpa(float percentage) {
    return percentage / 100 * MAX_GPA;
}

void compareGpas(float gpa1, float gpa2) {
    if (gpa1 > gpa2) {
        cout << "GPA 1 is higher than GPA 2." << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
    } else if (gpa1 < gpa2) {
        cout << "GPA 2 is higher than GPA 1." << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
    } else {
        cout << "GPAs are equal." << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
    }
}

string convertGpaToLetterGrade(float gpa) {
    if (gpa >= 4.0) {
        return "A";
    } else if (gpa >= 3.7) {
        return "A-";
    } else if (gpa >= 3.3) {
        return "B+";
    } else if (gpa >= 3.0) {
        return "B";
    } else if (gpa >= 2.7) {
        return "B-";
    } else if (gpa >= 2.3) {
        return "C+";
    } else if (gpa >= 2.0) {
        return "C";
    } else if (gpa >= 1.7) {
        return "C-";
    } else {
        return "D";
    }
}

void saveStudentData(float num, float total, float gpaa, float percentage, float gpa, float gpa1, float gpa2) 
{
    ofstream outFile("student_data.txt");
    if (outFile.is_open()) 
	{
        outFile << "Obtained Marks: " << num << "\n";
        outFile << "Total Marks: " << total << "\n";
        outFile << "Percentage: " << percentage << "\n";
        outFile << "GPA: " << gpaa << "\n";
        outFile << "Equivalent Percentage: " << convertToPercentage(gpaa) << "\n";
        outFile << "Equivalent GPA: " << convertToGpa(percentage) << "\n";
        outFile << "GPA 1: " << gpa1 << "\n";
        outFile << "GPA 2: " << gpa2 << "\n";
        outFile.close();
    } else 
	{
        cerr << "Error: Unable to open file for writing." << endl;
    }
}

void readStudentData() 
{
    ifstream inFile("student_data.txt");
    if (inFile.is_open()) 
	{
        string line;
        while (getline(inFile, line)) 
		{
            cout << line << endl;
        }
        inFile.close();
    } 
	else 
	{
        cerr << "Error: Unable to open file for reading." << endl;
    }
}
int main() {
  bool exitProgram=false;
  do{
    int outermenu;
    int innermenu;
    cout << 
  "\n\n* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n"
        "*///////////////////////////////////////////////////////////////////////////*\n"
        "*       MultiConvert Pro - Your Shortcut to solve Complex Conversions.      *\n"
        "*///////////////////////////////////////////////////////////////////////////*\n"
        "* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n";


cout<<  "\t\tWELCOME TO THE WORLD OF CONVERSIONS :)\n\n";
cout<<  "CHOOSE MENU:\n ";
cout<<  "1.===== Conversion Tool =====\n";
cout<<  " 2.=====    Language     =====\n";
cout<<  " 3.=====      Exit       =====\n\n";
cout<<  "\n Enter your Option:";
cin>>outermenu;
cout<<endl;
switch(outermenu)
{
    case 1:
cout<<"///*** You chose Conversion Tool ***///.\n\n";
cout<<"1.Car Fuel Consumption Conversion.\n";
cout<<"2.Currency Conversion.\n";
cout<<"3.Grades & Gpa Conversion.\n\n";
cout<<"Enter Your Desired Conversion.\n";
cout<<">";
cin>>innermenu;
    switch(innermenu){
    case 1:
    {
    ofstream file("Fuel-Data.txt");
    display();
    int model;
    input(model);
    string location;
    int distance, fuel, speed;
    dist(location, distance, fuel, speed);
    cout << "\n********RESULTS********\n"
         << endl;
    if (model == 1)
    {
        cout << "TOYOTA Corolla :";
        file << "TOYOTA Corolla :";
    }
    else if (model == 2)
    {
        cout << "HONDA Civic :";
        file << "HONDA Civic :";
    }
    else if (model == 3)
    {
        cout << "SUZUKI Swift :";
        file << "SUZUKI Swift :";
    }
    else
    {
        cout << "Invalid Input";
        file << "Invalid Input";
    }
    cout << model << endl;
    float average;
    try
    {
        if (fuel == 1)
        {
            if (speed == 0)
            {
                throw 404; // Assuming that speed cannot be zero for low octane
            }
            average = (speed / 7.0);
        }
        else if (fuel == 2)
        {
            if (speed == 0)
            {
                throw 404; // Assuming that speed cannot be zero for high octane
            }
            average = (speed / 7.0) + 2.0;
        }
        else
        {
            throw 404; // Invalid fuel type
        }
    }
    catch (int n)
    {
        if (n == 404)
        {
            cout << "Error: Invalid input. Speed cannot be zero." << endl;
            return 1;
        }
    }
    cout << "Your Car Fuel Average "<< "|" << average << "|"<< " Km Per Litre" << endl;
    file << "Your Car Fuel Average "<< "|" << average << "|"<< " Km Per Litre" << endl;

    float fuel_required = distance / average;
    cout << "Fuel Required For " << location << " "<< "|" << fuel_required << "|"<< " Litres" << endl;
    file << "Fuel Required For " << location << " "<< "|" << fuel_required << "|"<< " Litres" << endl;
    float fuel_price;
    if (fuel == 1)
    {
        fuel_price = 268.0;
    }
    else if (fuel == 2)
    {
        fuel_price = 298.0;
    }
    else
    {
        cout << "Invalid Input";
    }
    cout << "Cost Of Fuel For " << location << " "<< "|" << average * fuel_price << "|"<< " Rs" << endl;
    file << "Cost Of Fuel For " << location << " "<< "|" << average * fuel_price << "|"<< " Rs" << endl;
    int left;
    if (model == 1)
    {
        left = 55;
    }
    else if (model == 2)
    {
        left = 40;
    }
    else if (model == 3)
    {
        left = 35;
    }
    else
    {
        cout << "Invalid Input :" << endl;
    }
    cout << "Fuel Left In TANK "<< "|" << left - fuel_required << "|"<< " Litres" << endl;
    file << "Fuel Left In TANK "<< "|" << left - fuel_required << "|"<< " Litres" << endl;
    if (average >= 12)
    {
        cout << "You Achieved A Good Fuel Average" << endl;
        file << "You Achieved A Good Fuel Average" << endl;
    }
    else if (average < 12)
    {
        cout << "You Achieved A Bad Fuel Average" << endl;
        file << "You Achieved A Bad Fuel Average" << endl;
    }
    else
    {
        cout << "Input Error";
        file << "Input Error";
    }

}
    break;
    case 2:
     {
    int choice;
    double rupees;
    double converted_amount;

    // Open output file
    ofstream outFile("conversion_results.txt");

    if (!outFile) {
        cerr << "Error: Unable to open output file." << endl;
        return 1;
    }

        displayMenu();
        cout << "****" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        cout << "*******" << endl;

        try {
            switch (choice) {
            case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
            case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
                cout << "*******" << endl;
                cout << "Enter the amount in Rupees: ";
                cin >> rupees;
                cout << "*******" << endl;
                converted_amount = convertCurrency(rupees, choice);
                displayConversion(converted_amount, choice, outFile);
                cout << endl;
                break;
            case 20:
                cout << "*******" << endl;
                cout << "Enter the amount in Rupees: ";
                cin >> rupees;
                cout << "*******" << endl;
                convertToAllCurrencies(rupees, outFile);
                break;
            case 21:
                cout << "*******" << endl;
                cout << "Thank you for Choosing Our Converter" << endl;
                cout << "*******" << endl;
                break;
            default:
                throw 609;
            }
        } catch (int n) {
            cout << "Error: Invalid choice" << endl;
            cout << "*******" << endl;
        }
        outFile.close();
}

    break;
    case 3:
    {
	ifstream inputFile("input.txt"); 
    ofstream outputFile("output.txt");

    int choice;
    char c;

     // Read existing student data from file

        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|************************** GPA and Percentage Converter ********************|" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "1. Calculate Percentage of Marks" << "          | " << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "2. Convert GPA to Percentage" << "              |" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "3. Convert Percentage to GPA" << "              |" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "4. Compare Two GPAs" << "                       |" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "5. Convert GPA to Letter Grade" << "            |" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "|" << "                  " << "6. Exit the program" << "                       |" << endl;
        cout << "|----------------------------------------------------------------------------|" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "|----------------------------------------------------------------------------|" << endl;

        try {
            switch (choice) {
                case 1: {
                    float num, total;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter obtained marks: ";
                    cin >> num;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter total marks: ";
                    cin >> total;
                    if (total == 0 || total < num) {
                        throw 201;
                    }
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Your percentage is: " << calculatePercentage(num, total) << "%" << endl;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    // Save student data to file
                    saveStudentData(num, total, 0, calculatePercentage(num, total), 0, 0, 0);
                    break;
                }
                case 2: {
                    float gpaa;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter GPA: ";
                    cin >> gpaa;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    if (gpaa < 0.0 || gpaa > MAX_GPA) {
                        throw 'c';
                    } else {
                        cout << "Your GPA of " << gpaa << " is equivalent to " << convertToPercentage(gpaa) << "%" << endl;
                        cout << "|----------------------------------------------------------------------------|" << endl;
                        // Save student data to file
                        saveStudentData(0, 0, gpaa, convertToPercentage(gpaa), 0, 0, 0);
                    }
                    break;
                }
                case 3: {
                    float percentage;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter percentage: ";
                    cin >> percentage;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    if (percentage < 0.0 || percentage > 100.0) {
                        throw 1.23f;
                    } else {
                        cout << "Your percentage of " << percentage << "% is equivalent to a GPA of " << convertToGpa(percentage) << endl;
                        cout << "|----------------------------------------------------------------------------|" << endl;
                        // Save student data to file
                        saveStudentData(0, 0, 0, percentage, convertToGpa(percentage), 0, 0);
                    }
                    break;
                }
                case 4: {
                    float gpa1, gpa2;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter first GPA: ";
                    cin >> gpa1;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter second GPA: ";
                    cin >> gpa2;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    compareGpas(gpa1, gpa2);
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    // Save student data to file
                    saveStudentData(0, 0, 0, 0, 0, gpa1, gpa2);
                    break;
                }
                case 5: {
                    float gpa;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Enter GPA: ";
                    cin >> gpa;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "Your Letter Grade Is " << convertGpaToLetterGrade(gpa) << endl;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    // Save student data to file
                    saveStudentData(0, 0, gpa, convertToPercentage(gpa), convertToGpa(convertToPercentage(gpa)), 0, 0);
                    break;
                }
                case 6:
                    cout << "THE PROGRAM IS EXITING................" << endl;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    cout << "THANK YOU FOR USING OUR SYSTEM" << endl;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    break;
                default:
                    cout << "Invalid choice! Please enter a valid option (1-5)" << endl;
                    cout << "|----------------------------------------------------------------------------|" << endl;
                    break;
            }
        } catch (int marks) {
            cout << "|----------------------------------------------------------------------------|" << endl;
            cout << "Total marks cannot be zero or Less than obtained marks" << endl;
            cout << "|----------------------------------------------------------------------------|" << endl;
        } catch (char gpa) {
            cout << "|----------------------------------------------------------------------------|" << endl;
            cout << "Invalid GPA! Please enter a value between 0.0 and 4" << endl;
            cout << "|----------------------------------------------------------------------------|" << endl;
        } catch (float per) {
            cout << "|----------------------------------------------------------------------------|" << endl;
            cout << "Invalid percentage! Please enter a value between 0.0 and 100.0" << endl;
            cout << "|----------------------------------------------------------------------------|" << endl;
        }
    
     inputFile.close();
    outputFile.close();

}

    break;
    default:
    cout << "Invalid Choice in Inner Menu\n";
    break;
    }
    break;

    case 2:
    cout<<"Choose Language From Below:\n\n";
    cout<<"Default Language (ENGLISH)\n";
    break;
    case 3:
    cout<<"Thank you for using MultiConvert Pro. Goodbye!\n";
    exitProgram=true;
    return 0;
    default:
    cout<<"Invalid Choice. Please enter number between 1 and 3.\n";
    break;
}
  
    if (!exitProgram) {
    char answer;
    cout << "\n\nDo you want to continue? (y/n): ";
    cin >> answer;
    exitProgram = (answer == 'n' || answer == 'N');

    }
  }while(!exitProgram);
return 0;
}