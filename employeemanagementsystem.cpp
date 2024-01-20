#include <iostream>
#include <algorithm> 
#include <windows.h>
#include <conio.h>
using namespace std;

struct emp{
    string name, id;
    int contact, salary;
};
emp e[100];
int total = 0;

bool compareEmployees(const emp &a, const emp &b, const string &sortCriteria) {
    if (sortCriteria == "name") {
        return a.name < b.name;
    } else if (sortCriteria == "id") {
        return a.id < b.id;
    } else if (sortCriteria == "salary") {
        return a.salary < b.salary;
    } else {

        return a.name < b.name;
    }
}

void empdata(){
    int choice;
    cout<<"How many employees do you want to enter?";
    cin>>choice;
    for (int i = total; i < total + choice; i++)
    {
        cout<<"Enter data of employee " << i+1 <<endl;
        cout<<"Employee's Name: ";
        cin>>e[i].name;
        cout<<"Employee's ID: ";
        cin>>e[i].id;
        cout<<"Employee's Salary: ";
        cin>>e[i].salary;
        cout<<"Employee's Contact: ";
        cin>>e[i].contact;
    }
    cout << "Records for " << choice << " employees have been successfully created." << endl;
    Sleep(2000);
    total = total + choice;
        
}
void showdata() {
    if (total != 0) {
        string sortCriteria;
        cout << "Sort by (name/id/salary): ";
        cin >> sortCriteria;
        sort(e, e + total, [sortCriteria](const emp &a, const emp &b) {
            return compareEmployees(a, b, sortCriteria);
        });

        for (int i = 0; i < total; i++) {
            cout << "Data of employee " << i + 1 << endl;
            cout << "Employee Name: " << e[i].name << endl;
            cout << "ID of employee " << e[i].id << endl;
            cout << "Salary of employee " << e[i].salary << endl;
            cout << "Contact of employee " << e[i].contact << endl;
        }
    } else {
        cout << "Your record is empty! " << endl;
        Sleep(2000);
    }
}
void sortAndShowData() {
    string sortCriteria;
    cout << "Sort by (name/id/salary): ";
    cin >> sortCriteria;
    sort(e, e + total, [sortCriteria](const emp &a, const emp &b) {
        return compareEmployees(a, b, sortCriteria);
    });

    for (int i = 0; i < total; i++) {
        cout << "Data of employee " << i + 1 << endl;
        cout << "Employee Name: " << e[i].name << endl;
        cout << "ID of employee " << e[i].id << endl;
        cout << "Salary of employee " << e[i].salary << endl;
        cout << "Contact of employee " << e[i].contact << endl;
    }
}

void searchdata(){
    if (total!=0){
        string id;
        cout<<"Enter ID of the employee you want to search: ";
        cin>>id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout<<"Data of employee "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID of employee "<<e[i].id<<endl;
                cout<<"Salary of employee "<<e[i].salary<<endl;
                cout<<"Contact of employee "<<e[i].contact<<endl;
                break;
            }
            if (i==total-1)
            {
                cout<<"No such record exist"<<endl;
                Sleep(2000);
            }   
        }
    }
    else{
        cout<<"Your record is empty! "<<endl;
        Sleep(2000);
    }
};
void updatedata(){
    if(total!=0){
        string id;
        cout<<"Enter id of the employee you want to update: "<<endl;
        cin>>id;
        for (int i = 0; i < total; i++)
        {
            if (id == e[i].id)
            {
                cout<<"\tPrevious data"<<endl;
                cout<<"Data of employee: "<<i+1<<endl;
                cout<<"Employee Name: "<<e[i].name<<endl;
                cout<<"ID of employee "<<e[i].id<<endl;
                cout<<"Salary of employee "<<e[i].salary<<endl;
                cout<<"Contact of employee "<<e[i].contact<<endl;
                cout<<"\nEnter new data:"<<endl;
            
                cout<<"Employee's Name: ";
                cin>>e[i].name;
                cout<<"Employee's ID: ";
                cin>>e[i].id;
                cout<<"Employee's Salary: ";
                cin>>e[i].salary;
                cout<<"Employee's Contact: ";
                cin>>e[i].contact;
                break;
            }
            if (i==total-1)
            {
                cout<<"No such record exist"<<endl;
                Sleep(2000);
            }
            
        }
    }
    else{
        cout<<"Your record is empty!"<<endl;
        Sleep(2000);
    }
};
void deletedata(){
    if(total!=0){
        char user;
        cout<<"Press 1 to delete full record"<<endl;
        cout<<"Press 2 to delete specific record"<<endl;
        user = getch();
        if(user=='1'){
            total = 0;
            cout<<"All record has been deleted!"<<endl;
            Sleep(2000);
        }
        if (user=='2')
        {
            string id;
            cout<<"Enter id of the employee you want to delete: "<<endl;
            cin>>id;
            for(int i=0; i < total; i++){
                if (id==e[i].id)
                {
                    for(int j = i; j < total-1; j++){
                    e[j].name = e[j+1].name;
                    e[j].id = e[j+1].id;
                    e[j].contact = e[j+1].contact;
                    e[j].salary = e[j+1].salary;
                    }
                    total--;
                    cout<<"Record with ID "<< id << " has been deleted";
                    Sleep(2000);
                    break;
                }
            }
        }
    }
    else{
        cout<<"Your record is already empty"<<endl;
        Sleep(2000);
    }
};
void logout(){


};
int main(){
    cout<<"\t\t Employee Management System"<<endl;
    cout<<"\t Sign up"<<endl;
    string username, password;
    cout<<"Enter Username:   ";
    cin>>username;
    cout<<"Enter Password:   ";
    cin>>password;
    cout<<"Your ID is being processed. Please wait";
    Sleep(1000);
    
    for (int i = 0; i < 2; i++)
    {
        cout<<'.';
    }
    cout<<"Your ID has been created"<<endl; 
    Sleep(2000);   
    system("CLS");

start:
    system("CLS");
    cout << "\t\t Employee Management System" << endl;
    cout << "\t Login" << endl;
    string username1, password1;
    cout << "Enter Username:";
    cin >> username1;
    cout << "Enter Password:";
    cin >> password1;

    if (username1 == username && password1 == password) {
        system("CLS");
        char user;
        while (1) {
            cout << "Press 1 to enter data" << endl;
            cout << "Press 2 to show data" << endl;
            cout << "Press 3 to search data" << endl;
            cout << "Press 4 to update data" << endl;
            cout << "Press 5 to delete data" << endl;
            cout << "Press 6 to sort and show data" << endl;
            cout << "Press 7 to logout" << endl;
            cout << "Press 8 to exit" << endl;
            user = getch();
            system("CLS");
            switch (user) {            
            case '1':
                empdata();
                break;
            case '2':
                showdata();
                break;
            case '3':
                searchdata();
                break;
            case '4':
                updatedata();
                break;
            case '5':
                deletedata();
                break;
            case '6':
                sortAndShowData();
                break;
            case '7':
                logout();
                goto start;
            case '8':
                cout << "Exiting the Employee Management System."<<endl;
                Sleep(2000);
                return(0);
            default:
                cout<<"\aInvalid Input"<<endl;
                Sleep(2000);
                break;
            
            }
        }
        }
    else if (username1 != username)
    {
        cout<<"Your username is incorrect"<<endl;
        Sleep(2000);
        goto start;
    }
    else if (password1 != password)
    {
        cout<<"Your password is incorrect"<<endl;
        Sleep(2000);
        goto start;
    }
        
return 0;
}