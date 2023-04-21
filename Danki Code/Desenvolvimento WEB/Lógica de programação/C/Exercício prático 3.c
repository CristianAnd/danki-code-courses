int main ()
{
    int hora_cinema =20;
    int hora_atual = 20;

    if(hora_atual > hora_cinema + 30) {
        printf("Passou do tempo limite! Não pode entrar!");
    }else if(hora_atual < hora_cinema - 30) {
        printf("Nem abriu a porta do cinema");
    } else {
        printf("O Horário está certo, pode entrar!");
    }

    return 0;
}