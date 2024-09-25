#include <iostream>
#include <string>
using namespace std;
struct Customer 
{
string Customer_Name;
string contact_number;
string email;
};

bool seats[9][8] = {false};

void displaySeatingArrangement()

{
    cout << "****************************** Seating Arrangement ******************************" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            if (seats[i][j]) {
                cout << " X  ";

            } else {
                cout << " O  ";
            }
        }
        cout << endl;
    }
    cout << "*********************************************************************************" << endl;
}
void bookTicket() 
{
    int price = 0;
    int tickets;
    
    cout<<"                                  ............... BOOKING TICKETS ...............\n";
do {
        cout << "\n How many seats do you want to book: ";
        cin >> tickets;

        if (tickets <= 0)
 {
            cout << "Please select a number greater than 0!\n";
        }
    } while (tickets <= 0); 
bool sameMovie = true;
if (sameMovie)
{
    int movie;
    int movieChoice;
do{ 
do{
    cout << "Select the movie industry:\n";
    cout << "1. Bollywood\n";
    cout << "2. Hollywood\n";
    cout<<"Choose the industry: ";
    cin >> movie;

    if (movie == 1)
    {
        cout << "1. Pathan\n";
        cout << "2. Raees\n";
        cout << "3. Farzi\n";
        cout << "4. 3 idiots\n";
    }
    else if (movie == 2)
    {
        cout << "1. Guardians of the Galaxy vol 3.\n";
        cout << "2. Ant-Man And The WASP Quantumania\n";
        cout << "3. Harry Potter and the Cursed Child\n";
        cout << "4. Pirates of the Caribbean: The Untold Story\n";
    }
    else
    {
        cout << "Invalid option!\n";
    }
}while (movie != 1 && movie != 2);
    cout << "Choose a movie: ";
    cin >> movieChoice;

    if (movieChoice < 1 || movieChoice > 4)
    {
        cout << "Invalid movie choice! Returning to the Industry Selection.\n";
    }
}while(movieChoice != 1 && movieChoice != 2 && movieChoice != 3 && movieChoice != 4 );
    int timing;
do{
    cout << "Available timings for the movie are as follows:\n";
    cout << "1. 9:00 am - 11:00 am\n";
    cout << "2. 11:30 am - 1:30 pm\n";
    cout << "3. 2:00 pm - 4:00 pm\n";
    cout << "4. 4:30 pm - 6:30 pm\n";
    cout << "5. 7:00 pm - 9:00 pm\n";
    cout << "6. 9:30 pm - 11:30 pm\n";
    cout << "Choose Time: ";
    cin >> timing;

    if (timing < 1 || timing > 6)
    {
        cout << "Invalid timing selection! Select Valid Timings.\n";
        cout<<"************************************************************************************\n";
    }
}while(timing != 1 && timing != 2 && timing != 3 && timing != 4 && timing != 5 && timing != 6);
    int format;
do{
    cout << "Select the movie format:\n";
    cout << "1. 3D\n";
    cout << "2. 2D\n";
    cout <<"Choose a movie format: ";
    cin >> format;

    if (format < 1 || format > 2)
    {
        cout << "Invalid format selection! Select the Valid Option.\n";
        cout<<"************************************************************************************\n";
    }
}while(format !=1 && format !=2);
    if (format == 1)
{
    price = 1000;
    char glassesChoice;
    bool validChoice = false;

    while (!validChoice)
    {
        cout << "Would you like to buy 3D glasses? [Y/N]\n";
        cout << "Enter your choice: ";
        cin >> glassesChoice;

        if (glassesChoice == 'Y' || glassesChoice == 'y')
        {
            cout << "Great! You have chosen 3D glasses.\n";
            cout << "The price of 3D glasses is 450rs.\n";
            price += 450;
            validChoice = true; 
        }
        else if (glassesChoice == 'N' || glassesChoice == 'n')
        {
            cout << "Okay, no problem.\n";
            validChoice = true; 
        }
        else
        {
            cout << "Invalid choice. Please select [Y/N].\n";
        }
    }
}
else if (format == 2)
{
    price = 800;
}
}
for (int i = 0; i < tickets; i++) {
displaySeatingArrangement();   
    cout << "Customer " << i + 1 << ", enter the row number (1-9): ";
    int row;
    cin >> row;

    cout << "Customer " << i + 1 << ", enter the column number (1-8): ";
    int col;
    cin >> col;

    if (row >= 1 && row <= 9 && col >= 1 && col <= 8) {
        if (seats[row - 1][col - 1] == false) {
            seats[row - 1][col - 1] = true;
            cout << "Seat booked for Customer " << i + 1 << "." << endl;
        } else {
            cout << "Seat is already booked!" << endl;
            i--; 
        }
    } else {
        cout << "Invalid row or column!" << endl;
        i--;  
    }
}
displaySeatingArrangement(); 
void customerbillingdetail();
{
    Customer info;
    getline (cin,info.Customer_Name);
    cout <<" Enter Your Name:";
    getline (cin,info.Customer_Name);
    cout <<" Enter Your Phone Number: ";
    getline (cin,info.contact_number);
    cout <<" Enter Your E-MAIL Address: ";
    getline (cin,info.email);
    cout <<"************************************************************************************************************************\n";
    cout <<"\n                                       | Your Name is "<<info.Customer_Name;
    cout <<"\n                                       | Your contact number is "<<info.contact_number;
    cout <<"\n                                       | Your email Address is "<<info.email;
    cout << "\n                                      | Total Amount to be paid is " << price*tickets << "rs.\n";
}
    }
void readReviews() 
{
    cout<<"                                  ............... READING REVIEWS ...............\n";
    cout << " Select the movie industry:\n ";
    cout << "1. Bollywood\n ";
    cout << "2. Hollywood\n ";

    int industry;
    cin >> industry;

    if (industry == 1)
    {
        cout << " Select the Bollywood movie you want to read reviews for:\n ";
        cout << "1. Pathan\n ";
        cout << "2. Raees\n ";
        cout << "3. Farzi \n ";
        cout << "4. 3 idiots \n ";

        int movie;
        cin >> movie;

        switch (movie)
        {
            case 1:
                cout <<"************************************************************************************************************************\n";
                cout << " Pathan reviews:\n ";
                cout << "Customer 1:Good Movie! Must Watch\n ";
                cout << "Customer 2:Over all Experience was good\n ";
                cout << "Customer 3:It was worth the amount i spent will watch again soon\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 2:
                cout <<"************************************************************************************************************************\n";
                cout << " Raees reviews:\n ";
                cout << "Customer 1:SRK is GOAT! Nice actor.\n ";
                cout << "Customer 2:Everything was just great.\n ";
                cout << "Customer 3:it is overated movie 3 out 5.\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 3:
                cout <<"************************************************************************************************************************\n";
                cout << " Farzi reviews:\n ";
                cout << "Customer 1:Very informative Movie\n ";
                cout << "Customer 2:Every Senario of the movie was so real\n ";
                cout << "Customer 3:It was worth the amount i spent will watch again soon\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 4:
                cout <<"************************************************************************************************************************\n";
                cout << " 3 idiots reviews:\n ";
                cout << "Customer 1:Even after 14 years this movie is still GOAT\n ";
                cout << "Customer 2:Best movie released in bollywood\n ";
                cout << "Customer 3:Awesome Movie\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            default:
                cout << " Invalid movie selection!\n ";
                break;
        }
    }
    else if (industry == 2)
    {
        cout << " Select the Hollywood movie you want to read reviews for:\n ";
        cout << "1. Guardians of the Galaxy vol 3.\n ";
        cout << "2. Ant-Man And The WASP Quantumania\n ";
        cout << "3. Harry Potter and the Cursed Child\n ";
        cout << "4. Pirates of the Caribbean: The Untold Story\n ";

        int movie;
        cin >> movie;

        switch (movie)
        {
            case 1:
                cout <<"************************************************************************************************************************\n";
                cout << " Guardians of the Galaxy vol 3. reviews:\n ";
                cout << "Customer 1:Good Movie! Must Watch\n ";
                cout << "Customer 2:I am very sad this is the last GoG movie\n ";
                cout << "Customer 3:Best Movie of Marvel in 2023.\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 2:
                cout <<"************************************************************************************************************************\n";
                cout << " Ant-Man And The WASP Quantumania reviews:\n ";
                cout << "Customer 1:Kang entry was lit\n";
                cout << "Customer 2:Everything was just great.\n";
                cout << "Customer 3:I expected more but it was okay \n";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 3:
                cout <<"************************************************************************************************************************\n";
                cout << "Harry Potter and the Cursed Child reviews:\n ";
                cout<<"Customer 1:Magic is Everything 5/5\n";
                cout<<"Customer 2:GFX and VFX were best \n";
                cout<<"Customer 3:It was worth the amount i spent will watch again soon\n";
                    cout <<"************************************************************************************************************************\n";
                break;
            case 4:
                cout <<"************************************************************************************************************************\n";
                cout << "Pirates of the Caribbean: The Untold Story reviews:\n ";
                cout <<" Customer 1:Johnny Depp Acting is Amazing\n ";
                cout <<" Customer 2:Savvyy Priate will watch it again soon\n ";
                cout <<" Customer 3:Perfect Movie\n ";
                    cout <<"************************************************************************************************************************\n";
                break;
            default:
                cout << "Invalid movie selection!\n ";
                break;
        }
    }
    else
    {
        cout << "Invalid industry selection!\n ";
    }
}

void displayMovieList()
{
    int list;
    bool returnToMainMenu = false;

    do
    {
        cout << "You want to see the price list of:\n ";
        cout << "1. Bollywood Movies\n ";
        cout << "2. Hollywood Movies\n ";
        cout << "3. Return To Main Menu\n ";
        cin >> list;

        switch (list)
        {
            case 1:
            cout << "*********************************************************************************************************************************************************************\n";
                cout << " Pathan\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "Raees\n";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "Farzi\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "3 Idiots\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                int buttonn;
                cout << "*********************************************************************************************************************************************************************\n";
                cout<<"Press Any number to go back to the price list menu\n";
                cin>>buttonn;
                break;
            case 2:
            cout << "*********************************************************************************************************************************************************************\n";
                cout << " Guardians of the Galaxy vol 3.\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "Ant-Man And The WASP Quantumania\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "Harry Potter and the Cursed Child\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "Pirates of the Caribbean: The Untold Story\n ";
                cout << "Price: \n ";
                cout << "3D: 1000 RS   2D: 800 RS \n ";
                cout << "*********************************************************************************************************************************************************************\n";
                int button;
                cout<<"Press Any number to go back to the price list menu\n";
                cin>>button;
                break;
            case 3:
                cout << " Returning to the Main Menu...\n ";
                returnToMainMenu = true;
                break;
            default:
                cout << " Invalid choice. Please enter a number between 1 and 3.\n ";
                break;
        }

    } while (!returnToMainMenu);

    cout << "*********************************************************************************************************************************************************************\n";
}

int main()
{
    Customer info;
    int choice;

    do
    {
        bool returnToMainMenu = false;
        bool ticketbooked=false;
        cout << "                                -: Welcome to Movie Ticket Booking System :-\n";
        cout << " 1. Book Tickets\n";
        cout << " 2. Read Movie Reviews\n";
        cout << " 3. Movies Price list\n";
        cout << " 4. Exit\n";
        cout << " Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                bookTicket();
    char payment;
    cout << "Would you like to proceed [Y/N]\n";
    cout<<"Choose an option: ";
    cin >> payment;

    if (payment == 'y' || payment == 'Y') {
        cout << "Enjoy Your Movie Sir!!\n";
    } else {
        cout << "Returning to the Main Menu...\n";
        returnToMainMenu = true;
    }
    break;
                case 2:
                readReviews();
                break;
                case 3:
                displayMovieList();
                break;
                case 4:
                cout << "Thank you for using the Movie Ticket Booking System!\n";
                break;
                default:
                cout << "Invalid choice! Please try again.\n";
                break;
}
        }
    while (choice != 4);

return 0;
}
