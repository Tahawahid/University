#include <iostream>
#include <iomanip>
using namespace std;
class MAJU
{
public:
    virtual void sideMenu() = 0;
};
class GeneralInformation : public MAJU
{
protected:
    string registrationNo;
    string name;
    string fatherName;
    string address;
    string email;
    string phone;
    string dateOfBirth;
    string program;
    string school;
    string college;
    float matricMarks;
    float matricTotalMarks;
    int yearMatric;
    float percentageMatric;
    float intermediateMarks;
    float intermediateTotalMarks;
    int yearIntermediate;
    float percentageIntermediate;

public:
    void personalInformation()
    {
        system("CLS");
        cout << "Enter your Registration No : ";
        getline(cin, registrationNo);
        cout << "Enter your Program : ";
        getline(cin, program);
        cout << "Enter your Name : ";
        getline(cin, name);
        cout << "Enter your Father Name : ";
        getline(cin, fatherName);
        cout << "Enter your Email : ";
        getline(cin, email);
        cout << "Enter your phone : ";
        getline(cin, phone);
        cout << "Enter your Address : ";
        getline(cin, address);
        cout << "Enter your Date of Birth : ";
        getline(cin, dateOfBirth);
    }
    void academicInformation()
    {
        cout << "\nEnter your Matric or S.S.C or O-Level Details " << endl
             << endl;
        cout << "Enter School Name : ";
        getline(cin, school);
        cout << "Enter Obtained Marks : ";
        cin >> matricMarks;
        cout << "Enter Total Marks : ";
        cin >> matricTotalMarks;
        cout << "Enter Year of Passing : ";
        cin >> yearMatric;
        cout << "\nEnter your Intermediate or H.S.C or A-Level Details " << endl
             << endl;
        cout << "Enter College Name : ";
        getline(cin, college);
        cout << "Enter Obtained Marks : ";
        cin >> intermediateMarks;
        cout << "Enter Total Marks : ";
        cin >> intermediateTotalMarks;
        cout << "Enter Year of Pasing : ";
        cin >> yearIntermediate;
    }
    void sideMenu()
    {
        system("CLS");
        cout << "******Personal Information********************************************************" << endl;
        cout << " Registration#: " << registrationNo << endl;
        cout << " Program : " << program << endl;
        cout << " Student Name : " << name << endl;
        cout << " Father Name : " << fatherName << endl;
        cout << "Date of Birth : " << dateOfBirth << endl;
        cout << " Address : " << address << endl;
        cout << " Phone : " << phone << endl;
        cout << " Email : " << email << endl;
        cout << "**********************************************************************************/n/n" << endl
             << endl;
        cout << "******Academic Information*******************************************************************************" << endl;
        cout.setf(ios::left);
        cout << setw(30) << "Degree ";
        cout << setw(20) << "Marks Obtained";
        cout << setw(20) << "Total Marks";
        cout << setw(20) << "percentage";
        cout << setw(20) << "Passing Year";
        cout << setw(20) << "Institute" << endl;
        cout << setw(30) << "SSC/Matric/O-Level";
        cout << setw(20) << matricMarks;
        cout << setw(20) << matricTotalMarks;
        percentageMatric = (matricMarks * 100) / matricTotalMarks;
        cout << setw(20) << percentageMatric;
        cout << setw(20) << yearMatric;
        cout << setw(20) << school << endl;
        cout << setw(30) << "HSC/Intermediate/A-Level";
        cout << setw(20) << intermediateMarks;
        cout << setw(20) << intermediateTotalMarks;
        percentageIntermediate = (intermediateMarks * 100) / intermediateTotalMarks;
        cout << setw(20) << percentageIntermediate;
        cout << setw(20) << yearIntermediate;
        cout << setw(20) << college << endl;
        cout << "*********************************************************************************************************" << endl
             << endl;
        system("pause");
    }
    void compulsoryData()
    {
        cout << " Registration#: " << setw(20) << registrationNo;
        cout << " Program : " << setw(20) << program << endl;
        cout << " Student Name : " << setw(20) << name;
        cout << " Father Name : " << setw(20) << fatherName << endl;
        cout << "Date of Birth : " << setw(20) << dateOfBirth << endl;
    }
};
class Announcements : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*****Anouncement*****************\n\n";
        cout << "*No Announcement Found\n\n";
        cout << "*********************************\n\n";
        system("pause");
    }
};
class Notice_Board : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "******Notice Board****************\n"
             << endl;
        cout << "Attendenace Policy-FALL 2022" << endl;
        cout << "Office of the Registrar" << endl;
        cout << "[Download]\n"
             << endl;
        cout << "**********************************\n"
             << endl;
        system("pause");
    }
};
class My_Courses : public GeneralInformation
{
protected:
    string course_1;
    string course_2;
    string course_3;
    string course_4;
    string course_5;
    string course_6;

public:
    string getcourse1()
    {
        return course_1;
    }
    string getcourse2()
    {
        return course_2;
    }
    string getcourse3()
    {
        return course_3;
    }
    string getcourse4()
    {
        return course_4;
    }
    string getcourse5()
    {
        return course_5;
    }
    string getcourse6()
    {
        return course_6;
    }
    void selecCourses()
    {
        system("CLS");
        cout << "Enter the Name of the Courses in which you want to enroll" << endl
             << endl;
        cout << "Course No.1 : ";
        getline(cin, course_1);
        cout << "Course No.2 : ";
        getline(cin, course_2);
        cout << "Course No.3 : ";
        getline(cin, course_3);
        cout << "Course No.4 : ";
        getline(cin, course_4);
        cout << "Course No.5 : ";
        getline(cin, course_5);
        cout << "Course No.6 : ";
        getline(cin, course_6);
    }
    void sideMenu()
    {
        system("CLS");
        cout.setf(ios::left);
        cout << "******My Courses (FA22)*****************************************************\n " << endl;
        compulsoryData();
        cout << "\n*****Courses**************************************************************\n " << endl;
        cout << " 1. " << getcourse1() << " 2. " << getcourse2() << " 3. " << getcourse3() << endl;
        cout << " 4. " << getcourse4() << " 5. " << getcourse5() << " 6. " << getcourse6() << endl;
        cout << "****************************************************************************\n"
             << endl;
        system("pause");
    }
};
class My_Time_Table : public My_Courses
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*********************************************My Time Table (FA22)*********************************************\n"
             << endl;
        compulsoryData();
        cout << setw(20) << "Time | Day";
        cout << setw(20) << "Mon";
        cout << setw(20) << "Tues";
        cout << setw(20) << "Wed";
        cout << setw(20) << "Thur";
        cout << setw(20) << "Fri" << endl;
        cout << setw(20) << "8:30 - 9:30";
        cout << setw(20) << getcourse1();
        cout << setw(20) << getcourse2();
        cout << setw(20) << getcourse3();
        cout << setw(20) << getcourse4();
        cout << setw(20) << getcourse5() << endl;
        cout << setw(20) << "9:30 - 10:30";
        cout << setw(20) << getcourse6();
        cout << setw(20) << getcourse1();
        cout << setw(20) << getcourse2();
        cout << setw(20) << getcourse3();
        cout << setw(20) << getcourse4() << endl;
        cout << setw(20) << "11:30 - 12:30";
        cout << setw(20) << getcourse5();
        cout << setw(20) << getcourse6();
        cout << setw(20) << getcourse1();
        cout << setw(20) << getcourse2();
        cout << setw(20) << getcourse3() << endl;
        cout << setw(20) << "12:30 - 1:30";
        cout << setw(20) << getcourse4();
        cout << setw(20) << getcourse5();
        cout << setw(20) << getcourse6() << endl;
        cout << "****************************************************************************************************************\n"
             << endl;
        system("pause");
    }
};
class My_Attendance : public My_Courses
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "***********************************My Attendance (FA22)*********************************************\n"
             << endl;
        compulsoryData();
        cout << endl;
        cout << setw(100) << "Courses Name " << endl;
        cout << setw(100) << getcourse1() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 1" << endl;
        cout << setw(100) << getcourse2() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 0" << endl;
        cout << setw(100) << getcourse3() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 3" << endl;
        cout << setw(100) << getcourse4() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 1" << endl;
        cout << setw(100) << getcourse5() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 0" << endl;
        cout << setw(100) << getcourse6() << setw(20) << "Total Lectures : 32" << setw(20) << "Total Abscents : 0" << endl;
        cout << "\n****************************************************************************************************" << endl;
        system("pause");
    }
};
class My_Transcript : public My_Courses
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "**********************************My Transcript (FA22)*********************************************" << endl;
        cout << "Semester#2 [FALL 2022]" << endl
             << endl;
        compulsoryData();
        cout << endl;
        cout << setw(100) << "Courses" << setw(20) << "Credit Hours" << setw(20) << "Grades" << endl;
        cout << setw(100) << getcourse1() << setw(20) << "3" << setw(20) << "A" << endl;
        cout << setw(100) << getcourse2() << setw(20) << "3" << setw(20) << "A+" << endl;
        cout << setw(100) << getcourse3() << setw(20) << "2" << setw(20) << "A-" << endl;
        cout << setw(100) << getcourse4() << setw(20) << "3" << setw(20) << "B+" << endl;
        cout << setw(100) << getcourse5() << setw(20) << "2" << setw(20) << "A" << endl;
        cout << setw(100) << getcourse6() << setw(20) << "3" << setw(20) << "A+" << endl
             << endl;
        cout << "***************************************************************************************************" << endl;
        system("pause");
    }
};
class Academic_Deadlines : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*******************Academic Deadlines : FA22***********************" << endl
             << endl;
        cout << "*Academic deadlines are not published for term FA22 " << endl
             << endl;
        cout << "*******************************************************************" << endl;
        system("pause");
    }
};
class Academic_Calendar : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "***************************************Academic Calender : FA22*************************************************************** " << endl
             << endl;
        cout << setw(30) << "Serial No." << setw(50) << "Activity" << setw(50) << " Date" << endl;
        cout << setw(30) << "1 " << setw(50) << "Course Registration (Existing Batches)" << setw(50) << " Saturday, August 13, 2022 " << endl;
        cout << setw(30) << "2 " << setw(50) << "Orientation of New Intake (FALL 2022)" << setw(50) << " Saturday, September 10, 2022" << endl;
        cout << setw(30) << "3 " << setw(50) << "Commencement of Classes" << setw(50) << " Monday, September 12, 2022" << endl;
        cout << setw(30) << "4 " << setw(50) << "Course Add/Drop" << setw(50) << " Monday, September 12, 2022 " << endl;
        cout << setw(30) << "5 " << setw(50) << "Eid Milad Un Nabi (PBUH) *" << setw(50) << " Sunday, October 09, 2022" << endl;
        cout << setw(30) << "6 " << setw(50) << "Midterm Examinations" << setw(50) << " Wednesday, November 09, " << endl
             << endl;
        cout << "*******************************************************************************************************************************" << endl;
        system("pause");
    }
};
class Course_Registration : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*******************Course registration for term (FA22)*******************\n"
             << endl;
        cout << "Cannot register course because you have already registered course" << endl
             << endl;
        cout << "*************************************************************************" << endl;
        system("pause");
    }
};
class Course_Withdrawal : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "***************My Date Sheet***************\n"
             << endl;
        cout << "MIDTERM [ Click here to view ] " << endl
             << endl;
        cout << "*******************************************" << endl;
        system("pause");
    }
};
class Course_Evaluation : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*************Course Evaluation*************\n"
             << endl;
        cout << "Session has been expired or unbegun" << endl
             << endl;
        cout << "*******************************************" << endl;
        system("pause");
    }
};
class My_Program_Courses : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*********My Program Courses***************\n"
             << endl;
        cout << " Code "
             << " Course name \n"
             << endl;
        cout << "CS1210"
             << " Introduction to Computing " << endl;
        cout << "CS1211"
             << " Introduction to Computing Lab " << endl;
        cout << "CS1410"
             << " Computer Programming " << endl;
        cout << "CS1411"
             << " Computer Programming Lab " << endl;
        cout << "MG1100"
             << " Principles of Management " << endl;
        cout << "MT1150"
             << " Basic Maths-I " << endl;
        cout << "SS1100"
             << " Freshman English " << endl;
        cout << "SS1160"
             << " Functional English " << endl;
        cout << "SS1400"
             << " Islamic Studies " << endl;
        cout << "SS1410"
             << " Ethics " << endl;
        cout << "CS1420"
             << " Object Oriented Programming " << endl;
        cout << "CS1421"
             << " Object Oriented Programming Lab" << endl;
        cout << "CS2620"
             << " Discrete Structures " << endl;
        cout << "MT1140"
             << " Calculus and AnalyticalGeometry" << endl;
        cout << "MT1180"
             << " Basic Maths-II " << endl;
        cout << "NS1240"
             << " Applied Physics " << endl;
        cout << "SS2120"
             << " Oral Communication " << endl;
        cout << "CS2510"
             << " Data Structures and Algorithms " << endl;
        cout << "CS2511"
             << " Data Structures and Algorithms " << endl;
        cout << "CS3110"
             << " Software Engineering " << endl;
        cout << "CS3111"
             << " Software Engineering Lab " << endl;
        cout << "MT2210"
             << " Linear Algebra " << endl;
        cout << "MT2300"
             << " Probability and Statistics " << endl;
        cout << "SS2300"
             << " Principles of Psychology " << endl;
        cout << "SS2310"
             << " Principles of Sociology " << endl;
        cout << "\n******************************************" << endl;
        system("pause");
    }
};
class Program_Time_Table : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "***********************Program Time Table***********************" << endl
             << endl;
        cout << " program time table is not issued yet" << endl;
        cout << "\n****************************************************************" << endl;
        system("pause");
    }
};
class My_Datesheet : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*****************My Date Sheet*****************" << endl
             << endl;
        cout << "date sheet for mid term examination" << endl;
        cout << "[clicl here]\n"
             << endl;
        cout << "***********************************************" << endl;
        system("pause");
    }
};
class Fee_Challan : public My_Courses
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "************************************************************Registered Courses*******************************************************************************\n"
             << endl;
        cout << "Course Title "
             << "Credit Hours"
             << " Per Credit Fee "
             << "Course Fee"
             << "Section"
             << " Status "
             << " Teacher Name "
             << " Place(s)" << endl;
        cout << "Discrete Structures "
             << " 3 "
             << " 5500 "
             << " 16500 "
             << " BM "
             << "Confirmed"
             << "FAIZ ULLAH "
             << "CG-C1,CG-C4,CG-C5" << endl;
        cout << "OOP lab "
             << " 1 "
             << " 5500 "
             << " 5500 "
             << " BM "
             << "Confirmed"
             << "HIBA IRFAN "
             << "CS-C1" << endl;
        cout << "Object Oriented Programming "
             << " 3 "
             << " 5500 "
             << " 16500 "
             << " BM "
             << "Confirmed"
             << "ZAIN NOREEN "
             << "CG-C5,CG-C6,CG-C8" << endl;
        cout << "Oral Communication "
             << " 3 "
             << " 5500 "
             << " 16500 "
             << " BM "
             << "Confirmed"
             << "SUMRA PEERAN "
             << "AG-C2,CG-C4" << endl;
        cout << "Calcules And Analytical "
             << " 3 "
             << " 5500 "
             << " 16500 "
             << " BM "
             << "Confirmed"
             << "MUHAMMAD UMER ZEESHAN "
             << "CG-C1,CG-C5,CG-C8" << endl;
        cout << "Applied Physics "
             << " 3 "
             << " 5500 "
             << " 16500 "
             << " BM "
             << "Confirmed"
             << "Muhammad Zeeshan "
             << "CG-C2,CG-C8" << endl;
        cout << "Total "
             << " 16 "
             << " 88000 " << endl;
        cout << "\n**************************************************************************************************************************************************************\n";
        system("pause");
    }
};
class My_Deficiency_Course : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "******My Defiency Course***************\n"
             << endl;
        cout << "No defiency course to display\n"
             << endl;
        cout << "***************************************" << endl;
        system("pause");
    }
};
class Advance_Registration : public MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "******Advance Registration*************************" << endl
             << endl;
        cout << "* No advance registration is available yet \n"
             << endl;
        cout << "***************************************************" << endl;
        system("pause");
    }
};
class Advance_Registration_Fee_Challan : private MAJU
{
public:
    void sideMenu()
    {
        system("CLS");
        cout << "*****Advance Registration Fee Chalan*********************" << endl
             << endl;
        cout << "* No advance registration fee chalan is available\n"
             << endl;
        cout << "*********************************************************" << endl;
        system("pause");
    }
};
void menu()
{
    cout << "1. General Information\n";
    cout << "*********************Mohammad Ali Jinnah University**********************\n\n";
    cout << "2. Announcements\n";
    cout << "3. Notice Board\n";
    cout << "4. My Courses\n";
    cout << "5. My Time Table\n";
    cout << "6. My Attendance\n";
    cout << "7. My Transcript\n";
    cout << "8. Academic Deadlines\n";
    cout << "9. Academic Calendar\n";
    cout << "10. Course Registration\n";
    cout << "11. Course Withdrawal\n";
    cout << "12. Course Evaluation\n";
    cout << "13. My Program Courses\n";
    cout << "14. Program Time Table\n";
    cout << "15. My Datesheet\n";
    cout << "16. Fee Challan\n";
    cout << "17. My Deficiency Course\n";
    cout << "18. Advance Registration\n";
    cout << "19. Advance Registration Fee Challan\n";
}
int main()
{
    GeneralInformation GI;
    GI.personalInformation();
    GI.academicInformation();
    GI.sideMenu();
    Announcements A;
    A.sideMenu();
    Notice_Board NB;
    NB.sideMenu();
    My_Courses MC;
    MC.selecCourses();
    MC.sideMenu();
    My_Time_Table MTT;
    MTT.sideMenu();
    My_Attendance MA;
    MA.sideMenu();
    My_Transcript MT;
    MT.sideMenu();
    Academic_Deadlines AD;
    AD.sideMenu();
    Academic_Calendar AC;
    AC.sideMenu();
    Course_Registration CR;
    CR.sideMenu();
    Course_Withdrawal CW;
    CW.sideMenu();
    Course_Evaluation CE;
    CE.sideMenu();
    My_Program_Courses MPC;
    MPC.sideMenu();
    Program_Time_Table PTT;
    PTT.sideMenu();
    My_Datesheet MD;
    MD.sideMenu();
    Fee_Challan FC;
    FC.sideMenu();
    My_Deficiency_Course MDC;
    MDC.sideMenu();
    Advance_Registration AR;
    AR.sideMenu();
    Advance_Registration_Fee_Challan ARFC;
    ARFC.sideMenu();
}
