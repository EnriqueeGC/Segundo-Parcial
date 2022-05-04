#pragma once
#include<mysql.h>
#include<iostream>
#include "Estudiante.h"
#include"conexionBD.h"

using namespace std;
class Persona : Estudiante {
public: Persona(string carn, string nom, string ape, string dir, string gen, string ema, string fn, int tel) : Estudiante(carn, nom, ape, dir, gen, ema, fn, tel) {
}
	  void setCarnet(string carn) { carnet = carn; }
	  void setNombres(string nom) { nombres = nom; }
	  void setApellidos(string ape) { apellidos = ape; }
	  void setDireccion(string dir) { direccion = dir; }
	  void setGenero(string gen) { genero = gen; }
	  void setEmail(string ema) { email = ema; }
	  void setTelefono(int tel) { telefono = tel; }
	  void setFecha(string fn) { fecha = fn; }

	  string getNombres() { return nombres; }
	  string getApellidos() { return apellidos; }
	  string getDireccion() { return direccion; }
	  string getGenero() { return genero; }
	  string getEmail() { return email; }
	  string getFecha() { return fecha; }
	  int getTelefono() { return telefono; }

	  void leer() {
		  int q_estado;
		  conexionBD cn = conexionBD();
		  MYSQL_ROW fila;
		  MYSQL_RES* resultado;
		  cn.abir_conexion();
		  if (cn.getConectar()) {
			  string consulta = "select * from estudiantes";
			  const char* c = consulta.c_str();
			  q_estado = mysql_query(cn.getConectar(), c);
			  if (!q_estado) {
				  resultado = mysql_store_result(cn.getConectar);
				  while(fila = mysql_fetch_row(resultado)){
					  cout << fila[0] << "-" << fila[1] << "-" << fila[2] << "-" << fila[3] << "-" << fila[4] << "-" << fila[5] << "-" << fila[6] << "-" << fila[7] << "-" << fila[8] << endl ;
				  }
			  }
			  else {
				  cout << "error al ingresar en la informacion" << endl;
			  }
		  }
		  else {
			  cout << "Error en la conexion" << endl;
		  }
		  cn.cerrar_conexion();
	  }
};
	

