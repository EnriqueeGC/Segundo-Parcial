#pragma once
#include<iostream>
#include<mysql.h>
using namespace std;
class conexionBD{
private: MYSQL* conectar;
public : 
	void abir_conexion(){
		conectar = mysql_init(0);
		conectar = mysql_real_connect(conectar, "localhost", "parcial_2", "123parcial2@", "parcial_2", 3306, NULL, 0);
	}
	MYSQL* getConectar() {
		return conectar;
	}
	void cerrar_conexion() {
		mysql_close(conectar);
	}

};

