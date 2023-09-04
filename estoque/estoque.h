typedef struct Produto{ 
    int id;
    int quantidade;
    char nome[50];
} Produto;

void AdicionarProduto(Produto *produtos, int length);
void ListarProdutos(Produto *produtos, int length);
void EditarProdutos(Produto *produtos, int length);
void DeletarProduto();