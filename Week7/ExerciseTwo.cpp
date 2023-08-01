#include <iostream>
#include <list>
using namespace std;

//student class that has four lists, one for first name, one for last name, one for year1 marks, and one for year2 marks
class Student
{
    private:
        list<char> firstName;
        list<char> lastName;
        list<int> year1;
        list<int> year2;
    public:
        //setters
        void setFirstName(string s)
        {
            for (int i = 0; i < s.length(); i++)
            {
                firstName.push_back(s[i]);
            }
        }
        void setLastName(string s)
        {
            for (int i = 0; i < s.length(); i++)
            {
                lastName.push_back(s[i]);
            }
        }
        void setYear1(int n)
        {
            year1.push_back(n);
        }
        void setYear2(int n)
        {
            year2.push_back(n);
        }
        //getters
        list<char> getFirstName()
        {
            return firstName;
        }
        list<char> getLastName()
        {
            return lastName;
        }
        list<int> getYear1()
        {
            return year1;
        }
        list<int> getYear2()
        {
            return year2;
        }
        //space filter function that removes spaces from a list
        list<char> spaceFilter(list<char> l)
        {
            list<char> result;  //create a new list
            for (list<char>::iterator i = l.begin(); i != l.end(); i++) //loop through the list
            {
                if (*i != ' ')  //if the element isnt a space
                {
                    result.push_back(*i);   //add it to the new list
                }
            }
            return result;
        }
        //function that adds both names together and returns a list of characters
        list<char> spliceNames()
        {
            list<char> result;  //create a new list
            list<char> first = spaceFilter(getFirstName()); //filter the first name
            list<char> last = spaceFilter(getLastName());   //filter the last name
            for (list<char>::iterator i = first.begin(); i != first.end(); i++) //loop through the first name
            {
                result.push_back(*i);
            }
            for (list<char>::iterator i = last.begin(); i != last.end(); i++)   //loop through the last name
            {
                result.push_back(*i);
            }
            return result;
        }
        //function that sorts the marks in ascending order
        list<int> sortMarks(list<int> l)
        {
            list<int> result;
            for (list<int>::iterator i = l.begin(); i != l.end(); i++)  //loop through the list
            {
                result.push_back(*i);   //add the element to the new list
            }
            result.sort();
            return result;  //return the sorted list
        }
        //function that merges the two marks lists together and returns a list of integers
        list<int> finalMarksList()
        {
            list<int> result;
            list<int> year1 = sortMarks(getYear1());
            list<int> year2 = sortMarks(getYear2());
            for (list<int>::iterator i = year1.begin(); i != year1.end(); i++)
            {
                result.push_back(*i);
            }
            for (list<int>::iterator i = year2.begin(); i != year2.end(); i++)
            {
                result.push_back(*i);
            }
            return result;
        }
        //function that finds the average from the final marks list
        double average()
        {
            list<int> final = finalMarksList();
            int sum = 0;
            for (list<int>::iterator i = final.begin(); i != final.end(); i++)
            {
                sum += *i;
            }
            return (double)sum / final.size();
        }
        //function that prints the student's name and average
        void showFinal()
        {
            list<char> name = spliceNames();
            cout << "Name: ";
            for (list<char>::iterator i = name.begin(); i != name.end(); i++)
            {
                cout << *i;
            }
            cout << endl;
            cout << "Average: " << average() << endl;
        }
};

int main()
{
    bool loop = true;   //loop variable
    while(loop == true){
        //main menu
        cout << "1. Enter student data" << endl;
        cout << "2. Show student data" << endl;
        cout << "3. Sort marks" << endl;
        cout << "4. Merge marks and print average" << endl;
        cout << "5. Exit" << endl;
        //get user input
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        if(choice == 1){
            //create a new student object
            Student s;
            //get user input for first name
            string firstName;
            cout << "Enter first name: ";
            cin >> firstName;
            s.setFirstName(firstName);
            //get user input for last name
            string lastName;
            cout << "Enter last name: ";
            cin >> lastName;
            s.setLastName(lastName);
            //get user input for year1 marks
            int year1;
            cout << "Enter year 1 marks: ";
            cin >> year1;
            s.setYear1(year1);
            //get user input for year2 marks
            int year2;
            cout << "Enter year 2 marks: ";
            cin >> year2;
            s.setYear2(year2);
            //print the student's name and average
            s.showFinal();
        }
        else if(choice == 2){
            //create a new student object
            Student s;
            //get user input for first name
            string firstName;
            cout << "Enter first name: ";
            cin >> firstName;
            s.setFirstName(firstName);
            //get user input for last name
            string lastName;
            cout << "Enter last name: ";
            cin >> lastName;
            s.setLastName(lastName);
            //get user input for year1 marks
            int year1;
            cout << "Enter year 1 marks: ";
            cin >> year1;
            s.setYear1(year1);
            //get user input for year2 marks
            int year2;
            cout << "Enter year 2 marks: ";
            cin >> year2;
            s.setYear2(year2);
            //print the student's name and average
            s.showFinal();
        }
        else if(choice == 3){
            //create a new student object
            Student s;
            //get user input for year1 marks
            int year1;
            cout << "Enter year 1 marks: ";
            cin >> year1;
            s.setYear1(year1);
            //get user input for year2 marks
            int year2;
            cout << "Enter year 2 marks: ";
            cin >> year2;
            s.setYear2(year2);
            //print the sorted marks
            list<int> sorted = s.sortMarks(s.finalMarksList());
            for (list<int>::iterator i = sorted.begin(); i != sorted.end(); i++)
            {
                cout << *i << " ";
            }
            cout << endl;
        }
        else if(choice == 4){
            //create a new student object
            Student s;
            //get user input for first name
            string firstName;
            cout << "Enter first name: ";
            cin >> firstName;
            s.setFirstName(firstName);
            //get user input for last name
            string lastName;
            cout << "Enter last name: ";
            cin >> lastName;
            s.setLastName(lastName);
            //get user input for year1 marks
            int year1;
            cout << "Enter year 1 marks: ";
            cin >> year1;
            s.setYear1(year1);
            //get user input for year2 marks
            int year2;
            cout << "Enter year 2 marks: ";
            cin >> year2;
            s.setYear2(year2);
            //print the student's name and average
            s.showFinal();
        }
        else if(choice == 5){
            loop = false;
        }
        else{
            cout << "Invalid choice" << endl;
        }
    }
}