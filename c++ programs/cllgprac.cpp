// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello world";
//     cout<<"vakul mittal IT-1";
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"how to print /n int this way?"<<endl;
//     cout<<"vakul mittal IT-1";
//     return 0;
// }





// #include<iostream>
// #include<iomanip>
// using namespace std;
// int main(){
//     cout<<"rollno."<<setw(10)<<"name"<<setw(20)<<"hobby"<<setw(10)<<endl;
//     cout<<"1"<<setw(10)<<"vakul"<<setw(20)<<"singing"<<setw(10)<<endl;
//     cout<<"2"<<setw(10)<<"amay"<<setw(20)<<"singing"<<setw(10)<<endl;
//     cout<<"3"<<setw(10)<<"saheb"<<setw(20)<<"dancing"<<setw(10)<<endl;
//     cout<<"4"<<setw(10)<<"mukul"<<setw(20)<<"music"<<setw(10)<<endl;
//     cout<<"5"<<setw(10)<<"kartik"<<setw(20)<<"gyming"<<setw(10)<<endl;
//     cout<<"vakul mittal IT-1"<<endl;
//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Factorial {
// public:
//     int calculate(int n) {
//         if(n < 0) {
//             cout << "error" << endl;
//             return -1; 
//         int fact = 1;
//         for(int i = 1; i <= n; i++) {
//             fact *= i;
//         }
//         return fact;
//     }
// };
// int main() {
//     Factorial f;
//     int num;

//     cout << "Enter a number: ";
//     cin >> num;

//     int result = f.calculate(num);
    
//     if(result != -1) {
//         cout << "Factorial of " << num << " is: " << result << endl;
//     }
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }
 




// #include<iostream>
// using namespace std;
// class abc{
// public:
//     int calculate(int a,int b,int c){
//         return a+b+c;
//     }
// };
// int main(){
//     abc s;
//     int a,b,c;
//     cout<<"a=";
//     cin>>a;
//     cout<<"b=";
//     cin>>b;
//     cout<<"c=";
//     cin>>c;
//     int result=s.calculate(a,b,c);
//     cout<<"sum of three numbers:"<<result<<endl;
//     cout<<"vakul mittal IT-1";
//     return 0;
// }





// #include<iostream>
// using namespace std;
// class student{
// public:
//     int roll;
//     string name;
//     int marks[5];
//     void input(){
//         cout<<"enter student name:"<<endl;
//         cin>>name;
//         cout<<"enter student roll no:"<<endl;
//         cin>>roll;
//         cout<<"enter marks of 5 subject:"<<endl;
//         for(int i=0;i<5;i++){
//             cin>>marks[i];
//         } 
//     }int assignstream(){
//         int total=0,avgmarks;
//         for(int i=0;i<5;i++){
//             total+=marks[i];}
//             avgmarks=total/5;
//             cout<<"your total  marks are:"<<total<<endl<<"your average marks:"<<avgmarks<<"%"<<endl;
//             if(avgmarks<50){
//                 cout<<"alloted branch is:chemical"<<endl;
//             }else if(avgmarks>50 && avgmarks<65){
//                 cout<<"alloted branch is:electrical"<<endl;
//             }else if(avgmarks>65 && avgmarks<75){
//                 cout<<"alloted branch is:mechanical"<<endl;
//             }else if(avgmarks>75 && avgmarks<90){
//                 cout<<"alloted branch is:IT"<<endl;
//             }else{
//                 cout<<"alloted branch is:computer science"<<endl;
//             }
        
//     }
// };
// int main(){
//     student s;
//     s.input();
//     s.assignstream();
//     cout<<"vakul mittal IT-1"<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class bank{
// public:    
//     string name;
//     int accno;
//     char type;
//     float balance;
//     void input(){
//         cout<<"enter name of account holder:"<<endl;
//         cin>>name;
//         cout<<"enter account number:"<<endl;
//         cin>>accno;
//         cout<<"enter type of account"<<endl;
//         cin>>type;
//         cout<<"enter amount"<<endl;
//         cin>>balance;
//     }
//     int deposite(){
//         int amount;
//         cout<<"enter amount of money deposite"<<endl;
//         cin>>amount;
//         balance+=amount;
//         cout<<"deposition done successfully"<<endl;
//     }
//     int withdraw(){
//         int amount;
//         cout<<"enter amount to withdraw"<<endl;
//         cin>>amount;
//         if(balance-amount>10000){
//             balance-=amount;
//             cout<<"withdraw done successfully"<<endl;
//         }else{
//             cout<<"cannot done withdraw"<<endl;
//         }
//     }
//     void display(){
//         cout<<"name of depositor:"<<name<<endl;
//         cout<<"account number:"<<accno<<endl;
//         if(type=='s'){
//             cout<<"type of account is saving:"<<endl;
//         }else{
//             cout<<"type of account is current:"<<endl;
//         }
//         cout<<"your balance is:"<<balance<<endl;
//     }
// };
// int main(){
//     bank customer[10];
//     customer[0].input();
//     customer[0].deposite();
//     customer[0].withdraw();
//     customer[0].display();
//     cout<<"\n";
//     cout<<"vakul mittal IT-1";
//     return 0;
// }







// #include<iostream>
// using namespace std;
// class employee{
//     int empno;
//     string empname;
//     float basic,hra,da,netpay;
//     void calculate(){
//         hra=0.1*basic;
//         da=0.1*basic;
//         netpay=hra+da+basic;
//     }
//     public:
//     void havedata(){
//         cout<<"enter employee no."<<endl;
//         cin>>empno;
//         cout<<"enter employee name"<<endl;
//         cin>>empname;
//         cout<<"enter employee basic salary"<<endl;
//         cin>>basic;
//         calculate();
//     }
//     void display(){
//         cout<<"employee no.:"<<empno<<endl;
//         cout<<"employee name:"<<empname<<endl;
//         cout<<empname<<"'s basic:"<<basic<<endl;
//         cout<<empname<<"'s hra:"<<hra<<endl;
//         cout<<empname<<"'s da:"<<da<<endl;
//         cout<<empname<<"'s netpay:"<<netpay<<endl;
//     }
// };
// int main(){
//     employee info;
//     info.havedata();
//     info.display();
//     cout<<"vakul mittal IT-1"<<endl;
//     return 0;
// }







// #include<iostream>
// #include<cmath>
// using namespace std;
// class bus{
//     int people,seats;
// public:    
//     void getinput(){
//         cout<<"enter number of passengers:"<<endl;
//         cin>>people;
//         cout<<"enter number seats in each bus:"<<endl;
//         cin>>seats;
//     }
//     int output(){
//        int ceil(people/seats);
//     }
//     void display(){
//         int buses=output();
//         cout<<"no of buses required:"<<buses<<endl;
//     }
// };
// int main(){
//     bus count;
//     count.getinput();
//     count.output();
//     count.display();
//     cout<<"vakul mittal IT-1"<<endl;
//     return 0;
// }






// #include<iostream>
// using namespace std;
// class matrix{
//     int row;
//     int column;
//     int matrix[100][100];
// public:
//      void create(){
//         cout<<"enter number of rows:"<<endl;
//         cin>>row;
//         cout<<"enter number of column:"<<endl;
//         cin>>column;
//         cout<<"elements of matrix 1:"<<endl;
//         int matrix1[row][column];
//         for(int i=0;i<row;i++){
//             for(int j=0;j<column;j++){
//                 cin>>matrix[i][j];
//             }
//         }
       
        
//     }   
//     void multiply(){
//         int result[row][column];
//          for(int i=0;i<row;i++){
//              for(int j=0;j<column;j++){
//                 result[i][j]=0;
//              }
//          } 
//         for (int i = 0; i < row; i++){
//             for (int j = 0; j < column; j++){
//                 for (int k = 0; k < column; k++){
//                     result[i][j] += matrix1[i][k] * matrix2[k][j];
//                 }   
//             }      
//         }   
//     }
//     void display(){
//         cout<<"multiplicative matrix:"<<endl;
//         for(int i=0;i<row;i++){
//              for(int j=0;j<column;j++){
//                 cout<<result[i][j]<<" "<<endl;
//             }
//         }        

//     }   
// };
// int main(){
//     matrix ans;
//     ans.create();
//     ans.multiply();
//     ans.display();
//     return 0;
// }






// 14
// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     int roll_no;
//     string name;
//     string class_st;
//     float marks[5];    // Array to store marks for 5 subjects
//     float percentage;

//     // Private member function to calculate the percentage
//     void Calculate() {
//         float total = 0;
//         for (int i = 0; i < 5; ++i) {
//             total += marks[i];
//         }
//         percentage = (total / 500) * 100;  // Assuming each subject is out of 100
//     }

// public:
//     // Function to read the student's marks and calculate the percentage
//     void Readmarks() {
//         cout << "Enter Roll No: ";
//         cin >> roll_no;
//         cin.ignore();  // To ignore the newline character left in the input buffer

//         cout << "Enter Name: ";
//         getline(cin, name);

//         cout << "Enter Class: ";
//         getline(cin, class_st);

//         cout << "Enter marks for 5 subjects (out of 100 each): " << endl;
//         for (int i = 0; i < 5; ++i) {
//             cout << "Subject " << i + 1 << ": ";
//             cin >> marks[i];
//         }

//         // Calculate percentage after reading marks
//         Calculate();
//     }

//     // Function to display the student's data
//     void Displaydata() {
//         cout << "\nStudent Details:" << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Class: " << class_st << endl;
//         cout << "Marks in 5 subjects: ";
//         for (int i = 0; i < 5; ++i) {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//         cout << "Percentage: " << percentage << "%" << endl;
//     }
// };

// int main() {
//     Student s;

//     // Reading the marks and calculating percentage
//     s.Readmarks();

//     // Displaying the data
//     s.Displaydata();

//     return 0;
// }






// #include <iostream>

// using namespace std;

// int value = 100;


// class Demo
// {
// private:
//     int value;

// public:
//     void setValue(int val);
//     void showValues();
// };


// void Demo :: setValue(int val)
// {
//     value = val;
// }


// void Demo :: showValues()
// {
//     cout << "\nClass member 'value' :- " << value << endl;
//     cout << "\nGlobal 'value' :- " << ::value << endl;
// }


// int main()
// {
//     cout<< "vakul mittal IT-1"<<endl;

//     Demo obj;

//     int value = 50;

//     cout << "Local 'value' in main() :- " << value << endl;

//     obj.setValue(200);
//     obj.showValues();

//     return 0;
// }






// #include <iostream>
// using namespace std;

// // create a class
// class Matrix {
//   // private data members
//  private:
//   int x[10][10];
//   int row, col;

//   // public functions
//  public:
//   // getMatrix() function to insert matrix
//   void getMatrix(int r, int c) {
//     // initializing a matrix type variable
//     Matrix M1;

//     // copying value of parameters in the data members
//     row = r;
//     col = c;

//     // nested for loop for insertion of matrix
//     for (int i = 0; i < row; i++) {
//       for (int j = 0; j < col; j++) {
//         // cout << "Enter x[" << i << "][" << j << "] : ";
//         cin >> x[i][j];
//       }
//     }
//   }

//   // putMatrix() function to print the matrix
//   void putMatrix() {
//     for (int i = 0; i < row; i++) {
//       for (int j = 0; j < col; j++) {
//         cout << x[i][j] << " ";
//       }
//       cout << "\n";
//     }
//   }

 
//   Matrix multiply(Matrix M2) {
  
//     Matrix M;

//     // copying the value of parameters in the data members
//     M.row = row;
//     M.col = col;

//     // nested for loop to multiply two matrices
//     for (int i = 0; i < row; i++) {
//       for (int j = 0; j < col; j++) {
//         M.x[i][j] = 0;
//         for (int k = 0; k < col; k++) {
//           M.x[i][j] = M.x[i][j] + ((x[i][k]) * (M2.x[k][j]));
//         }
//       }
//     }

//     // returning the resulted matrix
//     return (M);
//   }
// };

// int main() {
 
//   Matrix M1, M2, M3;

 
//   cout << "Enter Matrix A" << endl;
//   M1.getMatrix(2, 2);

//   cout << "Enter Matrix B" << endl;
//   M2.getMatrix(2, 2);

//   M3 = M1.multiply(M2);
//   cout << "Multiply of A and B matrix" << endl;

  
//   M3.putMatrix();
//   cout<<"vakul mittal IT-1"<<endl;
//   return 0;
// }






// #include <iostream>
// using namespace std;

// // Macro to find the maximum of two numbers
// #define MAX(a, b) ((a) > (b) ? (a) : (b))

// class LargestNumber {
//     private:
//         int num1, num2, num3;
    
//     public:
//         // Constructor to initialize the numbers
//         LargestNumber(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

//         // Inline function to find the largest of three numbers
//         inline int findLargest() {
//             // Use the macro MAX to compare the three numbers
//             return MAX(num1, MAX(num2, num3));
//         }

//         // Function to display the largest number
//         void displayLargest() {
//             cout << "The largest of the three numbers is: " << findLargest() << endl;
//         }
// };

// int main() {
//     int n1, n2, n3;

//     // Input the numbers
//     cout << "Enter three numbers: ";
//     cin >> n1 >> n2 >> n3;

//     // Create an object of the LargestNumber class
//     LargestNumber ln(n1, n2, n3);

//     // Display the largest number
//     ln.displayLargest();
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// // }






// #include <iostream>

// using namespace std;


// class Entry
// {
//     static int count;

// public:
//     static void entryCount(void);
//     static void totalEntry(void);
// };


// int Entry :: count = 0;


// void Entry :: entryCount(void)
// {
//     count++;
//     cout << count <<" Entry Registered " << endl;
// }


// void Entry :: totalEntry(void)
// {
//     cout << Total number of people entered in the Stadium are :  << count  << endl;
// }


// int main()
// {

//     Entry P1, P2, P3, P4, P5;

//     P1.entryCount();
//     P2.entryCount();
//     P3.entryCount();
//     P4.entryCount();
//     P5.entryCount();
//     Entry :: totalEntry();
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }







// #include <iostream>

// using namespace std;

// class C2;

// class C1
// {
//     int num1;

// public:

//     void setNum1(int x) 
//     {
//         num1 = x;
//     }

//     friend void :: greater(C1, C2);
// };


// class C2
// {
//     int num2;

// public:

//     void setNum2(int x) 
//     {
//         num2 = x;
//     }

//     friend void :: greater(C1, C2);
// };


// void greater(C1 a, C2 b)
// {
//     if (a.num1 > b.num2)
//     {
//         cout << "num1 is greater than num2" << endl;
//     }

//     else if (a.num1 < b.num2)
//     {
//         cout << "num2 is greater than num1" << endl;
//     }

//     else
//     {
//         cout << "num1 & num2 Both are EQUAL" << endl;
//     }
// }


// int main()
// {
    

//     int a, b;
//     C1 obj1;
//     C2 obj2;

//     cout << "Enter first number :- " << endl;
//     cin >> a;

//     cout << "Enter second number :- " << endl;
//     cin >> b;

//     obj1.setNum1(a);
//     obj2.setNum2(b);

//     ::greater(obj1, obj2);
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }







// #include <iostream>

// using namespace std;


// class Date
// {
//     int day, month, year;

// public :

//     void setDate(int d, int m, int y) 
//     {
//         if (d > 31 || m > 12)
//         {
//             cout << "Enter Correct input !" << endl;
//         }
//         else
//         {
//             day = d;
//             month = m;
//             year = y;
//         }
//     }

//     void displayDate(void);
//     void subDay(int dy);
//     int subDate(Date);
//     int totalDays(int d, int m, int y);
//     bool leapYear(int y);
//     int daysinMonth(int m, int y);
// };


// void Date :: displayDate(void)
// {
//     cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
// }


// void Date :: subDay(int dy)
// {
//     while (dy > 0) 
//     {
//             if (day > dy) 
//             {
//                 day -= dy;
//                 dy = 0;
//             } 

//             else 
//             {
//                 dy -= day;
                
//                 if (month == 1) 
//                 {
//                     month = 12;
//                     year--;
//                 } 

//                 else 
//                 {
//                     month--;
//                 }

//                 day = daysinMonth(month, year);
//             }
//         }
// }


// int Date :: subDate(Date other) 
// {
//         int totalDays1 = totalDays(day, month, year);
//         int totalDays2 = totalDays(other.day, other.month, other.year);
//         return totalDays1 - totalDays2;
// }


// int Date :: totalDays(int d, int m, int y) 
// {
//     int totalDays = d;

//     for (int i = 1; i < y; i++) 
//     {
//         totalDays += (leapYear(i) ? 366 : 365);
//     }

//     for (int i = 1; i < m; i++) 
//     {
//         totalDays += daysinMonth(i, y);
//     }

//     return totalDays;
// }


// bool Date :: leapYear(int y) 
// {
//     return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
// }


// int Date :: daysinMonth(int m, int y)
// {
//     if (m == 4 || m == 6 || m == 9 || m == 11)
//     {
//         return 30;
//     }

//     if (m == 2) 
//     {
//         return (leapYear(y) ? 29 : 28);
//     }

//     return 31;
// }

// int main()
// {
    
//     int m1, y1, d1, m2, y2, d2, dy;

//     Date date1, date2;

//     cout << "Enter the Day for date 1 :- ";
//     cin >> d1;

//     cout << "Enter the Month for date 1 :- ";
//     cin >> m1;
    
//     cout << "Enter the Year for date 1 :- ";
//     cin >> y1;    
    
//     cout << "Enter the Day for date 2 :- ";
//     cin >> d2;

//     cout << "Enter the Month for date 2 :- ";
//     cin >> m2;
    
//     cout << "Enter the Year for date 2 :- ";
//     cin >> y2;

//     date1.setDate(d1, m1, y1);
//     date2.setDate(d2, m2, y2);

//     cout << "Original Date 1: ";
//     date1.displayDate();

//     cout << "Original Date 2: ";
//     date2.displayDate();

//     cout << "How many days do you want to subtract from Date-1 :- ";
//     cin >> dy;

//     cout << "Date-1 after subtracting " << dy << " days : ";
//     date1.subDay(dy);
//     date1.displayDate();

//     int difference = date1.subDate(date2);
//     cout << "Subtracting Date-1 and Date-2..." << endl;
//     cout << "Difference between Date-1 and Date-2: " << difference << " days" << endl;
//     cout<<"vakul mittal IT-1"<<endl;


//     return 0;
// }







// #include <iostream>
// #include <string.h>

// using namespace std;

// class Hospital;

// class Date
// {
//     int day, month, year;

// public :
//     friend class Hospital;
//     void setDate(int d, int m, int y);
//     void displayDate(void);
// };


// class Hospital
// {
//     string name;
//     string disease;
//     Date dateOfAdmission;
//     Date dateOfDischarge;

// public :
//     friend class Date;
//     void input(void);
//     void displayPatient(void);
// };


// void Hospital :: input(void)
// {
//     int d1, m1, y1, d2, m2, y2;
//     char ch;

//     cout << "Enter the name of the Paitent : ";
//     cin >>name;

//     cout << "Enter the disease of the patient : ";
//     cin >> disease;

//     cout << "Enter the day of admission for " << name << " :- ";
//     cin >> d1;
//     cout << "Enter the month of admission for " << name << " :- ";
//     cin >> m1;
//     cout << "Enter the year of admission for " << name << " :- ";
//     cin >> y1;
//     dateOfAdmission.setDate(d1, m1, y1);

//     cout << "Is the Patient Discharged (Y/n) :- ";
//     cin >> ch;
//     cin.ignore();

//     if (ch == 'Y' || ch == 'y')
//     {
//         cout << "Enter the day of discharge for " << name << " :- ";
//         cin >> d2;
//         cout << "Enter the month of discharge for " << name << " :- ";
//         cin >> m2;
//         cout << "Enter the year of discharge for " << name << " :- ";
//         cin >> y2;
//         cin.ignore();
//         dateOfDischarge.setDate(d2, m2, y2);
//     }

//     else
//     {
//         dateOfDischarge.setDate(0, 0, 0);
//     }
// }


// void Hospital :: displayPatient(void)
// {
//     cout << "Patient Name : " << name << endl;
//     cout << "Disease : " << disease << endl;

//     cout << "Date of Admission : ";
//     dateOfAdmission.displayDate();

//     if (dateOfDischarge.day == 0 && dateOfDischarge.month == 0 && dateOfDischarge.year == 0)
//     {
//         cout << "This patient is not yet Discharged !" << endl;
//     }

//     else
//     {
//         cout << "Date of Discharge : ";
//         dateOfDischarge.displayDate();
//     }
// }


// void Date :: setDate(int d, int m, int y)
// {
//     if (d > 31 || d < 0 || m > 12 || m < 0)
//     {
//         cout << "Enter Correct input !" << endl;
//         day = month = year = 0;
//     }

//     else
//     {
//         day = d;
//         month = m;
//         year = y;
//     }
// }


// void Date :: displayDate(void)
// {
//     cout << (day < 10 ? "0" : "") << day << "/" << (month < 10 ? "0" : "") << month << "/" << year << endl;
// }


// int main()
// {
//     int num, d, m, y;

//     cout << "Enter the number of patients in the Hospital :- " << endl;
//     cin >> num;

//     Hospital* Patients = new Hospital[num];

//     cout << "Taking Input Of the Patients..." << endl;

//     for (int i = 0; i < num; i++)
//     {
//         Patients[i].input();
//     }
    
//     cout << "Displaying Patients." << endl;

//     for (int i = 0; i < num; i++)
//     {
//         Patients[i].displayPatient();
//     }

//     delete[] Patients; 
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Serial
// {
//     int serialCode;
//     string title;
//     float duration;
//     int noOfEpisodes;

// public :
//     Serial()
//     {
//         duration = 30;
//         noOfEpisodes = 10;
//     }

//     void newSerial(void)
//     {
//         cout << "Enter the value of Serial Code :- ";
//         cin >> serialCode;

//         cout << "Enter the value of Serial Title :- ";
//         cin.ignore();
//         getline(cin, title);
//     }

//     void otherEntries(float dur, int noe)
//     {
//         duration = dur;
//         noOfEpisodes = noe;
//     }

//     void dispData(void)
//     {
//         cout << "Information for " << title << " Serial :- " << endl;
//         cout << "Name :- " << title << endl;
//         cout << "Serial Code :- " << serialCode << endl;
//         cout << "Duration :- " << duration << " minutes" << endl;
//         cout << "Number of Episodes :- " << noOfEpisodes << endl;
//     }
// };


// int main()
// {
//     float dur;
//     int noe;
//     Serial S1, S2;

//     S1.newSerial();
//     S1.dispData();

//     S2.newSerial();
//     cout << "Enter the Duration and Number of Episodes in this series :- " << endl;
//     cin >> dur >> noe;
//     S2.otherEntries(dur, noe);
//     S2.dispData();
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }







// #include <iostream>

// using namespace std;


// struct name
// {
//     char first[40];
//     char mid[40];
//     char last[60];
// };


// struct phone
// {
//     char area[5];
//     char exch[5];
//     char numb[7];
// };


// class P_rec;

// class Name
// {
//     name u_name;

// public :
//     friend class P_rec;
//     Name()
//     {
//         cout << "Enter your first name : " << endl;
//         cin.getline(u_name.first, 40);

//         cout << "\nEnter you middle name (Leave empty if None) : " << endl;
//         cin.getline(u_name.mid, 40);

//         cout << "\nEnter your last name : " << endl;
//         cin.getline(u_name.last, 60);
//     }

//     void display(P_rec);
// };


// class P_rec
// {
//     phone u_phone;

// public :
//     friend class Name;

//     P_rec()
//     {
//         cout << "\n\nEnter your Area Code : " << endl;
//         cin.getline(u_phone.area, 5);

//         cout << "\nEnter the Phone EXCH Number : " << endl;
//         cin.getline(u_phone.exch, 5);

//         cout << "\nEnter your Phone number ( 6 digits ): " << endl;
//         cin.getline(u_phone.numb, 7);
//     }

//     friend void Name :: display(P_rec);
// };


// void Name :: display(P_rec p)
// {
//     cout << "\n\nThe name you entered is : " << u_name.first << " " << u_name.mid << " " << u_name.last << endl;
//     cout << "\nThe Phone details you entered are : " << p.u_phone.area << " " << p.u_phone.exch << " " << p.u_phone.numb << "\n\n" << endl;
// }


// int main()
// {
   
//     Name N1;
//     P_rec P1;
    
//     N1.display(P1);
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }







// #include<iostream> 
// #include <string>
// using namespace std;

// class Student {
// private:
//     int roll_no;
//     string name;
//     string class_st;
//     float marks[5];    // Array to store marks for 5 subjects
//     float percentage;

//     // Private member function to calculate the percentage
//     void Calculate() {
//         float total = 0;
//         for (int i = 0; i < 5; ++i) {
//             total += marks[i];
//         }
//         percentage = (total / 500) * 100;  // Assuming each subject is out of 100
//     }

// public:
//     // Function to read the student's marks and calculate the percentage
//     void Readmarks() {
//         cout << "Enter Roll No: ";
//         cin >> roll_no;
//         cin.ignore();  // To ignore the newline character left in the input buffer

//         cout << "Enter Name: ";
//         getline(cin, name);

//         cout << "Enter Class: ";
//         getline(cin, class_st);

//         cout << "Enter marks for 5 subjects (out of 100 each): " << endl;
//         for (int i = 0; i < 5; ++i) {
//             cout << "Subject " << i + 1 << ": ";
//             cin >> marks[i];
//         }

//         // Calculate percentage after reading marks
//         Calculate();
//     }

//     // Function to display the student's data
//     void Displaydata() {
//         cout << "Student Details:" << endl;
//         cout << "Roll No: " << roll_no << endl;
//         cout << "Name: " << name << endl;
//         cout << "Class: " << class_st << endl;
//         cout << "Marks in 5 subjects: ";
//         for (int i = 0; i < 5; ++i) {
//             cout << marks[i] << " ";
//         }
//         cout << endl;
//         cout << "Percentage: " << percentage << "%" << endl;
//     }
// };

// int main() {
//     Student s;

//     // Reading the marks and calculating percentage
//     s.Readmarks();

//     // Displaying the data
//     s.Displaydata();
//     cout<<"vakul mittal IT-1"<<endl;

//     return 0;
// }    







// #include <iostream>
// using namespace std;

// class ClassA; // Forward declaration of ClassA

// class ClassB {
// private:
//     int numB;

// public:
//     // Constructor to initialize numB
//     ClassB(int b) : numB(b) {}

//     // Friend function declaration to find the greatest number
//     friend int findGreatest(ClassA, ClassB);
// };

// class ClassA {
// private:
//     int numA;

// public:
//     // Constructor to initialize numA
//     ClassA(int a) : numA(a) {}

//     // Friend function declaration to find the greatest number
//     friend int findGreatest(ClassA, ClassB);
// };

// // Friend function definition to compare numbers from both classes
// int findGreatest(ClassA objA, ClassB objB) {
//     if (objA.numA > objB.numB)
//         return objA.numA;
//     else
//         return objB.numB;
// }

// int main() {
//     ClassA objA(20);   // Creating object of ClassA with value 20
//     ClassB objB(10);   // Creating object of ClassB with value 10

//     cout << "The greatest number is: " << findGreatest(objA, objB) << endl;

//     return 0;
// }







// #include <iostream>
// using namespace std;

// class Date {
// private:
//     int day, month, year;

//     // Function to check if a year is a leap year
//     bool isLeapYear(int year) {
//         return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//     }

//     // Function to return the number of days in a month
//     int daysInMonth(int month, int year) {
//         if (month == 2) {
//             return isLeapYear(year) ? 29 : 28; // February has 28 or 29 days
//         }
//         else if (month == 4 || month == 6 || month == 9 || month == 11) {
//             return 30; // April, June, September, November have 30 days
//         }
//         return 31; // All other months have 31 days
//     }

// public:
//     // Constructor to initialize date
//     Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

//     // Overload the unary increment operator (prefix)
//     Date& operator++() {
//         day++;
//         if (day > daysInMonth(month, year)) {
//             day = 1;
//             month++;
//             if (month > 12) {
//                 month = 1;
//                 year++;
//             }
//         }
//         return *this;
//     }

//     // Overload the unary increment operator (postfix)
//     Date operator++(int) {
//         Date temp = *this; // Copy current date
//         ++(*this);         // Use prefix increment
//         return temp;       // Return old value
//     }

//     // Display function to print the date
//     void display() {
//         cout << day << "/" << month << "/" << year << endl;
//     }
// };

// int main() {
//     Date today(31, 12, 2023); // December 31, 2023

//     cout << "Today's date: ";
//     today.display();

//     ++today; // Prefix increment: increments the date by one day
//     cout << "Date after prefix increment (++today): ";
//     today.display();

//     today++; // Postfix increment: increments the date by one day
//     cout << "Date after postfix increment (today++): ";
//     today.display();

//     return 0;
// }








// #include <iostream>
// #include <cmath> // For sqrt() function used in Heron's formula
// using namespace std;

// class Shape {
// public:
//     // Function to calculate the area of a triangle using Heron's formula
//     double area(double a, double b, double c) {
//         double s = (a + b + c) / 2; // Semi-perimeter
//         return sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
//     }

//     // Function to calculate the area of a rectangle
//     double area(double length, double breadth) {
//         return length * breadth;
//     }

//     // Function to calculate the area of a square
//     double area(int side) {
//         return side * side;
//     }

//     // Function to calculate the area of a circle
//     double area(float radius) {
//         return 3.14159 * radius * radius; // πr²
//     }
// };

// int main() {
//     Shape shape; // Create an object of class Shape

//     // Calculate the area of a triangle using Heron's formula (a = 3, b = 4, c = 5)
//     double triangle_area = shape.area(3.0, 4.0, 5.0);
//     cout << "Area of the triangle: " << triangle_area << endl;

//     // Calculate the area of a rectangle (length = 5, breadth = 7)
//     double rectangle_area = shape.area(5.0, 7.0);
//     cout << "Area of the rectangle: " << rectangle_area << endl;

//     // Calculate the area of a square (side = 4)
//     double square_area = shape.area(4);
//     cout << "Area of the square: " << square_area << endl;

//     // Calculate the area of a circle (radius = 6)
//     double circle_area = shape.area(6.0f);
//     cout << "Area of the circle: " << circle_area << endl;

//     return 0;
// }







// #include <iostream>
// #include <cstring>  // For strcpy, strlen, strcmp, etc.
// using namespace std;

// class String {
// private:
//     char* str; // Dynamic char array to store the string
//     int length; // To store the length of the string

// public:
//     // Default constructor to initialize an empty string
//     String() {
//         str = new char[1];
//         str[0] = '\0';
//         length = 0;
//     }

//     // Constructor to initialize string with a C-string
//     String(const char* s) {
//         length = strlen(s);
//         str = new char[length + 1];
//         strcpy(str, s);
//     }

//     // Copy constructor
//     String(const String& other) {
//         length = other.length;
//         str = new char[length + 1];
//         strcpy(str, other.str);
//     }

//     // Destructor to release allocated memory
//     ~String() {
//         delete[] str;
//     }

//     // Overload + operator to concatenate two strings
//     String operator+(const String& other) {
//         String temp;
//         temp.length = length + other.length;
//         temp.str = new char[temp.length + 1];
//         strcpy(temp.str, str);
//         strcat(temp.str, other.str);
//         return temp;
//     }

//     // Overload = operator to copy one string to another
//     String& operator=(const String& other) {
//         if (this != &other) { // Avoid self-assignment
//             delete[] str; // Delete old string
//             length = other.length;
//             str = new char[length + 1];
//             strcpy(str, other.str);
//         }
//         return *this;
//     }

//     // Overload <= operator to compare two strings
//     bool operator<=(const String& other) {
//         return strcmp(str, other.str) <= 0; // Compare using strcmp
//     }

//     // Function to display the length of the string
//     int getLength() const {
//         return length;
//     }

//     // Function to convert the string to lowercase
//     void toLower() {
//         for (int i = 0; i < length; i++) {
//             str[i] = tolower(str[i]);
//         }
//     }

//     // Function to convert the string to uppercase
//     void toUpper() {
//         for (int i = 0; i < length; i++) {
//             str[i] = toupper(str[i]);
//         }
//     }

//     // Function to display the string
//     void display() const {
//         cout << str << endl;
//     }
// };

// int main() {
//     // Creating string objects
//     String s1 = "Hello";
//     String s2 = "World";

//     // Concatenating strings using overloaded + operator
//     String s3 = s1 + s2;
//     cout << "Concatenated string: ";
//     s3.display();

//     // Using the = operator to copy strings
//     String s4;
//     s4 = s1;
//     cout << "Copied string (s4 = s1): ";
//     s4.display();

//     // Comparing strings using the <= operator
//     if (s1 <= s2) {
//         cout << s1.getLength() << " is less than or equal to " << s2.getLength() << endl;
//     } else {
//         cout << s1.getLength() << " is greater than " << s2.getLength() << endl;
//     }

//     // Displaying the length of a string
//     cout << "Length of s1: " << s1.getLength() << endl;

//     // Converting string to lowercase
//     s1.toLower();
//     cout << "s1 in lowercase: ";
//     s1.display();

//     // Converting string to uppercase
//     s1.toUpper();
//     cout << "s1 in uppercase: ";
//     s1.display();

//     return 0;
// }
