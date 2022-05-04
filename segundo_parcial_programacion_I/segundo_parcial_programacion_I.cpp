// segundo_parcial_programacion_I.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>
using namespace std;
int main()
{
	MYSQL* conectar;
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "parcial_2", "123parcial2@", "parcial_2", 3306, NULL, 0);
	if (conectar){
		cout << "La conexion fue Exitosa" << endl;
	}
	else {
		cout << "La conexion no fue Exitosa" << endl;
	}
	system("pause");
	return 0;
}

