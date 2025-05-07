// ArchivoObras.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jaychael Colon
//Mayo 13, 2022

//Debe realizar un archivo de texto llamado obras.txt en donde almacenará información
//acerca de las obras pictóricas catalogadas de un museo.Para cada obra se guardan los
//siguientes datos :
// Número de catálogo(entero positivo)
// Título de la obra(cadena)
// Nombre del pintor(cadena)
// Escuela del pintor(Española, Flamenca, Italiana, Francesa, Holandesa, Alemana o Inglesa).

//Para este programa debes diseñar un menú en donde permitas al usuario realizar
//las siguientes tareas :
//Crear
//Añadir
//Leer

//Además, en la opción de lectura del archivo debe mostrar en pantalla de una
//forma organizada utilizando tabulación los datos con encabezados y la línea de
//detalle desglosada y realizar el cálculo de totalizar por cada catálogo, obra y
//pintor

//Librerias utilizadas:

#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//Declaracion de Variables
string titulo[20];
string nombre[20];
string escuela[20];
int numcatalogo[20];


string titulo2[20];
string nombre2[20];
string escuela2[20];
int numcatalogo2[20];

int pos = 0;

int main() {
    int opcion = 10;
    while (opcion != 0) {
        // // Menu del Museo Pictorico con las opciones de crear, añadir o leer el archivo.
        cout << "Menu de Opciones  del Museo Pictorico" << endl << endl;
        cout << "Presione (1) para crear un nuevo archivo." << endl;
        cout << "Presione (2) para entrar datos al archivo." << endl;
        cout << "Presione (3) para leer los datos del archivo." << endl << endl;
        cout << "Presione (0) si desea salir del menu" << endl;
        cin >> opcion;

        ofstream newFile;

        if (opcion == 1) {
            //// Crea el Archivo para el Museo Pictorico
            cout << endl << "Archivo ha sido creado exitosamente." << endl << endl;
            cout << "-------------------------------------------------------" << endl;
        }
        else if (opcion == 2) {
            // Añadir informacion al Archivo del Museo Pictorico
            newFile.open("C:\obras.txt", ofstream::in);


            int answer = 1;

            while (answer != 0) {

                //Numero de catalogo de la obra pictorica
                cout << "Entre el numero de catalogo de la obra pictorica: " << endl;
                cin >> numcatalogo[pos];
                newFile << numcatalogo[pos] << "\n";

                //Titulo de la obra pictorica
                cout << "Entre el titulo de la obra pictorica: " << endl;
                cin >> titulo[pos];
                newFile << titulo[pos] << "\n";

                //Autor de la obra pictorica
                cout << endl << "Entre el nombre del autor de la obra pictorica :  " << endl;
                cin >> nombre[pos];
                newFile << nombre[pos] << "\n";

                //Escuela del autor de la obra pictorica
                cout << "Entre la escuela a la que pertenece el autor de la obra pictorica (Española, Flamenca, Italiana, Francesa, Holandesa, Alemana o Inglesa): " << endl;
                cin >> escuela[pos];
                newFile << escuela[pos] << "\n";



                pos += 1;
                cout << endl << "Desea sumarle otra obra pictorica al archivo? Presione (1) para Si, Presione (0) para No." << endl;
                cin >> answer;
                if (answer == 0) {
                    cout << endl << "-------------------------------------------------------" << endl;
                    newFile.close();
                }
            }
        }
        else if (opcion == 3) {
            //Imprime el archivo para ser leido por el usario con la informacion entrada
            ifstream newFile;
            newFile.open("C:\obras.txt", ios::out);

            cout << "Num. de Catalogo|\tTitulo\t|\tAutor\t|\tEscuela|" << endl; //Informacion con tabulacion

            for (int j = 0; j < pos; j++)
            {
                newFile >> numcatalogo[j];
                cout << "\t" << numcatalogo[j] << "\t|";
                newFile >> titulo[j];
                cout << "\t" << titulo[j] << "\t|";
                newFile >> nombre[j];
                cout << "\t" << nombre[j] << "\t|";
                newFile >> escuela[j];
                cout << "\t" << escuela[j] << "\t|" << endl;
            }
            
        }
        else if (opcion == 0) {
            newFile.close();

            cout << endl << "---El programa ha cerrado exitosamente.---" << endl;
            return 0;
        }
        else {
            cout << endl << "Debe seleccionar una de los opciones presentadas en el menu." << endl;
            cout << endl << "-------------------------------------------------------" << endl;
        }
    }
}