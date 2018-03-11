typedef struct _f1{
	//frame pointer - ambiente da fun��o chamante
	struct _f1* parent;	
	//espa�o de endere�amento para o retorno das funcoes
	void* retorno[64];		
	//espa�o de endere�amento para vari�veis locais
	void* locals[64];	
	//espa�o de endere�amento para argumentos de fun��es chamadas
	void* outgoing[32];	
	//endere�o do c�digo na fun��o chamante
	int return_address;	
	int slot_retorno;
}frame;
