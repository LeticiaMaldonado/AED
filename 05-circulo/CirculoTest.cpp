#include <assert.h>
#include "circulo.h"

main ()
{
	assert (CrearCirculo(0,0,10).x == 0);
	assert (CrearCirculo(0,0,10).y == 0);
	assert (CrearCirculo(0,0,10).radio == 10);
	
	assert (ObtenerCuadrante(CrearCirculo(12,12,2)) == PrimerCuadrante);
	assert (ObtenerCuadrante(CrearCirculo(-12,12,2)) == SegundoCuadrante);
	assert (ObtenerCuadrante(CrearCirculo(-12,-12,2)) == TercerCuadrante);
	assert (ObtenerCuadrante(CrearCirculo(12,-12,2)) == CuartoCuadrante);
	assert (ObtenerCuadrante(CrearCirculo(0,0,2)) == Origen);
	
	assert (CuadranteToString(PrimerCuadrante) == "Primer Cuadrante");
	assert (CuadranteToString(SegundoCuadrante) == "Segundo Cuadrante");
	assert (CuadranteToString(TercerCuadrante) == "Tercer Cuadrante");
	assert (CuadranteToString(CuartoCuadrante) == "Cuarto Cuadrante");
	assert (CuadranteToString(Origen) == "Origen de Coordenadas");
}
