

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    srand(time(0));

    /* int a;
     a = rand() % 10;
     cout << a << endl;
     a = rand()%10;
     cout << a << endl;
     a = rand()%10;
     cout << a << endl;

     for (int i = 0; i < 15; i++)
     {
         a = rand() % 10;
         cout << a << " ";
     }

     cout << endl;

     for (int i = 0; i < 15; i++)
     {
         a = rand() % 100;
         cout << a << " ";
     }

     cout << endl;

     for (int i = 0; i < 15; i++)
     {
         a = rand() % 100+1;
         cout << a << " ";
     }

     cout << endl;

     for (int i = 0; i < 15; i++)
     {
         a = 10+rand() % 89;
         cout << a << " ";
     }

     cout << endl;


     for (int i = 0; i < 15; i++)
     {
         a = rand() % 5 + 8;
         cout << a << " ";
     }

     cout << endl;
     cout << endl;



     const int size = 10;
     int arr[size];
     for (int i = 0; i < size; i++)
     {
         arr[i] = rand() % 100;
         cout << arr[i] << " ";
     }





     cout << endl;
     cout << endl;
     cout << endl;




     const int rows = 4;
    const  int cols = 5;
    int array[rows][cols]{};


    int max;
    for (int i = 0; i < rows; i++)
    {
        max = array[i][0];
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 100;
            cout <<left<<setw(4)<< array[i][j]<<" ";
            if (array[i][j]>max)
            {
                max = array[i][j];
            }
        }
        cout << "max element in " << i << " row is " << max << endl;
        cout << endl;
    }

    cout << endl;*/

    //int array1[3][3] = { {1,2,3},{4,5,6},{7,8,9 } };
    //int array1[3][3] = { 1,2,3,4, 5,65,67 };

    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array1[i][j] << " ";
        }
        cout << endl;
    }*/





    //1
    //const int rows = 4;
    //const  int cols = 3;
    //int array[rows][cols]{};
    //
    //int amount=0;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 10;
    //        cout << left << setw(4) << array[i][j] << " ";
    //        if (array[i][j] != 0)
    //        {
    //            ++amount;
    //        }
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "amount of numbers that dont equal 0= " << amount << endl;



    //2


    //const int rows = 3;
    //const  int cols = 3;
    //int array[rows][cols]{};
    //
    //int amount=0;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 10;
    //        cout << left << setw(4) << array[i][j] << " ";
    //        if (array[i][j] == 0)
    //        {
    //            ++amount;
    //        }
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "amount of numbers that equal 0= " << amount << endl;


    //3


    //const int rows = 7;
    //const  int cols = 3;
    //int array[rows][cols]{};
    //
    //int amount=0;
    //int amount1 = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = -20+rand() % 40;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j] > 12)
    //        {
    //            amount1++;
    //        }
    //        if (array[i][j]<12)
    //        {
    //            amount++;
    //        }
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "amount of numbers that are smaller than 12= " << amount << endl;
    //cout << "amount of numbers that are biggest than 12= " << amount1 << endl;



    //4





    //const int rows = 4;
    //const  int cols = 5;
    //int array[rows][cols]{};
    //
    //int amount=0;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = -10+rand() % 50;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j] > 0)
    //        {
    //            amount++;
    //        }
    //        
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "amount of numbers that are bigger tahn 0= " << amount << endl;

    //5


    //const int rows = 5;
    //const  int cols = 4;
    //int array[rows][cols]{};
    //
    //unsigned int amount=1;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = -10+rand() % 50;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j] > 0)
    //        {
    //            amount*=array[i][j];
    //        }
    //        
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "dobutok= " << amount << endl;

    //6



    //const int rows = 5;
    //const  int cols = 4;
    //int array[rows][cols]{};
    //
    //int amount = 1;
    //for (int i = 0; i < rows; i++)
    //{
    //
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = -10 + rand() % 50;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j] < 0)
    //        {
    //            amount *= array[i][j];
    //        }
    //
    //    }
    //
    //    cout << endl;
    //}
    //cout << "dobutok of negative= " << amount << endl;





    //7

    //const int rows = 4;
    //const  int cols = 4;
    //int array[rows][cols]{};
    //
    //int amount = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] =rand() % 50;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j]%6== 0)
    //        {
    //            amount++;
    //        }
    //
    //    }
    //
    //    cout << endl;
    //}
    //cout << "numbers %6==0 =  " << amount << endl;



    //8-9


    //const int rows = 5;
    //const  int cols = 6;
    //int array[rows][cols]{};
    //
    //
    //int max = array[0][0];
    //
    //
    //
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        
    //        array[i][j] = rand() % 50;
    //        cout <<left << setw(4) << array[i][j] << " ";
    //       
    //    }
    //    cout << endl;
    //}
    //
    //int min = array[0][0];
    //
    //for (int i = 0; i < rows; i++)
    //{
    //    for (int j = 0; j < cols; j++)
    //    {
    //        if (array[i][j] > max)
    //        {
    //            max = array[i][j];
    //
    //        }
    //        if (array[i][j] < min)
    //        {
    //            min = array[i][j];
    //
    //        }
    //    }
    //}
    //cout << "max element is " << max << endl;
    //cout << "min element is " << min << endl;
    //cout << endl;



    //10

    //const int rows = 5;
    //const  int cols = 4;
    //int array[rows][cols]{};
    //
    //int amount = 0;
    //for (int i = 0; i < rows; i++)
    //{
    //
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = -10 + rand() % 40;
    //        cout << right << setw(6) << array[i][j] << " ";
    //        if (array[i][j] < 0)
    //        {
    //            amount += array[i][j];
    //        }
    //
    //    }
    //
    //    cout << endl;
    //}
    //cout << "suma of negative= " << amount << endl;





    //2.1



    //const int rows = 3;
    //const  int cols = 4;
    //int array[rows][cols]{};
    //
    //int amount=0;
    //for (int i = 0; i < rows; i++)
    //{
    //    
    //    for (int j = 0; j < cols; j++)
    //    {
    //        array[i][j] = rand() % 10;
    //        cout << left << setw(4) << array[i][j] << " ";
    //        if (array[i][j] == 0)
    //        {
    //            ++amount;
    //        }
    //    }
    //    
    //    cout << endl;
    //}
    //cout << "amount of numbers that  equal 0= " << amount << endl;



    //2.2




//a
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//            if (j>i)
//            {
//                cout << array[i][j] << " ";
//            }
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//б
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//            if (j<i)
//            {
//                cout << array[i][j] << " ";
//            }
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//в
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//
//            if (j > i && i + j < cols - 1)
//            {
//                cout << array[i][j] << " ";
//            }
//            
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//г
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//
//            if (i > j && i + j > cols - 1)
//            {
//                cout << array[i][j] << " ";
//            }
//            
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;


//д
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//
//            if ((i < j and i + j < cols - 1))
//            {
//                cout << array[i][j] << " ";
//            }
//            else if (i >= j and i + j >= cols - 1)
//            {
//                cout << array[i][j] << " ";
//            }
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//e
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//
//            if (i <= j and i + j >= cols - 1)
//                		{
//                cout << array[i][j] << " ";
//                		}
//                
//                		else if (i >= j and i + j <= cols - 1)
//                		{
//                cout << array[i][j] << " ";
//                		}
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//ж
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//            if (i > j && i + j < cols - 1) {
//                cout << array[i][j] << " ";
//            }
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//з
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (array[i][j] > max)
//            {
//                max = array[i][j];
//            }
//
//
//            if (i <= j and i + j >= cols - 1)
//                		{
//                cout << array[i][j] << " ";
//                		}
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;
//
// 
//и
//const int rows = 10;
//    const  int cols = 10;
//    int array[rows][cols]{};
//    
//    int max = array[0][0];
//
//    int amount=0;
//    for (int i = 0; i < rows; i++)
//    {
//        for (int j = 0; j < cols; j++)
//        {
//            array[i][j] = rand() % 10;
//
//            if (i + j < cols - 1)
//                		{
//                cout << array[i][j] << " ";
//                		}
//
//
//           
//            else
//            {
//                cout << "  ";
//            }
//        }
//        cout << endl;
//    }
//
//    cout << "max element is " << max << endl;

//к
const int rows = 10;
    const  int cols = 10;
    int array[rows][cols]{};
    
    int max = array[0][0];

    int amount=0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 10;

            if (i + j > cols - 1)
                		{
                cout << array[i][j] << " ";
                		}


           
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "max element is " << max << endl;








}