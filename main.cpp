#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char *argv[])
{
    int rocketSize;
    int posWhile;

    //Check
    if(argc == 3)
    {
        if((strcmp(argv[0],"rocket") == 1)||(strcmp(argv[1],"-l") == 1))
        {
          cout << "Siga la estructura de ejecucion: rocket -l [NUMERO DE FILAS] [-i]" << endl;
        }
    }
    else if(argc == 4)
    {
        if((strcmp(argv[0],"rocket") == 1)||(strcmp(argv[1],"-l") == 1)||(strcmp(argv[3],"-i") == 1))
        {
          cout << "Siga la estructura de ejecucion: rocket -l [NUMERO DE FILAS] [-i]" << endl;
        }
    }
    else
    {
        cout << "Numero de argumentos incorrecto" << endl;
        cout << "Siga la estructura de ejecucion: rocket -l [NUMERO DE FILAS] [-i]" << endl;
    }

    //Program
    rocketSize = stoi(argv[2]);
    if(argc == 3)
    {
        //Spike
        posWhile = 0;
        while(posWhile < (rocketSize - 1))
        {
            cout << " ";
            posWhile++;
        }
        posWhile = 0;
        while(posWhile < 1)
        {
            cout << "|";
            posWhile++;
        }
        posWhile = 0;
        while(posWhile < (rocketSize - 1))
        {
            cout << " ";
            posWhile++;
        }
        cout << endl;

        //Core
        for(int i=0; i < rocketSize; i++)
            {
            posWhile = 0;
            while(posWhile < (rocketSize - 1 - i))
            {
                cout << " ";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < (i * 2 + 1))
            {
                cout << "x";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < (rocketSize - 1 - i))
            {
                cout << " ";
                posWhile++;
            }
            cout << endl;
        }

        //Base
        cout << "x";
        posWhile = 0;
        while(posWhile < (rocketSize - 2))
        {
            cout << " ";
            posWhile++;
        }
        posWhile = 0;
        while(posWhile < 1)
        {
            cout << "x";
            posWhile++;
        }
        posWhile = 0;
        while(posWhile < (rocketSize - 2))
        {
            cout << " ";
            posWhile++;
        }
        cout << "x" <<endl;
    }
    else if(argc == 4)
    {
        if(strcmp(argv[3],"-i") == 0)
        {
            //Base
            cout << "x";
            posWhile = 0;
            while(posWhile < (rocketSize - 2))
            {
                cout << " ";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < 1)
            {
                cout << "x";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < (rocketSize - 2))
            {
                cout << " ";
                posWhile++;
            }
            cout << "x" <<endl;

             //Core
            for(int i=0; i < rocketSize; i++)
            {
            posWhile = 0;
            while(posWhile < i)
            {
                cout << " ";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < ((rocketSize - 1 - i) * 2 + 1))
            {
                cout << "x";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < i)
            {
                cout << " ";
                posWhile++;
            }
            cout << endl;
            }

            //Spike
            posWhile = 0;
            while(posWhile < (rocketSize - 1))
            {
                cout << " ";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < 1)
            {
                cout << "|";
                posWhile++;
            }
            posWhile = 0;
            while(posWhile < (rocketSize - 1))
            {
                cout << " ";
                posWhile++;
            }
            cout << endl;
        }
    }
	return 0;
}
