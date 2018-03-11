typedef struct _f1{
	//frame pointer - ambiente da função chamante
	struct _f1* parent;	
	//espaço de endereçamento para o retorno das funcoes
	void* retorno[64];		
	//espaço de endereçamento para variáveis locais
	void* locals[64];	
	//espaço de endereçamento para argumentos de funções chamadas
	void* outgoing[32];	
	//endereço do código na função chamante
	int return_address;	
	int slot_retorno;
}frame;
