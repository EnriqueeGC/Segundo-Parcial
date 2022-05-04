#pragma once
#include<iostream>
using namespace std;
class Estudiante
{
protected: string carnet, nombres, apellidos, direccion, genero, email, fecha;
		 int telefono;
protected:
	Estudiante(string carn,string nom, string ape, string dir, string gen, string ema, string fn, int tel) {
		carnet = carn;
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		genero = gen;
		email = ema;
		fecha = fn;
		telefono = tel;
	}
	
};

