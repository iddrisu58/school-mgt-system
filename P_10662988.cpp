#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "Student.h"
#include "Admin.h"
#include "Lecturer.h"

using namespace std;

int main()
{
       // Variable declaration

    int my_option;
    string my_student_id;
    int student_n;
    int mystaff_num;
    string mystaff_id;
    int course_num;

    Student dexoangle;

    Admin rexoangle;

    Lecturer dex;



    while(1)
    {
        system ("color 3e");




        // Menu to be displayed to the user
        cout << "           School Management System    " << endl << endl;
        cout << "Enter an option: "<< endl;
        cout << ">[1] Student" << endl;
        cout << ">[2] Administrator" << endl;
        cout << ">[3] Staff" << endl;
        cout << ">[4] Exit"<<endl;
        cout << ">: ";
        cin >> my_option;

        // Switch statement to display a menu based on the user's input
        // For example, supposing the user selects option 1, add a student, the program displays all the menu under the add a student option

        switch(my_option)
        {
        case 1:
            {
        cout << ">[1] Add Student" << endl;
        cout << ">[2] Edit Student" << endl;
        cout << ">[3] Delete Student" << endl;
        cout << ">[4] Print student record" << endl;
        cout << ">[5]  Back to previous menu" << endl;
        cout << ">: ";
        cin >> my_option;



        switch(my_option)
        {
        case 1:
            {
            cout << "Enter the number of students: ";
            cin >> student_n;

            dexoangle.add_student(student_n);
            }
            break;


        case 2:
            {
                cout << "Enter student id: ";
                cin >> my_student_id;

                dexoangle.edit_student(my_student_id);
            }
            break;
        case 3:
            {

                cout << "Enter the id: ";
                cin >> my_student_id;

                dexoangle.delete_student(my_student_id);
            }
            break;
        case 4:
            {
                dexoangle.print_record();
                cout << "Done" << endl;
            }
            break;
        default:
            {
                break;
            }

        }

        case 2:
            {
        cout << ">[1] Add Staff" << endl;
        cout << ">[2] Edit Staff" << endl;
        cout << ">[3] Delete Staff" << endl;
        cout << "[4]  Back to previous menu" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of Staff: ";
                cin >> mystaff_num;

                 rexoangle.add_staff(mystaff_num);

            }
            break;
        case 2:
            {
                cout << "Enter ID: ";
                cin >> mystaff_id;

                rexoangle.edit_staff(mystaff_id);
            }
            break;
        case 3:
            {
                cout << "Enter ID: ";
                cin >> mystaff_id;

                rexoangle.delete_staff(mystaff_id);


            }
            break;
        default:
            {
                break;
            }

        }
            }

        case 3:
            {
        cout << "Enter an option"<< endl;
        cout << ">[1] Assign course" << endl;
        cout << ">[2] Enter Marks" << endl;
        cout << "[4]  Back to previous menu" << endl;
        cout << ">: ";
        cin >> my_option;

        switch(my_option)
        {
        case 1:
            {
                cout << "Enter the number of student: ";
                cin >> student_n;
                cout << "Enter Student ID: ";
                cin >> my_student_id;

               dex.assign_course(my_student_id,student_n);
            }
            break;
        case 2:
            {
                cout << "Enter the number of courses: ";
                cin >> course_num;

                dex.student_mark(course_num);
            }
            break;
        default:
            {
                break;
            }
            break;
        }

            }

            }
        }

    }

    return 0;
} // end of main function





// STUDENT CLASS


/**
This is a the Student class which helps us to create student objects.
The class contains functions and data members to help us process instances of this class
**/

#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
    // Data members of the Student class
    public:
        Student();
        int choice;
         string student_name[500];   // Names of the student are stored in an array of size 500
        string student_id[500]; // student id of the students are stored in an array of size 500 like wise the other data data members below
        string student_course[500];
        string student_level[500];
        string student_email[500];
        string student_address[500];
        int student_number;

        // Functions to process the instances of this class

        void add_student(int num);  // function to add a student. This function does not return anything
        void delete_student(string std_id); // function to delete a student
        void edit_student(string std_id); // function to edit a student
        void show_student(int num); // function to display students
        void print_record(); // function to print out the records of students

    protected:

    private:

};

#endif // STUDENT_H


// LECTURER CLASS

/**
Lecturer class whose instances are the staff members in the school
**/
#ifndef LECTURER_H
#define LECTURER_H
#include <iostream>
#include <string>

#include "Student.h"

using namespace std;


class Lecturer
{

    // Data members
    public:
        string myst_course[5];
        double mark[5];
        string student_course[5];
        int student_num;


        // Functions
        void student_mark(int course_num);
        void assign_course(string student_id,int student_numbe);


    protected:

    private:
            Student show_students;

};

#endif // LECTURER_H






// ADMINISTRATOR CLASS

/**
This is the administrator class which manages some specific aspects of the application
**/

#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <string>

using namespace std;

class Admin
{

    // Data members of the administrator class
    public:

        string staff_name[30];
        string staff_id[30];
        string staff_course[2];
        string staff_email[30];
        string staff_address[30];
        int staff_num;
        int choice;


        // functions
        void add_staff(int staff_num);
        void edit_staff(string sf_id);
        void delete_staff(string sf_id);
        void show_staff(int staff_num);




    protected:

    private:
};

#endif // ADMIN_H
