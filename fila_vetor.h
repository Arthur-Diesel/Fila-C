#define N 50

typedef struct fila {
    int n;
    int primeiro;
    float vet[N];
} FILA;

FILA* fila_criar(void);
void fila_inserir(FILA* f, float info);
float fila_remover(FILA* f);
int fila_vazia(FILA* f);
void fila_liberar(FILA* f);
void fila_imprimir(FILA* f);