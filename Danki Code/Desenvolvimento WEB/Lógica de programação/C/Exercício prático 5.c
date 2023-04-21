int main()
{
    char nome[256];
    char sobrenome[256];
    int ano_nascimento;
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s",nome);

    printf("Qual o seu sobrenome?\n");
    scanf("%s", sobrenome);

    printf("Qual o sua data de nascimento?\n");
    scan("%s", ano_nascimento);

    printf("\nShow de bola,  %s...Qual sua idade?", nome);
    scanf("%s",&idade);

    printf("Muito bom! o %s tem %d anos", nome,idade);
    
    return 0;
}