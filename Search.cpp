#include <iostream>
#include<string.h>

using namespace std;

int main(int nbArguments, char* arguments[])
{    switch(nbArguments){
        case(1):{
            cout << "Nombre d'arguments invalide!"; return 0;
        }

        case(2):{
                if ((strcmp(arguments[1],"index")==0) ||(strcmp(arguments[1],"add")==0)) {
                    cout << "Missing path";return 0;

            }
            else if (strcmp(arguments[1],"delete")==0){
                cout << "File name missing";return 0;
            }

        }
    }
    return 0;
}
