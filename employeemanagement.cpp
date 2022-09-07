///PROGRAM FOR EMPLOYEE MANAGEMENT SYSTEM.
#include <iostream>
#include <string.h>
#define max 30
using namespace std;
struct employee {
    string name;
    long int code;
    string designation;
    int exp;
    int age;
};

int num;
void showMenu();
employee emp[max], tempemp[max],sortemp[max], sortemp1[max];
void build()
{
    cout<<"BUILD THE TABLE.\n";
    cout<<"Maximum Entries can be "<<max<<" only\n";

    cout<< "Enter the number of Entries required : ";
    cin >> num;

    if (num > 30) {
        cout << "INVALID INPUT\n";
        num=30;
        cout<< "So you choosing no. of Entries to be maximum "<<num<<endl;
    }
    cout << "Enter the following data :\n";

    for (int i = 0; i <num; i++) {
        cout<<"Name : ";
        cin>>emp[i].name;

        cout << "Employee ID : ";
        cin >> emp[i].code;

        cout << "Designation : ";
        cin >> emp[i].designation;

        cout << "Experience : ";
        cin >> emp[i].exp;

        cout << "Age : ";
        cin >> emp[i].age;
    }

    showMenu();
}
void inputDetails()
{
    if (num < max) {
        int i = num;
        num++;
        cout << "Enter the information "
             << "of the Employee\n";
        cout << "Name : ";
        cin >> emp[i].name;

        cout << "Employee ID : ";
        cin >> emp[i].code;

        cout << "Designation : ";
        cin >> emp[i].designation;

        cout << "Experience : ";
        cin >> emp[i].exp;

        cout << "Age : ";
        cin >> emp[i].age;
    }
    else {
        cout << "Employee Table Full\n";
    }

    showMenu();
}
void deleteIndex(int i)
{
    for (int j=i;j<num - 1; j++){
        emp[j].name = emp[j + 1].name;
        emp[j].code = emp[j + 1].code;
        emp[j].designation= emp[j + 1].designation;
        emp[j].exp = emp[j + 1].exp;
        emp[j].age = emp[j + 1].age;
    }
    return;
}
void deleteRecord()
{
    cout << "Enter the Employee ID "
         << "to Delete Record : ";
  int code;
  cin >> code;
    for (int i = 0; i < num; i++) {
        if (emp[i].code == code) {
            deleteIndex(i);
            num--;
            break;
        }
    }
    cout<<"RECORD DELETED SUCCESSFULLY\n";
    showMenu();
}
  void searchRecord()
{
    cout<<"Enter the Employee"
         <<" ID to Search Record : ";

    int code;
    cin>>code;

    for (int i=0;i<num; i++){
        if (emp[i].code==code) {
cout << "Name : "<< emp[i].name << "\n";
cout << "Employee ID : "<<emp[i].code << "\n";
cout << "Designation : "<<emp[i].designation << "\n";
cout << "Experience : "<<emp[i].exp << "\n";
cout << "Age : "<<emp[i].age << "\n";
break;
        }
        else{

        }
    }
    showMenu();
}
void showMenu()
{

   cout<<" -----------------------------ABC COMPANY EMPLOYEE MANAGEMENT SYSTEM----------------------------- \n\n";

    cout << "HERE ARE THE FOLLOWING OPTIONS....\n";
    cout << "PRESS 1:Build Table         \n";
    cout << "PRESS 2:Insert New Entry    \n";
    cout << "PRESS 3:Delete Entry        \n";
    cout << "PRESS 4:Search a Record     \n";
    cout << "PRESS 5:Exit                \n";

    int option;
    cin >> option;

    if (option==1) {
        build();
    }
    else if (option==2) {
        inputDetails();
    }
    else if (option==3) {
        deleteRecord();
    }
    else if (option==4) {
        searchRecord();
    }
    else if (option==5) {
        return;
    }
    else {
        cout <<"Invalid option!\n"
    << "Expected Options"
             << " are 1/2/3/4/5";
        showMenu();
    }
}
int main()
{
    char username[20];
    char leftStr[] = "user";
    char rightStr[] = "user";
    int res = strcmp(leftStr, rightStr);
    int password, choice;
    char ar[] = {'u', 's', 'e', 'r'};
    char chm;
    int n;
    cout<<"*******************************************ENTER YOUR LOGIN DETAILS*******************************************"<<endl;
    cout << "Enter your USERNAME" << endl;
    cin >> username;
    cout << "Enter your PASSWORD" << endl;
    cin >> password;
    if (res == 0 && password == 1234)
    {
showMenu();
    }
    else{
        cout<<"INVALID USERNAME OR PASSWORD!";
    }
}
