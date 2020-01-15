const LENGTH = 50;

struct TLista {
	int lista[LENGTH];
	unsigned cardinal;
};

void InicializarLista(TLista&);
void Insertar(TLista&, int);
void Eliminar(TLista, unsigned);
void EnviarACout(TLista);
unsigned Buscar(TLista, int);
bool EsListaVacia(TLista);
int Get(TLista, unsigned);
