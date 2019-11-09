//circulo.h

struct TCirculo {
	float x;
	float y;
	int radio;
};
enum TCuadrante { PrimerCuadrante, SegundoCuadrante, TercerCuadrante, CuartoCuadrante, Origen };

TCirculo CrearCirculo (float, float, int);
TCuadrante ObtenerCuadrante (TCirculo);
char* CuadranteToString (TCuadrante);


