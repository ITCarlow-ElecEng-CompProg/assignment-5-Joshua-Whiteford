 /**
 *Joshua Whiteford
 *02/10/2017
 *main.c
 *Linear Regression Calculator
 */



/**< preprocessor directives */
#include <iostream>

using namespace std;

    /**< Starting the function */
int main()
{
        /**< Setting the DataTypes */
    int n,i;
    double arrayx[100] = {0};
    double arrayy[100] = {0};
    double sumx = 0;
    double sumy = 0;
    double sumxy = 0;
    double sumx2 = 0;
    double sum2x = 0;
    double avgx = 0;
    double avgy = 0;
    double mtop = 0;
    double mbot = 0;
    double m = 0;
    double c = 0;

    /**< Title */
    cout << "Linear Regression Calculator\n" << endl;
    /**< Sending the Program into a loop that will not Continue until the Peramiters are satisfied */
    do
    {
        /**< Asking the User to Input some Data */
        cout << "How many Data points do you wish to use in this calculation? Note you can only enter a value between 1-100" << endl;
        cin  >> n ;

    }

        /**< The Peramiters That need to Be Satisfied  */
    while (n < 1 && n > 100 );

    /**< Getting the user to input the numbers to Use for the Equation */
    for (i = 0; i < n; i++)
    {
        cout << "Please enter the " << i+1 << " Values now in the Form x then y" << endl;
        cin >> arrayx[i] >> arrayy[i];
    }

    /**< A loop to get the Program to get the Sums  */
    for (i = 0; i < n; i++)
    {
        sumx = sumx + arrayx[i];
        sumy = sumy + arrayy[i];
        sumxy = sumxy + (arrayx[i]* arrayy[i]);
        sumx2 = sumx2 + (arrayx[i]*arrayx[i]);
    }
    /**< Parts of the Equation  */
    sum2x = sumx * sumx;
    avgx = sumx /n;
    avgy = sumy / n;
    mtop = n* sumxy - sumx *sumy;
    mbot = n* sumx2 -sum2x;
    m = mtop / mbot;

    /**< Displaying the Slope to the User */
    cout << "The slope of the numbers entered is " << m << endl;

    /**< Equation to Determine the C Intercept */
    c = avgy - (m * avgx);

    /**< Displaying the C intercept to the User */
    cout << "The Intercept is " << c << endl;
    return 0;
}
