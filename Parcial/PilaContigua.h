const int LENGTH = 50;

struct  TPila{
	int pila[LENGTH];
	unsigned cardinal;
};
void InicializarPila (TPila&);
void Push(TPila&, int);
int Pop(TPila&);
int Get(TPila, unsigned);
bool EsPilaVacia(TPila);
void EnviarPilaaCout(TPila);
