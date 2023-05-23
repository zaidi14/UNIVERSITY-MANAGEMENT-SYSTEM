#include<iostream>
#include<string>
using namespace std;

// Define enumeration types for user types, course status, and grades
enum UserType { ADMIN, STUDENT, TEACHER };
//enum CourseStatus { AVAILABLE, ENROLLED, DROPPED, COMPLETED };
//enum Grade { A, B, C, D, F };

// Define structure for course with course details and a pointer to teacher
struct Course {
    string courseName;
    string courseCode;
    string courseDescription;
    int creditHours;
    string Status;
    string grade;
    struct Teacher* teacher;
};

// Define structure for student with student details and a pointer to enrolled courses
struct Student {
    string name;
    int rollNumber;
    int age;
    string email;
    UserType type;
    struct Course enrolledCourses[10];
};



// Define structure for teacher with teacher details and a pointer to allocated courses
struct Teacher {
    string name;
    string employeeID;
    int age;
    string email;
    UserType type;
    struct Course* allocatedCourses[10];
};

// Define structure for admin with admin details
struct Admin {
    string name;
    string adminID;
    int age;
    string email;
    UserType type;
};

// Declare global variables to store data
Course courses[50];
Student students[100];
/*Student *ptrstudent[100];
*ptrstudent[100]=students[100];*/
Teacher teachers[20];
Admin admin;




// Declare functions for admin module
void addStudent();
void addStudent()
{    int n;
    cout<<"ENTER NO. OF STUDENTS TO BE ADDED:\n";cin>>n;
	Student s[n];
	Student *sptr[n];

	for(int i=0 ; i<n ; i++)
	{
	
	cout<<"\nEnter the Data of student "<<i+1<<endl<<endl;

				 cout<<"Enter name :\n";

				 cin>>s[i].name; 
                    

				 cout<<"Enter Reg no :\n";

				 cin>>s[i].rollNumber;
                 //sptr[i]=&s[i].rollNumber;  

				 cout<<"Enter age:\n ";

				 cin>>s[i].age;     

				 cout<<"Enter email:\n ";

				 cin>>s[i].email;   
				 
				 //cout<<"ENTER USER TYPE:\n";
				 
				 //cin>>s[i].type;
				 
				 for(int x=0; x<10 ; x++ )
				 {
				 	cout<<" COURSE:"<<x+1<<endl<<endl;
				 	
				 	 cout<<"Enter course name :\n";
					 cin>>s[i].enrolledCourses[x].courseName;
					 cout<<"Enter course code:\n";
					 cin>>s[i].enrolledCourses[x].courseCode;
					 cout<<"Enter credit hours:\n";
					 cin>>s[i].enrolledCourses[x].creditHours; 
                     cout<<"Enter status:\n";
					 cin>>s[i].enrolledCourses[x].Status; 
                     cout<<"Enter letter grade:\n";
					 cin>>s[i].enrolledCourses[x].grade; 
                    // cout<<"Enter TEACHER NAME:\n";
					 
				 } 
 
				
				
			
				
	}
	
	
};

int unenrollStudent(Student s[100])
{  int searchroll;
  

    for(int i=0;i<100;i++)
    {
        if(searchroll== s[i].rollNumber)
        {
            for( int j=i ; j<99; j++ )
            {
                s[i]=s[i+1];
            }

        }
    }


};
void addTeacher()
{
    int n;
    cout<<"ENTER NO. OF teachers TO BE ADDED:\n";cin>>n;
	Teacher t[n];


    for(int i=0 ; i<n ; i++)
	{
	
	cout<<"\nEnter the Data of teacher "<<i+1<<endl<<endl;

				 cout<<"Enter name :\n";

				 cin>>t[i].name;       

				 cout<<"Enter employeeID:\n";

				 cin>>t[i].employeeID;   

				 cout<<"Enter age:\n ";

				 cin>>t[i].age;     

				 cout<<"Enter email:\n ";

				 cin>>t[i].email;   
				 
				 //cout<<"ENTER USER TYPE:\n";
				 
				 //cin>>s[i].type;
				 
				 for(int x=0; x<10 ; x++ )
				 {
				 	cout<<" COURSE:"<<x+1<<endl<<endl;
				 	
				 	 cout<<"Enter course name :\n";
					 cin>>t[i].allocatedCourses[x]->courseName;
					 cout<<"Enter course code:\n";
					 cin>>t[i].allocatedCourses[x]->courseCode;
					 cout<<"Enter credit hours:\n";
					 cin>>t[i].allocatedCourses[x]->creditHours; 
                 } 
 
				
				
			
				
	}
	


	

};
        	
void removeStudent();
void updateStudent();
void checkAllStudents();

void addTeacher();
void removeTeacher();
void updateTeacher();
void checkAllTeachers();
void addCourse();
void removeCourse();
void updateCourse();
void checkAllCourses();
void allocateCourse();
void deallocateCourse();

// Declare functions for student module
void checkStudentDetails();
void enrollCourse();
void seeFinalGrade();
void seeTeachersList();
void seeEnrolledCourses();
void seeDroppedCourses();
void seeCompletedCourses();

// Declare functions for teacher module
void checkTeacherDetails();
void seeAllocatedCourses();
void seeEnrolledStudents();
void enterGrades();

// Main function to run the LMS
main() {
    int userChoice;
    UserType currentUserType;
    Student s[100];

   
    // Set initial values for admin
    admin.name = "Admin";
    admin.adminID = "AD001";
    admin.age = 35;
    admin.email = "admin@giki.edu.pk";
    admin.type = ADMIN;

    // Loop until user exits the program
    while (true) {
        // Display main menu options
        cout << "Welcome to Institute Learning Management System!" << endl;
        cout << "Please select your user type:" << endl;
        cout << "1. Admin" << endl;
        cout << "2. Student" << endl;
        cout << "3. Teacher" << endl;
        cout << "4. Exit" << endl;
        cin >> userChoice;

        // Check user type and call relevant module functions
        switch (userChoice) {
        case 1:
            currentUserType = ADMIN;
            break;
        case 2:
            currentUserType = STUDENT;
            break;
        case 3:
            currentUserType = TEACHER;
            break;
        case 4:
            exit(0);
        }

        if (currentUserType == ADMIN) 
		{    int inputtype;
            cout << "Please select your type:" << endl;
            cout << "1. Add student" << endl;
            cout << "2. add teacher" << endl;
            cout << "3. Unenroll student " << endl;
            //cout << "4. " << endl;
            cin >> inputtype;

           switch (inputtype)
         {
        case 1:
           addStudent();
            break;
        case 2:
            addTeacher();
            break;
        case 3:
           // unenrollStudent(Student->students[100]);
           break;
        //case 4:
           // exit(0);
        }
        }
	}
}

            

