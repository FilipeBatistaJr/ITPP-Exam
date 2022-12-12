#include <iostream>

using namespace std;

int main()
{
    cout << "ITPP TEST FILIPE BATISTA LGYDPZ146" << endl;
    cout << "QUESTION 2" << endl;

    //Delcare variables
    double commision;
    double paye;
    double uif;
    double gross_sal;
    double net_sal;
    string empl_name;
    int prop_sales;
    double deductions;

    //Displays your Name, Gross Salary and Sales
    cout << "Please enter your name" << endl;
    cin >> empl_name;
    cout << "Please enter your Gross Salary" << endl;
    cin >> gross_sal;
    cout << "Please enter your Property Sales for this month" << endl;
    cin >> prop_sales;

    //Determines your commission
    commision = prop_sales * 2 / 100;
    cout << "Your Commission is: R" << commision << endl;

    //Determines all your deductions
    paye = gross_sal * 12 / 100;
    uif = gross_sal * 3 / 100;
    deductions = paye + uif;
    cout << "This is your total deductions: R" << deductions << endl;

    //Determines your Net Salary
    net_sal = gross_sal - deductions;
    cout << "This is your Net Salary: R" << net_sal << endl;

    cout << "QUESTION 3" << endl;

    //Declare variables 
    string student_name;
    int exam_mark;
    int test_mark;
    int final_mark;
    double test_perc;
    double exam_perc;

    //Displays your Name, Exam Mark and Test Mark
    cout << "Please enter your Student Name" << endl;
    cin >> student_name;
    cout << "Please enter your Exam Mark" << endl;
    cin >> exam_mark;
    cout << "Please enter your Test Mark" << endl;
    cin >> test_mark;

    //Determines your final mark
    test_perc = test_mark * 50 / 100;
    exam_perc = exam_mark * 50 / 100;
    final_mark = test_perc + exam_perc;

    //Displays your Final mark
    cout << "This is your Final Mark as a percentage: " << final_mark << endl;

    cout << "QUESTION 5" << endl;
    
    //Declare variables
    double weight;
    double height;
    double bmi;

    //Displays your Height and Weight 
    cout << "Please enter your Weight" << endl;
    cin >> weight;
    cout << "Please enter your Height in Metres" << endl;
    cin >> height;

    //Determines your BMI
    bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << endl;

    cout << "QUESTION 6" << endl;

    //Declare variables
    double price1;
    double price2;
    double price3;
    double discount_perc;
    double discounted_price1;
    double discounted_price2;
    double discounted_price3;

    //Displays the Product Prices and Discount Percentage
    cout << "Please enter first price" << endl;
    cin >> price1;
    cout << "Please enter second price" << endl;
    cin >> price2;
    cout << "Please enter third price" << endl;
    cin >> price3;
    cout << "Please enter a discount percentage" << endl;
    cin >> discount_perc;
    
    //Determines the Discounted Prices
    discounted_price1 = price1 * discount_perc / 100;
    cout << "This is the first discounted price: R" << discounted_price1 << endl;
    discounted_price2 = price2 * discount_perc / 100;
    cout << "This is the second discounted price: R" << discounted_price2 << endl;
    discounted_price3 = price3 * discount_perc / 100;
    cout << "This is the third discounted price: R" << discounted_price3 << endl;

    cout << "QUESTION 8" << endl;

    //Declare variables
    double area;
    double radius;
    double circumference;
    
    //Displays the Radius
    cout << "Please enter a value for Radius" << endl;
    cin >> radius;

    //Determines the area
    area = 3.14 * (radius * radius);
    cout << "This is the answer to area: " << area << endl;

    //Determines the circumference
    circumference = 2 * (3.14 * radius);
    cout << "This is the answer to circumference: " << circumference << endl;

    cout << "QUESTION 9" << endl;

    //Declare variables
    int distance;
    int speed;
    double time;

    //Displays your Distance and Speed
    cout << "Please enter the Distance you will travel" << endl;
    cin >> distance;
    cout << "Please enter the speed you will be driving at" << endl;
    cin >> speed;

    //Determines the time it will take
    time = distance / speed;
    cout << "This is how long it will take you (in minutes and seconds): " << time << endl;

   
    return 0;


}