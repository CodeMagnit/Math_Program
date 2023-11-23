#include <iostream>
using namespace std;
int main()
{
    int r, c, r1, c1, i, j;
    cout << "Enter Rows For Matrix 1" << endl;
    cin >> r;
    cout << "Enter Columns For Matrix 1" << endl;
    cin >> c;
    cout << "Enter Rows For Matrix 2" << endl;
    cin >> r1;
    cout << "Enter Columns For Matrix 2" << endl;
    cin >> c1;
    int m1[r][c], m2[r1][c1], m3[r][c];
    if (r != c1)
    {
        cout << "Product of These Matrix is not Conformable" << endl;
        cout << "Number of Rows of Matrix 1 is Equal to Column of Matrix 2" << endl;
        cout << "Try again................." << endl;
    }
    else
    {
        /*------------------- To Input Values -------------------------*/
        cout << "Enter Values of Matrix 1" << endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                cin >> m1[i][j];
        }
        cout << "Enter Values of Matrix 2" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                cin >> m2[i][j];
        }
        /*--------------------- Display Matrices-------------------------*/
        cout << "Matrix 1" << endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c; j++)
                cout << m1[i][j] << " ";
            cout << endl;
        }
        cout << "Matrix 2" << endl;
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
                cout << m2[i][j] << " ";
            cout << endl;
        }
        /*------------------------- To Product -------------------------------*/
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c1; j++)
            {
                m3[i][j]=0;
                for(int k=0; k<c;k++)
                m3[i][j]+= m1[i][k] * m2[k][j];
            }
        }
        /*----------------------  Output ---------------------------------*/
        cout<<"Product of Above Two matrices is"<<endl;
        for (i = 0; i < r; i++)
        {
            for (j = 0; j < c1; j++)
            {

                cout << m3[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}