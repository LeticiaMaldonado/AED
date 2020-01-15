const int LENGTH = 50;

struct TCola
{
	int cola[LENGTH];
	unsigned cardinal=0;
};

void InicializarCola (TCola&);
void Queue(TCola&, int);
int Dequeue(TCola&);
int Get(TCola, unsigned);
bool EsColaVacia(TCola);
void EnviarColaaCout(TCola);
