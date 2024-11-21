
#include <iostream>

#include <fstream>

#include <string>

#include <vector>

#include<time.h>


using namespace std;

class details {
  protected:

  string name;
  int age;
  string address;
  string gmail;
  string pass;
  string npass;
  string nname;
  string cpass;

  public:

  // Function to store customer details in a file
  void customer_details() {
    cout << "\n\t\t\t\t\tEnter your name: ";
    cin >> name;

    cout << "\n\t\t\t\t\tEnter your age: ";
    cin >> age;

    cout << "\n\t\t\t\t\tEnter your address: ";
    cin >> address;

    cout << "\n\t\t\t\t\tEnter your mail id: ";
    cin >> gmail;

    string confirm_password;
    while (true) {
      cout << "\n\t\t\t\t\tEnter password: ";
      cin >> pass;

      cout << "\n\t\t\t\t\tConfirm password: ";
      cin >> confirm_password;

      if (pass == confirm_password) {
   	 cout << "\n\n\n\t\t\t\t\tPassword set successfully\n";
   	 break;
      } else {
   	 cout << "\n\n\n\t\t\t\t\tPasswords do not match, please try again.\n";
      }

    }

    ofstream login;
    login.open(name + "_user.txt");
    login << name << "\n" << age << "\n" << address << "\n" << gmail << "\n" << pass << "\n" << endl;
    login.close();
    system("cls");
  }

  void display() {
    ifstream login;
    login.open(name + "_user.txt");
    login >> name >> age >> address >> gmail;
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
   cout << "\t\t\t\t\t\t\t\t\t\t\n";
   cout << "\t\t\t\t\t\t\t\t\t\t\n";
   cout << "\t\t\t\t\t\t\t\t\t\t\n";
   cout << "\t\t\t-------------------------------\n";
    cout << "\n\t\t\t\t\tName: " << name << endl;
    cout << "\n\t\t\t\t\tAge: " << age << endl;
    cout << "\n\t\t\t\t\tAddress: " << address << endl;
    cout << "\n\t\t\t\t\tGmail: " << gmail << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    login.close();
    system("pause");
    system("cls");
  }

  void login() {
    while (true) {
            cout << "\t\t\t\t\t\t\t\t\t\t\n";
            cout << "\t\t\t\t\t\t\t\t\t\t\n";
            cout << "\t\t\t-------------------------------\n";
      cout << "\n\t\t\tEnter user name: ";
      cin >> nname;
      cout << "\n\t\t\tEnter password: ";
      cin >> npass;

        cout << "\t\t\t\t\t\t\t\t\t\t\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
    cout << "\t\t\t-------------------------------\n";

      ifstream login(nname + "_user.txt");

      if (login.fail()) {
   	 cout << "\n\t\t\t\t\tUser not found, enter valid credentials\n";
      } else {
   	 login >> name >> age >> address >> gmail >> pass;

   	 if (npass == pass) {
 		 cout << "\n\t\t\t\t\tLogin successful\n";
 		 break;
   	 } else {
 		 cout << "\n\t\t\t\t\tInvalid password, please try again.\n";
   	 }
      }

      login.close();
    }
    system("pause");
    system("cls");
  }

};

class restaurant: public details {
  public:
  float total;


void sdisp()
      {
 		 int sch,b1,c1,u1;
 		 float rs,tm=0;
 		 bool exit_flag = false,ahead=false;
 		 do {
 		 cout<<"\n\t\t\t1.Buy 1 Get 1 Free\n\t\t\t2.Combo\n\t\t\t3.Upto 50% off\n\t\t\t4.Exit\n\t\t\tEnter your choice : ";
 		 cin>>sch;
 		 if(sch==1)
 		 {
     		 int b[5]={200,350,275,150,350};
     		 cout<<"\n\t\t\t1.Hyderabadi Biryani             2nos  Rs 200\t(1 nos-Rs200)";
     		 cout<<"\n\t\t\t2.Jumbo chicken Tikka Burger     2nos  Rs 350\t(1 nos-Rs350)";
     		 cout<<"\n\t\t\t3.Parottaa chilli chicken  	 2nos    Rs 275\t(1 nos-Rs270)";
     		 cout<<"\n\t\t\t4.Sandwhich            		 2nos    Rs 150\t(1 nos-Rs150)";
     		 cout<<"\n\t\t\t5.Thali                		 2nos    Rs 350\t(1 nos-Rs350)";
     		 cout<<"\n\n\t\t\tEnter your option : ";
     		 cin>>b1;
     		 if (b1 < 1 || b1 > 5)
   		 {
       		 cout << "\n\t\t\tInvalid choice\n";
       		 ahead=false;
       		 continue;
   		 }
   		 ahead=true;
   		 if(ahead)
   		 {
     		 rs=b[b1-1];
     		 tm+=rs;
     		 cout<<"\n\t\t\tAmount is "<<tm<<endl;
   		 }


 		 }
 		 else if(sch==2)
 		 {
     		 int c[5]={220,210,180,190,200};
     		 cout<<"\n\t\t\t1.Pepproni+Farm Fresh  		Rs 220";
     		 cout<<"\n\t\t\t2.Chicken Tikka+Cheesy 		Rs 210";
     		 cout<<"\n\t\t\t3.Veggie magic+Chicken magic    Rs 180";
     		 cout<<"\n\t\t\t4.Paneer Tikka+Mushroom cheese  Rs 190";
     		 cout<<"\n\t\t\t5.ChickenBBq+Panee Tandoori     Rs 200";
     		 cout<<"\n\n\t\t\tEnter your option : ";
     		 cin>>c1;
     		 if (c1 < 1 || c1 > 5)
   		 {
       		 cout << "\n\t\t\tInvalid choice\n";
       		 ahead=false;
       		 continue;
   		 }
   		 ahead=true;
   		 if(ahead)
   		 {
     		 rs=c[c1-1];
     		 tm+=rs;
     		 cout<<"\n\t\t\tAmount is "<<tm<<endl;
   		 }


 		 }
 		 else if (sch==3)
 		 {
     		 int u[5]={120,110,130,100,220};
     		 cout<<"\n\t\t\t1.Peach Raspberry Smoothie      		 Rs 120(Original price=Rs 240)";
       		 cout<<"\n\t\t\t2.Acai Berry Smoothie           		 Rs 110(Original price=Rs 220)";
       		 cout<<"\n\t\t\t3.BBQ Pulled Chicken Sandwich   		 Rs 130(Original price=Rs 260)";
       		 cout<<"\n\t\t\t4.Margherita Pizza              		 Rs 100(Original price=Rs 200)";
       		 cout<<"\n\t\t\t5.Tagliatelle alla Bolognese    		 Rs 220(Original price=Rs 440)";
       		 cout<<"\n\n\t\t\tEnter your option : ";
     		 cin>>u1;
     		 if (u1 < 1 || u1 > 5)
    		 {
       		 cout << "\n\t\t\tInvalid choice\n";
       		 ahead=false;
       		 continue;
    		 }
   		 ahead=true;
   		 if(ahead)
   		 {
     		 rs=u[u1-1];
     		 tm+=rs;
     		 cout<<"\n\t\t\tYour Total Amount is "<<tm<<endl;
   		 }
   		 }
   		 else if(sch==4)
   		 {

       		 exit_flag=true;

   		 }
   		 else
   		 {
       		 cout<<"\n\t\t\tInvalid choice\n";
   		 }
 		 } while (!exit_flag);
 		 if(tm!=0)
 		 {
     		 ahead=true;
 		 }
 		 if(ahead)
   	 {
  		 total=tm;
   		 cout<<"\n\t\t\tSpecial Offer Total is Rs "<<total;
   		 cout<<"\n";
 		 }

      }



    void dispr() {
      int ch, bch, lch, dch, cch, pch;
      system("cls");
      cout << "\n\t\t\t1. Breakfast\n\t\t\t2. Lunch\n\t\t\t3. Dinner\n\t\t\t4. Chinese\n\t\t\t5. Burgers, Pasta & Pizzas\n\t\t\t6. Desserts\n\t\t\tEnter choice: ";
      cin >> ch;
      system("cls");
      switch (ch) {
      case 1:
   	 cout << "\n\t\t\tBREAKFAST\n\t\t\t1.Punjabi rasoi\n\t\t\t2.A2B\n\t\t\t3.Haribhavan\n\t\t\t4.Aryabhavan\n\t\t\t5.The Delhi channa\n\t\t\t6.Udupi sagar\n\t\t\t7.The French House\n\t\t\t8.Britains yum\n\t\t\t9.Waffle Land\n\t\t\t10.Kerala boat\n\t\t\tEnter your choice :";
   	 cin >> bch;
   	 system("cls");
   	 switch (bch) {
   	 case 1:
 		 menu2();
 		 system("pause");
 		 system("cls");

 		 break;
   	 case 2:
 		 menu1();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
   	     system("pause");
   	     system("cls");
 		 menu3();
 		 break;
   	 case 4:
 		 menu4();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu1();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 6:
 		 menu5();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 7:
 		 menu17();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 8:
 		 menu8();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 9:
 		 menu19();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 10:
 		 menu10001()    ;
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 cout << "Invalid choice\n";
 		 system("pause");
 		 system("cls");
 		 break;
   	 }
   	 break;
      case 2:
   	 cout << "\n\t\t\tLUNCH\n\t\t\t1.Hotel Paradise\n\t\t\t2.Indian Kitchen\n\t\t\t3.Chulha Chauki\n\t\t\t4.South Indian Corner\n\t\t\t5.Magic Oven\n\t\t\t6.Punamada Restaurant\n\t\t\t7.Zataar\n\t\t\t8.Smoke house\n\t\t\tEnter your choice :";
   	 cin >> lch;
   	 switch (lch) {
   	 case 1:
 		 menu5();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 2:
 		 menu6();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
 		 menu6();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 4:
 		 menu5();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu3();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 6:
 		 menu10001();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 7:
 		 menu6();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 8:
 		 menu5();
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 cout << "Invalid choice\n";
 		 system("pause");
 		 system("cls");
 		 break;
   	 }
   	 break;

      case 3:
          system("cls");
   	 cout << "\n\t\t\tDINNER\n\t\t\t1.Spice Darbar\n\t\t\t2.Punjabi canteen\n\t\t\t3.Dakshin Palace\n\t\t\t4.American Caraway Kitchen\n\t\t\t5.Truffles\n\t\t\t6.Noodles Bar\n\t\t\t7.Onesta Pizzeria\n\t\t\t8.Imli Cafe\n\t\t\tEnter your choice : ";
   	 cin>>dch;
   	 system("cls");
   	 switch (dch) {
   	 case 1:
 		 menu8();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 2:
 		 menu10();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
 		 menu9();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 4:
 		 menu8();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu9();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 6:
 		 menu10();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 7:
 		 menu17();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 8:
 		 menu9();
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 cout << "Invalid choice\n";
 		 system("pause");
 		 system("cls");
 		 break;
   	 }
   	 break;
      case 4:
          system("cls");
   	 cout << "\n\t\t\tCHINESE\n\t\t\t1.Memories of china\n\t\t\t2.WOW Momos\n\t\t\t3.Mainland China\n\t\t\t4.Noodle bar\n\t\t\t5.Asia Kitchen\n\t\t\tEnter your choice : ";
   	 cin >> cch;
   	 system("cls");
   	 switch (cch) {
   	 case 1:
 		 menu100();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 2:
 		 menu12();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
 		 menu11();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 4:
 		 menu122();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu13();
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 cout << "Invalid choice!";
 		 system("pause");
 		 system("cls");
   	 }
   	 break;
      case 5:
          system("cls");
   	 cout << "\n\t\t\tBURGERS PASTA & PIZZAS\n\t\t\t1.Onesta Pizzeria\n\t\t\t2.Pasta Street\n\t\t\t3.Burger Land\n\t\t\t4.Hidden Fork\n\t\t\t5.Truffles\n\t\t\tEnter your choice : ";
   	 cin >> pch;
   	 system("cls");

   	 switch (pch) {
   	 case 1:
 		 menu14();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 2:
 		 menu15();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
 		 menu16();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 4:
 		 menu17();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu18();
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 std::cout << "Invalid choice. Please try again.\n";
 		 system("pause");
 		 system("cls");
 		 break;
   	 }
   	 break;
   	 system("cls");
      case 6:
   	 cout << "\n\t\t\tDESSERTS\n\t\t\t1.Waffle Land\n\t\t\t2.Ibaco Icecreams\n\t\t\t3.Tiramisu Bakery\n\t\t\t4.Baked Goods Point\n\t\t\t5.Smoothie Land\n\t\t\tEnter your choice : ";
   	 cin >> dch;
   	 system("cls");
   	 switch (dch) {
   	 case 1:
 		 menu19();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 2:
 		 menu20();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 3:
 		 menu21();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 4:
 		 menu22();
 		 system("pause");
 		 system("cls");
 		 break;
   	 case 5:
 		 menu23();
 		 system("pause");
 		 system("cls");
 		 break;
   	 default:
 		 cout << "Invalid choice. Please select again.\n";
 		 system("pause");
 		 system("cls");
 		 break;
   	 }

      }
    }

  void menu1() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }

    // menu items with prices
    vector < string > items =
    {"Masala dosa","Idli with sambar & coconutchutney","Poha","Upma","Aloo paratha",
      "Chole bhature","Poori bhaji","Medu vada","Appam","Uttapam"};
    vector < float > prices =
    {
    150,200,190,120,150,
    260,300,260,220,260
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
      cout << "\t\t\tBreakfast Menu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<< i + 1 << ". " << items[i]<<"  "<< "Rs:" << prices[i] << endl;
      }
      while (true) {

      int choice;
      cout << "Enter your choice (1-10, 0 to exit): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "Invalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\n\t\t\t"<<"Items in your cart:" << endl;
    for (string item: cart) {
      cout << "\n\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu2() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // menu items with prices
    vector < string > items = {
      "Aloo puri","Suji ka halwa","Paneer bhurji","Rava dosa",
      "Sabzi cheela","Methi thepla","Idiyappam","Batata poha",
      "Dosai avial"
    };
    vector < float > prices = {
      100,200,190,200,230,190,300,200,260
    };

    vector < string > cart; // items selected by the user
    system("cls");

    // display menu and get user's choices

      cout << "\n\tMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<< i + 1 << "." << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }
    while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout << "       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\n\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file
  }

  void menu3() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    vector < string > items = {
      "Dhokla","Mysore masala dosa","Vada pav",
      "Misal pav","Vegetable or paneersandwich","Upma","Paratha with yogurt pickle",
      "Bread pakora","Chana dal kachori","Mughlai paratha"
    };
    vector < float > prices = {
      140,190,120,200,260,
      170,200,110,300,200
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << "." << items[i] <<"  "<<" Rs " << prices[i] << endl;
      }
     while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu4() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Bread pakora","Chana dal kachori",
      "Sabudana khichdi","Mughlai paratha"
    };
    vector < float > prices = {
      190,200,260,300
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<< i + 1 << ". " << items[i] <<"  "<<" Rs " << prices[i] << endl;
      }
      while (true) {

      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost

      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout <<"\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu5() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Butter Chicken","Tandoori Chicken","Chicken Tikka Masala","Chicken Biryani","Pongal","Regular meals",
      "Mini meals","Sambar","Rasam","Rajma Chawal"
    };
    vector < float > prices = {
      200,260,200,280,180,200,90,190,160,260
    };

    vector < string > cart; // items selected by the user

    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<" Rs " << prices[i] << endl;
      }
    while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
    cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu6() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Meals","Chicken biriyani","Mutton Biriyani","Egg Biriyani",
      "Veg Biriyani","Dal Tadka","Palak Paneer","Bhindi Masala",
      "Malai Kofta","Shahi Paneer","Chicken Curry"
    };
    vector < float > prices = {
      190,240,200,250,200,280,190,200,300,200,300
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<" Rs " << prices[i] << endl;
      }
        while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu7() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    vector < string > items = {
      "Regular meals","Mini meals","Sambar","Rasam","Rajma Chawal","Meals",
      "Chicken biriyani","Mutton Biriyani","Egg Biriyani","Veg Biriyani"
    };
    vector < int > prices = {
      200,150,170,170,200,150,200,300,200,230
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<< " Rs " << prices[i] << endl;
      }
         while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu8() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Grilled Chicken","Beef Stroganoff","Baked Salmon","Vegetarian Lasagna","Pork Tenderloin","Shrimp Scampi",
      "BBQ Ribs","Tofu Stir Fry","Lamb Chops","Steak with Garlic Butter"
    };
    vector < float > prices = {
      200,210,300,190,200,180,200,300,200,280
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<< " Rs " << prices[i] << endl;
      }
        while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu9() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Chicken Curry","Lamb Rogan Josh","Vegetable Korma","Palak Paneer",
      "Chana Masala","Dal Makhani","Butter Chicken","Naan","Garlic Naan","Roti","Paratha","Plain Basmati Rice","Saffron Rice","Vegetable Biryani","Chicken Biryani"

    };
    vector < float > prices = {
      130,100,200,190,200,230,190,300,200,260,300,250,260,190,400
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }
        while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu10() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
      cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    }
    vector < string > items = {
      "Butter Chicken","Palak Paneer","Chicken Tikka Masala","Chana Masala","Lamb Rogan Josh","Aloo Gobi","Dal Makhani","Tandoori Chicken","Vegetable Biryani","Garlic Naan"
    };
    vector < float > prices = {
      200,290,200,250,200,230,300,200,200,50
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }
        while (true) {
      int choice;
      cout << "\nEnter your choice (1-10,0 to Bill): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu10001() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
      cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    }
    vector < string > items = {
      "Appam and chicken stew","Puttu and Kadala Curry","Idiyappam green peascurry","Poori and Masala curry","Malabar Parotta","Thalassery Biriyani","Kappa and Meen Curry","Fish Molee","Kerala-style Prawn Curry","Pazham Pori",
    };
    vector < float > prices = {
      200,290,200,250,200,230,300,200,200,50
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] << "  "<<"Rs:" << prices[i] << endl;
      }
        while (true) {
      int choice;
      cout << "\nEnter your choice (1-10,0 to Bill): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<< items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu100() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    vector < string > items = {
      "Chicken corn soup","Vegetable soup","Dumplings","Crab Rangoon","Spring Rolls","Kung Pao chicken","Sweet and sour chicken","Vegetable stir-fry",
      "Tofu stir-fry","Chow mein (chicken shrimp vegetable)","Singapore noodles","Fried noodles","Steamed vegetables"
    };
    vector < float > prices = {
      140,170,260,200,90,290,260,200,210,200,230,240,300
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices

      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  " <<"Rs:" << prices[i] << endl;
      }
    while (true) {
      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu11() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }

    vector < string > items = {
      "Lo mein (chicken, pork, shrimp, or vegetable)","Fried chicken wings","Salt and pepper calamari","Chicken corn soup","Seafood soup","Orange chicken","Vegetable fried rice","Steamed or fried dumplings","Chinese-style broccoli"
    };
    vector < float > prices = {
      190,270,200,200,260,200,240,300,200
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to Bill): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"        "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu12() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Steamed momos","Fried momos","Tandoori momos","Cheese momos","Paneer momos","Chicken momos","Mutton momos","Egg momos","Fried rice","Hakka noodles","Chilli garlic noodles","Chicken wings",
"Chicken popcorn","Caramelized apple momos","Mango momos","Soft drinks","Lemon iced tea","Cold coffee"
    };

    vector < float > prices = {
      190,100,200,140,200,240,300,210,260,300,200,200,260,270,300,90,90,90
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu122() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Ramen (chicken)","Ramen (pork)","Ramen (beef)","Ramen (vegetarian)",
      "Udon (chicken)","Udon (pork)","Udon (beef)","Udon (vegetarian)","Pad Thai (chicken)","Pad Thai (shrimp)","Pad Thai (vegetarian)","Lo mein (chicken)","Lo mein (pork)","Lo mein (beef)","Lo mein (vegetarian)",
      "Chow mein (chicken)","Chow mein (pork)","Chow mein (shrimp)","Chow mein (vegetarian)","Soba (chicken)","Soba (pork)","Soba (beef)","Soba (vegetarian)","Pho (beef)","Pho (vegetarian)","Dan dan noodles (pork)","Dan dan noodles (vegetarian)","Singapore noodles (chicken)",
      "Singapore noodles (shrimp)","Singapore noodles (vegetarian)","Tom yum noodles (chicken)","Tom yum noodles (shrimp)","Tom yum noodles (vegetarian)","Bubble tea (various flavors)"
    };

    vector < float > prices = {
      190,190,190,190,260,260,260,260,270,270,270,300,300,300,300,200,200,200,200,300,300,300,300,260,260,
      200,200,270,270,270,290,290,290,140
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<< "Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu13() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Chicken curry","Beef with broccoli","Shrimp fried rice","Pad see ew","Green curry","Red curry","Massaman curry","Tom kha gai","Tom yum goong","Phat thai","Chicken with cashew nuts"
    };
    vector < float > prices = {
      190,200,240,200,250,200,260,290,300,200,260
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout << "       "<<i + 1 << ". " << items[i] <<"  "<< "Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<< items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu14() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Margherita","Marinara","Quattro Formaggi","Capricciosa","Diavola","Vegetariana","Pollo Tikka","Pepperoni","BBQ Chicken","Hawaiian"
    };
    vector < float > prices = {
      190,300,200,280,200,200,300,260,200,260
    };

    vector < string > cart; // items selected by the user

    // display menu and get user's choices
    while (true) {
      cout << "Menu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu15() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Penne Arrabbiata","Spaghetti Carbonara","Fettuccine Alfredo","Linguine Pesto","Ravioli Ricottae Spinaci","Lasagne alla Bolognese","Gnocchi alla Sorrentina","Tagliatelle alla Bolognese","Farfalle Salmone","Rigatoni alla Norma"
    };
    vector < float > prices = {
      190,200,250,260,270,260,300,200,300,300
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << "." << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu16() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Classic Burger","Bacon Cheeseburger","Veggie Burger","Chicken Burger","BBQ Burger","Mushroom Swiss Burger","Jalapeno Burger","Double Cheeseburger","Turkey Burger","Fish Burger"
    };
    vector < float > prices = {
      190,200,240,220,260,230,250,280,260,290
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu17() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Grilled Cheese Sandwich","Bacon Ranch Burger","Buffalo Chicken Wrap","Caesar Salad",
      "Loaded Nachos","Fish and Chips","BBQ Pulled Chicken Sandwich","Margherita Pizza","Philly Cheesesteak","Greek Salad"
    };
    vector < float > prices = {
      170,200,270,300,200,260,300,280,300,200
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "Menu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu18() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Caesar Salad","Greek Salad","Caprese Salad","Margherita Pizza","Pepperoni Pizza","Mushroom Risotto","Spinach & Ricotta Ravioli","Grilled Chicken Sandwich","Cheeseburger","Truffle Fries"
    };
    vector < float > prices = {
      190,200,300,200,280,200,200,260,200,300
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu19() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Classic Waffle","Belgian Waffle","Blueberry Waffle","Chocolate Chip Waffle","Strawberry Waffle",
      "Banana Nutella Waffle","Cinnamon Roll Waffle","Bacon and Egg Waffle","Sausage and Egg Waffle","Breakfast Waffle Sandwich"
    };
    vector < float > prices = {
      150,210,200,300,260,200,300,200,260,200
    };

    vector < string > cart; // items selected by the user

    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<<"Rs: " << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu20() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Chocolate Fudge Brownie","Belgian Dark Chocolate","Mango Sorbet","Strawberry Cheesecake",
      "Caramel Pecan Praline","Roasted Almond Mocha","Mint Chocolate Chip","Butterscotch Mousse","Hazelnut Truffle","Blueberry Cheesecake"
    };
    vector < float > prices = {
      140,200,210,200,90,230,260,200,260,300
    };

    vector < string > cart; // items selected by the user

    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] << "  "<<"Rs: " << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

  void menu21() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Classic Tiramisu","Chocolate Mousse Cake","Red Velvet Cupcake","Blueberry Cheesecake","Lemon Tart","Chocolate Chip Cookies","Croissants","Cinnamon Rolls","Apple Strudel","Cream Puffs"
    };
    vector < float > prices = {
      190,290,200,190,300,260,240,200,300,200
    };

    vector < string > cart; // items selected by the user

    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<< i + 1 << ". " << items[i] << " Rs: " << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit): \n";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu22() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Croissants","Bagels","Muffins","Scones","Cinnamon Rolls","Quiche","Brownies","Cookies","Cupcakes","Banana Bread"
    };
    vector < float > prices = {
      180,180,150,200,200,260,300,260,210,200
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:\n" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       " <<i + 1 << ". " << items[i] << "  "<< "Rs: " << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit):\n ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }
  void menu23() {
    ofstream outFile(nname + "_user.txt", ios::app); // open file for appending
    if (!outFile) { // check if file opening failed
      cout << "Error opening file" << endl;
      return;
    }
    vector < string > items = {
      "Strawberry Banana Smoothie","Blueberry Pomegranate Smoothie","Mango Pineapple Smoothie",
      "Peach Raspberry Smoothie","Acai Berry Smoothie",
      "Green Kale Smoothie","Peanut Butter Banana Smoothie",
      "Chocolate Peanut Butter Smoothie","Vanilla Almond Smoothie",
      "Coffee Caramel Smoothie"
    };
    vector < float > prices = {
      190,200,240,260,200,260,200,190,200,260
    };

    vector < string > cart; // items selected by the user


    // display menu and get user's choices
    while (true) {
      cout << "\nMenu List:" << endl;
      for (int i = 0; i < items.size(); i++) {
   	 cout <<"       "<<i + 1 << ". " << items[i] <<"  "<< "Rs:" << prices[i] << endl;
      }

      int choice;
      cout << "\nEnter your choice (1-10, 0 to exit):\n ";
      cin >> choice;

      if (choice == 0) {
   	 break; // exit loop if user chooses 0
      } else if (choice < 1 || choice > items.size()) {
   	 cout << "\nInvalid choice. Please try again." << endl;
   	 continue; // repeat loop if user chooses an invalid number
      }

      cart.push_back(items[choice - 1]); // add selected item to cart
      total += prices[choice - 1]; // add item price to total cost
      cout <<"       "<<items[choice - 1] << " added to cart." << endl;
    }

    // display selected items and total cost
    cout << "\n\t\t\tItems in your cart:" << endl;
    for (string item: cart) {
      cout << "\t\t\t- " << item << endl;
    }
    cout << "\n\t\t\tTotal amount to be paid: Rs " << total << endl;

    // write selected items to file
    for (string item: cart) {
      outFile << item << endl;
    }

    outFile.close(); // close file

  }

};

class Bank:public restaurant
{
private:
    int generateOTP()
    {
   	 srand(time(NULL));
   	 int otp = rand() % 10000;
   	 cout<<"\n\t\t\tYour Otp is"<<otp<<endl;
   	 return otp;
    }
protected:

    string name;
    string number;
    string expiry;
    string cid;
    string ipin;
	float gst=12.75;
	float dpart=30.23;

public:

    void enterDetails() {
   	 cout << "\n\n\t\t\tEnter card details:\n";
   	 cout << "\n\t\t\tName: ";
   	 cin >> name;
   	 cout << "\n\t\t\tNumber: ";
   	 cin >> number;
   	 cout << "\n\t\t\tExpiry: ";
   	 cin >> expiry;
    }

    void payDebitCard() {
cout << "\t\t\t-------------------------------\n";
    	cout<<"\n\t\t\tYour Bill\n";
  	 	cout<<"\n\t\t\tTotal Amount for food :"<<total<<endl;
  	 	cout<<"\n\t\t\tGST :"<<gst<<endl;
  	 	cout<<"\n\t\t\tDelivery partner fee :"<<dpart<<endl;
  	 	cout<<"\n\t\t\tTotal amount to be paid :"<<total+gst+dpart<<endl;
cout << "\t\t\t-------------------------------\n";
   	 enterDetails();
   	 cout << "\n\t\t\tPlease wait while we generate an OTP for your transaction...\n";
   	 int otp = generateOTP();
   	 cout << "\n\t\t\tOTP sent to your registered mobile number. Enter OTP to complete transaction: \n";
   	 int userOTP;
   	 cin >> userOTP;
   	 if (userOTP == otp) {
   		 cout << "\n\t\t\tTransaction successful!" <<endl << "\n\t\t\tPayed via debit card " << number << "\n";
   	 } else {
   		 cout << "\n\t\t\tIncorrect OTP. Transaction failed.\n";
   	 }
    }

    void payCreditCard() {
cout << "\t\t\t-------------------------------\n";
  	 	cout<<"\n\n\t\t\tYour Bill\n";
  	 	cout<<"\n\t\t\tTotal Amount for food :"<<total<<endl;
  	 	cout<<"\n\t\t\tGST :"<<gst<<endl;
  	 	cout<<"\n\t\t\tDelivery partner fee :"<<dpart<<endl;
  	 	cout<<"\n\t\t\tTotal amount to be paid :"<<total+gst+dpart<<endl;
cout << "\t\t\t-------------------------------\n";
   	 enterDetails();
   	 cout << "\n\t\t\tPlease wait while we generate an OTP for your transaction...\n";
   	 int otp = generateOTP();
   	 cout << "\n\t\t\tOTP sent to your registered mobile number. Enter OTP to complete transaction: \n";
   	 int userOTP;
   	 cin >> userOTP;
   	 if (userOTP == otp) {
   		 cout << "\n\t\t\tTransaction successful! " <<endl<< "\n\t\t\tPayed via credit card " << number << "\n";
   	 } else {
   		 cout << "\n\t\t\tIncorrect OTP. Transaction failed.\n";
   	 }
    }

    void payNetbanking() {
cout << "\t\t\t-------------------------------\n";
    	cout<<"\n\n\t\t\tYour Bill\n";
  	 	cout<<"\n\t\t\tTotal Amount for food :"<<total<<endl;
  	 	cout<<"\n\t\t\tGST :"<<gst<<endl;
  	 	cout<<"\n\t\t\tDelivery partner fee :"<<dpart<<endl;
  	 	cout<<"\n\t\t\tTotal amount to be paid :"<<total+gst+dpart<<endl;
cout << "\t\t\t-------------------------------\n";
  	 	cout<<"\n\t\t\tEnter customer ID\n";
  	 	cin>>cid;
  	 	cout<<"\n\t\t\tEnter IPIN\n";
  	 	cin>>ipin;

  	 	cout << "\n\t\t\tPlease wait while we generate an OTP for your transaction...\n";
   	 int otp = generateOTP();
   	 cout << "\n\t\t\tOTP sent to your registered mobile number. Enter OTP to complete transaction: \n";
   	 int userOTP;
   	 cin >> userOTP;
   	 if (userOTP == otp) {
   		 cout << "\n\t\t\tTransaction successful! " <<endl<< "\n\t\t\tPayed via Netbanking " << number << "\n";
   	 } else {
   		 cout << "\n\t\t\tIncorrect OTP. Transaction failed.\n";
   	 }

    }

    void payCash() {
        cout << "\t\t\t-------------------------------\n";
    	cout<<"\n\n\t\t\tYour Bill\n";
  	 	cout<<"\n\t\t\tTotal Amount for food :"<<total<<endl;
  	 	cout<<"\n\t\t\tGST :"<<gst<<endl;
  	 	cout<<"\n\t\t\tDelivery partner fee :"<<dpart<<endl;
  	 	cout<<"\n\t\t\tTotal amount to be paid :"<<total+gst+dpart<<endl;

   	 cout << "\n\t\t\tDelivery partner will collect cash from you after delivering\n";
   	 cout << "\t\t\t-------------------------------\n";
    }
};

int main()
{
    system("COLOR FC");
    int choice, och;
  char ans;
  Bank d;
  cout << "                           \t\t\tWELCOME TO FOODIE APP" << endl;
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
  cout  << endl << "\t\t\t1.LOGIN" << endl << "\t\t\t2.SIGN UP\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
  cout<<"\t\t\tENTER YOUR CHOICE : ";
  cin >> choice;
  if (choice == 2)
    {
    system("cls");
    d.customer_details();
    d.display();
    cout << "\n\t\t\tDo you want to login?\n\t\t\tEnter yes(y) or No(n)\n : ";
    cin >> ans;
    if (ans == 'y') {
      d.login();
      cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
      cout << "\n\t\t\tDo you want to \n\t\t\t1.Order by food\n\t\t\t2.Explore Today's Specials\n";
      cout<<"\n\t\t\tEnter your choice : ";
      cin>>och;
      cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
      switch(och)
    {
    	case 1:
    	d.dispr();
    	break;
    	case 2:
    	d.sdisp();
    	break;
    	default:
            cout<<"\n\t\t\tInvalid payment option selected\n";
    }

    int paymentOption;
    cout << "\n\n\t\t\tChoose payment option:\n";
    cout << "\n\t\t\t1. Debit card\n";
    cout << "\n\t\t\t2. Credit card\n";
    cout << "\n\t\t\t3. Netbanking\n";
    cout << "\n\t\t\t4. Cash\n";
    cin >> paymentOption;

    switch(paymentOption) {
   	 case 1:
   		 d.payDebitCard();
   		 break;
   	 case 2:
   		 d.payCreditCard();
   		 break;
   	 case 3:
   		 d.payNetbanking();
   		 break;
   	 case 4:
   		 d.payCash();
   		 break;

   	 default:
   		 cout << "\n\t\t\tInvalid payment option selected\n";
    }

    }
    else
    {
      cout << "\n\n\t\t\t\tThank you for using app\n";
      exit(0);
    }

  }

  if (choice == 1)
  {
    system("cls");
    d.login();
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
    cout << "\n\t\t\tDo you want to \n\t\t\t1.Order by food\n\t\t\t2.Explore Today's Specials\n";
    cout<<"\n\t\t\tEnter your choice : ";
      cin>>och;
    cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t\t\t\t\t\t\t\t\n";
  cout << "\t\t\t-------------------------------\n";
  system("pause");
    switch(och)
    {
    	case 1:
    	d.dispr();
    	break;
    	case 2:
    	d.sdisp();
    	break;
    }

int paymentOption;
    cout << "\n\n\t\t\tChoose payment option:\n";
    cout << "\n\t\t\t1. Debit card\n";
    cout << "\n\t\t\t2. Credit card\n";
    cout << "\n\t\t\t3. Netbanking\n";
    cout << "\n\t\t\t4. Cash\n";
    cin >> paymentOption;

    switch(paymentOption) {
   	 case 1:
   		 d.payDebitCard();
   		 break;
   	 case 2:
   		 d.payCreditCard();
   		 break;
   	 case 3:
   		 d.payNetbanking();
   		 break;
   	 case 4:
   		 d.payCash();
   		 break;

   	 default:
   		 cout << "\n\t\t\tInvalid payment option selected\n";
    }

  }

  return 0;
}








