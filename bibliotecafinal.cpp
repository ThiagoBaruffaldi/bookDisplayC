#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <graphics.h>
#include <windows.h>//declaração das bibliotecas
//estrutura que define um livro com suas especificidades
struct livro
{
    char capa[50], titulo[50], autor[50], genero[50], comentario[500],ano[5]; int nota;
};

void preencherEstante(struct livro estante[4][5]);
void mostrarCapas (struct livro linhaEstante[]);
void quebraLinha (char comentario[1000],int tamanhoMax);
int detectaLivro(int i, struct livro estante[4][5], int x, int y);
void iniciaTela(int opcao, char genero[10]);

int main()
{
    int opcao,i,j;
    char genero[25];

   //area do menu principal
    do
    {
        system("cls");
        printf("TRABALHO FINAL DE LABORATORIO DE ALGORITMO E ESTRUTURA DE DADOS\n\n");
        printf("//BIBLIOTECA EM C COM GRAPHICS.H\n//");
        printf("Desenvolvido por: Giovana Martins, Laura Monteiro e Thiago Baruffaldi\n");
        printf("========================================================================\n");
        printf("--MENU--\n");
        printf("Escolha um genero para explorar\n\n");
        printf("1) TERROR\n");
        printf("2) ROMANCE\n");
        printf("3) POESIA\n");
        printf("4) FANTASIA\n");
        printf("5) SAIR\n");
        printf("========================================================================\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1: //terror
            strcpy(genero, "Biblioteca: Terror");
            iniciaTela(opcao,genero);

            break;
        case 2: //romance
            strcpy(genero, "Biblioteca: Romance");
            iniciaTela(opcao,genero);

            break;
        case 3: //poesia
            strcpy(genero, "Biblioteca: Poesia");
            iniciaTela(opcao,genero);

            break;
        case 4: //fantasia
            strcpy(genero, "Biblioteca: Fantasia");
            iniciaTela(opcao,genero);

            break;
        case 5: //sair
            printf("Saindo...\n\n\n");
            delay(500);
            return 0;
            break;
        default:
            printf("Comando invalido, tente novamente.");
            delay(700);
        }
    }
    while(opcao!=5);
}

//função que preenche a estante com livros de Terror
void preencherEstante(struct livro estante[4][5])
{
    strcpy(estante[0][0].titulo, "O Iluminado");
    strcpy(estante[0][0].autor, "Stephen King");
    strcpy(estante[0][0].genero, "Terror");
    strcpy(estante[0][0].capa, "iluminado.jpg");
    strcpy(estante[0][0].ano, "1977");
    strcpy(estante[0][0].comentario, "Jack Torrance leva sua familia ao isolado Hotel Overlook para ser zelador no inverno.La, forcas sobrenaturais influenciam sua mente ja instavel.Seu filho Danny, com poderes psiquicos, sente a presenca maligna do lugar.O hotel revela visoes perturbadoras e historias de violencia.Jack enlouquece, colocando a vida da familia em risco. ");

    strcpy(estante[0][1].titulo, "It: A Coisa");
    strcpy(estante[0][1].autor, "Stephen King");
    strcpy(estante[0][1].genero, "Terror");
    strcpy(estante[0][1].capa, "it.jpg");
    strcpy(estante[0][1].ano, "1986");
    strcpy(estante[0][1].comentario, "Em Derry, criancas desaparecem misteriosamente a cada 27 anos.Um grupo de amigos enfrenta uma entidade que assume a forma de seus maiores medos.Pennywise, o palhaco dancarino, e a forma mais recorrente da criatura.Eles derrotam \"A Coisa\" quando criancas, mas ela retorna anos depois.Ja adultos, eles se reúnem para enfrentar novamente o terror. ");

    strcpy(estante[0][2].titulo, "A Casa");
    strcpy(estante[0][2].autor, "Andre Vianco");
    strcpy(estante[0][2].genero, "Terror");
    strcpy(estante[0][2].capa, "casa.jpg");
    strcpy(estante[0][2].ano, "2002");
    strcpy(estante[0][2].comentario, " Um grupo e convidado a investigar a mansao Hill House.A casa mostra-se viva, com eventos estranhos e atmosfera opressiva.Eleanor, sensivel e solitaria, se conecta profundamente com o lugar.As manifestacoes sobrenaturais aumentam, afetando o equilibrio mental dos hospedes.O horror psicologico se intensifica ate um desfecho tragico. ");

    strcpy(estante[0][3].titulo, "Assombracao");
    strcpy(estante[0][3].autor, "Joe Hill");
    strcpy(estante[0][3].genero, "Terror");
    strcpy(estante[0][3].capa, "assombracao.jpg");
    strcpy(estante[0][3].ano, "2019");
    strcpy(estante[0][3].comentario, "Uma familia descobre que sua casa e maior por dentro do que por fora.Camaras e corredores surgem misteriosamente, levando a escuridao.Exploracoes revelam um abismo sem fim e eventos inexplicaveis.A narrativa e complexa, com multiplos pontos de vista e metalinguagem.O terror cresce conforme a casa consome a sanidade de todos. ");

    strcpy(estante[0][4].titulo, "O Exorcista");
    strcpy(estante[0][4].autor, "William Peter Blatty");
    strcpy(estante[0][4].genero, "Terror");
    strcpy(estante[0][4].capa, "exorcista.jpg");
    strcpy(estante[0][4].ano, "1971");
    strcpy(estante[0][4].comentario, "A jovem Regan comeca a apresentar comportamentos estranhos e violentos.Sua mae busca explicacoes medicas e psiquiatricas, sem sucesso.Um padre, com ajuda de um exorcista experiente, e chamado para ajuda-la.Descobre-se que ela esta possuida por uma entidade demoniaca.O exorcismo e brutal e arriscado, testando fe e resistencia ate o fim. ");

//preenche a segunda parte com livros de Romance Romantico
    strcpy(estante[1][0].titulo, "Orgulho e Preconceito");
    strcpy(estante[1][0].autor, "Jane Austen");
    strcpy(estante[1][0].genero, "Romance");
    strcpy(estante[1][0].capa, "orgulhoepreconceito.jpg");
    strcpy(estante[1][0].ano, "1813");
    strcpy(estante[1][0].comentario, "Elizabeth Bennet vive em uma sociedade onde casamentos sao essenciais para estabilidade social.Ela conhece o reservado Sr. Darcy, e os dois se julgam mal a primeira vista.Com o tempo, ambos enfrentam seus proprios preconceitos.O orgulho dele e a visao critica dela criam conflitos e amadurecimento.O romance destaca temas como classe, caracter e amor verdadeiro. ");

    strcpy(estante[1][1].titulo, "Romeu e Julieta");
    strcpy(estante[1][1].autor, "William Shakespeare");
    strcpy(estante[1][1].genero, "Romance");
    strcpy(estante[1][1].capa, "romeuejulieta.jpg");
    strcpy(estante[1][1].ano, "1597");
    strcpy(estante[1][1].comentario, "Dois jovens de familias rivais, Montequio e Capuleto, se apaixonam.Apesar da paixao intensa, o odio entre as familias impede o amor.Eles se casam em segredo e fazem planos para fugir juntos.Um mal-entendido leva a morte tragica dos dois amantes.A peca e um icone do amor proibido e das consequencias do odio. ");

    strcpy(estante[1][2].titulo, "Como Eu Era Antes de Voce");
    strcpy(estante[1][2].autor, "Jojo Moyes");
    strcpy(estante[1][2].genero, "Romance");
    strcpy(estante[1][2].capa, "comoeueraantesdevoce.jpg");
    strcpy(estante[1][2].ano, "2012");
    strcpy(estante[1][2].comentario, "Louisa Clark aceita cuidar de Will Traynor, um tetraplegico amargurado.Aos poucos, eles se aproximam e ela tenta devolver-lhe a vontade de viver.Lou descobre que Will deseja realizar suicidio assistido.Entre discussoes, carinho e crescimento pessoal, nasce um forte amor. ");

    strcpy(estante[1][3].titulo, "O Sol e Para Todos");
    strcpy(estante[1][3].autor, "Harper Lee");
    strcpy(estante[1][3].genero, "Romance");
    strcpy(estante[1][3].capa, "osoleparatodos.jpg");
    strcpy(estante[1][3].ano, "1960");
    strcpy(estante[1][3].comentario, "Na decada de 1930, na cidade ficticia de Maycomb, Alabama, a jovem Scout Finch observa o mundo ao seu redor enquanto seu pai, Atticus Finch, defende um homem negro acusado injustamente de estupro. O livro aborda racismo, justica e crescimento moral atraves do olhar inocente de uma crianca. ");

    strcpy(estante[1][4].titulo, "Tudo e Rio");
    strcpy(estante[1][4].autor, "Carla Madeira");
    strcpy(estante[1][4].genero, "Romance");
    strcpy(estante[1][4].capa, "tudoerio.jpg");
    strcpy(estante[1][4].ano, "2014");
    strcpy(estante[1][4].comentario, "Em uma narrativa intensa e poetica, o livro acompanha o triangulo entre Dalva, Venancio e Lucy. O enredo atravessa perdas, traumas e perdao, explorando a complexidade das relacoes humanas. Com linguagem lirica, a historia trata da dor, do amor e da tentativa de redencao. ");

// preenche a terceira parte com livros de poesia
    strcpy(estante[2][0].titulo, "Alguma Poesia");
    strcpy(estante[2][0].autor, "Drummond, Carlos");
    strcpy(estante[2][0].genero, "Poesia");
    strcpy(estante[2][0].capa, "algumapoesia.jpg");
    strcpy(estante[2][0].ano, "1930");
    strcpy(estante[2][0].comentario, "Primeiro livro de Drummond, marca o inicio do modernismo mineiro.Reune poemas com linguagem coloquial, ironia e introspeccao.Questiona o papel do poeta e os dilemas da existencia.Traz o famoso poema No meio do caminho.Inaugura um estilo unico na poesia brasileira. ");

    strcpy(estante[2][1].titulo, "Poemas Escolhidos");
    strcpy(estante[2][1].autor, "Cecilia Meireles");
    strcpy(estante[2][1].genero, "Poesia");
    strcpy(estante[2][1].capa, "poemasescolhidos.jpg");
    strcpy(estante[2][1].ano, "1700");
    strcpy(estante[2][1].comentario, "Reune os versos mais representativos do poeta barroco baiano.Gregorio e conhecido por sua satira mordaz e critica social.Alterna entre poesia erotica, religiosa e politica.Chamado de Boca do Inferno por seu tom provocador.Suas poesias revelam o Brasil colonial com ironia e forca. ");

    strcpy(estante[2][2].titulo, "A Rosa do Povo");
    strcpy(estante[2][2].autor, "Drummond, Carlos");
    strcpy(estante[2][2].genero, "Poesia");
    strcpy(estante[2][2].capa, "arosadodpovo.jpg");
    strcpy(estante[2][2].ano, "1945");
    strcpy(estante[2][2].comentario, "Escrito durante a Segunda Guerra Mundial, une o pessoal ao politico.Drummond reflete angustias do mundo moderno e o sofrimento coletivo.A rosa simboliza esperanca, mesmo em tempos sombrios.A linguagem e mais direta, com tons sociais e existenciais.E uma das obras mais densas e humanas do autor. ");

    strcpy(estante[2][3].titulo, "Sonetos");
    strcpy(estante[2][3].autor, "Vinicius de Moraes");
    strcpy(estante[2][3].genero, "Poesia");
    strcpy(estante[2][3].capa, "sonetos.jpg");
    strcpy(estante[2][3].ano, "1595");
    strcpy(estante[2][3].comentario, "Coletanea dos sonetos mais famosos do poeta renascentista portugues.Camoes aborda amor idealizado, dor da ausencia e fugacidade do tempo.Com rigor formal, os sonetos revelam beleza e melancolia.Mistura razao e emocao com linguagem refinada.Sua obra influenciou profundamente a literatura de lingua portuguesa ");

    strcpy(estante[2][4].titulo, "Poema Sujo");
    strcpy(estante[2][4].autor, "Ferreira Gullar");
    strcpy(estante[2][4].genero, "Poesia");
    strcpy(estante[2][4].capa, "poemasujo.jpg");
    strcpy(estante[2][4].ano, "1976");
    strcpy(estante[2][4].comentario, "Escrito no exilio durante a ditadura militar brasileira.E um longo desabafo sobre memoria, identidade e politica.Gullar mistura lembrancas pessoais com o caos do pais.O poema tem tom confessional, emocional e de denuncia.E considerado um dos maiores poemas da literatura brasileira. ");

// preenche a quarta parte com livros de fantasia
    strcpy(estante[3][0].titulo, "O Senhor dos Aneis");
    strcpy(estante[3][0].autor, "J.R.R. Tolkien");
    strcpy(estante[3][0].genero, "Fantasia");
    strcpy(estante[3][0].capa, "senhor.jpg");
    strcpy(estante[3][0].ano, "1954");
    strcpy(estante[3][0].comentario, "Frodo Bolseiro recebe o Um Anel, artefato maligno de Sauron.Ele parte em uma jornada para destrui-lo no vulcao da Montanha da Perdicao.Com seus companheiros, forma a Sociedade do Anel.O livro descreve um mundo riquissimo, com elfos, anoes, magos e guerras epicas.E um marco da literatura fantastica, sobre coragem, amizade e sacrificio. ");

    strcpy(estante[3][1].titulo, "Harry Potter");
    strcpy(estante[3][1].autor, "J.K. Rowling");
    strcpy(estante[3][1].genero, "Fantasia");
    strcpy(estante[3][1].capa, "harrypotter.jpg");
    strcpy(estante[3][1].ano, "1997");
    strcpy(estante[3][1].comentario, "Harry descobre aos 11 anos que e um bruxo e vai para Hogwarts.La, faz amizades e descobre sua ligacao com o vilao Voldemort.Ele enfrenta desafios magicos e tenta impedir o roubo da Pedra Filosofal.O livro mistura magia, misterio e crescimento pessoal.Inicia a saga que marcou geracoes com temas de amor e coragem. ");

    strcpy(estante[3][2].titulo, "O Nome do Vento");
    strcpy(estante[3][2].autor, "Patrick Rothfuss");
    strcpy(estante[3][2].genero, "Fantasia");
    strcpy(estante[3][2].capa, "nomedovento.jpg");
    strcpy(estante[3][2].ano, "2007");
    strcpy(estante[3][2].comentario, "Kvothe, um lendario mago e heroi, narra sua historia de vida.Desde a infancia com artistas itinerantes ate sua entrada na Universidade.Ele busca entender os Chandrian, seres sombrios ligados a tragedia em sua vida.Com inteligencia e paixao, aprende musica, alquimia e magia.E uma fantasia rica e lirica sobre saber, dor e lenda. ");

    strcpy(estante[3][3].titulo, "Fundacao");
    strcpy(estante[3][3].autor, "Isaac Asimov");
    strcpy(estante[3][3].genero, "Fantasia");
    strcpy(estante[3][3].capa, "fundacao.jpg");
    strcpy(estante[3][3].ano, "1951");
    strcpy(estante[3][3].comentario, "O matematico Hari Seldon preve a queda do Imperio Galactico.Para preservar o conhecimento humano, cria a Fundacao.Ao longo dos seculos, crises politicas e sociais desafiam seu plano.A obra une ciencia, filosofia e historia em um universo futurista.E um classico da ficcao cientifica sobre previsibilidade e controle social. ");

    strcpy(estante[3][4].titulo, "Eragon");
    strcpy(estante[3][4].autor, "Christopher Paolini");
    strcpy(estante[3][4].genero, "Fantasia");
    strcpy(estante[3][4].capa, "eragon.jpg");
    strcpy(estante[3][4].ano, "2002");
    strcpy(estante[3][4].comentario, "Eragon, um jovem fazendeiro, encontra um ovo de dragao.Quando Saphira nasce, ele descobre ser um Cavaleiro do Dragao.Inicia uma jornada de autoconhecimento e luta contra o imperio tiranico.Com a ajuda de mentores e aliados, enfrenta perigos e magia.E uma aventura epica de coragem, fantasia e amadurecimento. ");


}

//mostra as capas dos livros na tela
void mostrarCapas (struct livro linhaEstante[])
{
    for (int i = 0; i < 5; i++)
    {
        //calcula posições para exibir as capas
        int x1 = 50 + i * 190;  // x inicial
        int y1 = 100;// Y inicial
        int x2 = x1 + 140;// Largura
        int y2 = y1 + 180;// altura

	//carrega e exibe a imagem da capa
        readimagefile(linhaEstante[i].capa, x1, y1, x2, y2);

	//exibe título e autor abaixo da capa
        outtextxy(x1, y2 + 10, linhaEstante[i].titulo);
        outtextxy(x1, y2 + 30, linhaEstante[i].autor);
    }
}

//quebra o texto do comentário em várias linhas para exibição
void quebraLinha (char comentario[1000],int tamanhoMax)
{
    int i, tamanhoTexto, ultimoEspaco, linha = 0, y = 560, linhaComeco, tamanhoParaCopiar;
    char comentarioLinha[1000];

    tamanhoTexto = strlen(comentario);
    strcpy(comentarioLinha,comentario);
    linhaComeco = 0;

    //processa o texto para quebrar em linhas
    for(i=0; i<=tamanhoTexto; i++)
    {
        if(comentario[i] == ' ')
        {
            ultimoEspaco = i;
        }
        if(i == tamanhoMax*(linha+1)|| (ultimoEspaco < i && i == tamanhoTexto))
        {
            strncpy(comentarioLinha, &comentario[linhaComeco], tamanhoParaCopiar = ultimoEspaco - linhaComeco);
            comentarioLinha[ultimoEspaco - linhaComeco] = '\0';
            y = 565 + 20 * linha;
            outtextxy(280, y, comentarioLinha);
            linha++;
            linhaComeco = ultimoEspaco + 1;
        }
    }
}

//detecta se o usuario selecionou um livro e mostra seus detalhes
int detectaLivro(int i, struct livro estante[4][5], int x, int y)
{
    int j = -1;
    char notaPath[20]; //armazenar o titulo da imagem

    //verifica qual livro foi selecionado pelo usuario
    if (x >= 50 && x <= 220 && y >= 50 && y <= 282) j = 0;
    if (x >= 240 && x <= 380 && y >= 100 && y <= 280) j = 1;
    if (x >= 430 && x <= 570 && y >= 100 && y <= 280) j = 2;
    if (x >= 620 && x <= 760 && y >= 100 && y <= 280) j = 3;
    if (x >= 810 && x <= 950 && y >= 100 && y <= 280) j = 4;

    if (j != -1) //se clicou em um livro válido
    {
        // a area de detalhes e exibição das informações do livro
        setfillstyle(SOLID_FILL, BLACK);
        bar(10, 375, 1000, 750);
        settextjustify(CENTER_TEXT, TOP_TEXT);
        outtextxy(500, 380, "Detalhes sobre o livro...");
        settextjustify(LEFT_TEXT, TOP_TEXT);
        readimagefile(estante[i][j].capa, 50, 430, 260, 720);
        outtextxy(280, 450, "Titulo: ");
        outtextxy(280, 470, "Autor(a): ");
        outtextxy(280, 490, "Ano de Publicacao: ");
        outtextxy(280, 540, "Sinopse ======================");
        outtextxy(325, 450, estante[i][j].titulo);
        outtextxy(340, 470, estante[i][j].autor);
        outtextxy(410, 490, estante[i][j].ano);
        quebraLinha(estante[i][j].comentario, 90);

	//area de avaliação de uma a cinco estrelas
        outtextxy(280, 670, "Avalie o livro de 1 a 5 estrelas:");
        sprintf(notaPath, "%destrelas.jpg", estante[i][j].nota);
        readimagefile(notaPath, 520, 660, 740, 690);

        //loop para capturar a avaliação do usuario
        while (!GetAsyncKeyState(VK_ESCAPE)) //enquanto o esc nao for pressionado
        {
            if (GetAsyncKeyState(VK_LBUTTON))//detectar o clique do botão esquerdo do mouse
            {
                delay(100);
                int clickX = mousex();
                int clickY = mousey();

                //verifica clique em estrelas
                if (clickY >= 660 && clickY <= 690 && clickX >= 520 && clickX <= 740)
                {
                    int areaLargura = 44;
                    int notaClicada = (clickX - 520) / areaLargura + 1;
                    estante[i][j].nota = notaClicada;
                    sprintf(notaPath, "%destrelas.jpg", estante[i][j].nota);//transforma a nota numa string pra poder imprimir com 'readimagefile'
                    readimagefile(notaPath, 520, 660, 740, 690);
                    printf("Redefiniu a nota do livro %s para %d.\n",estante[i][j].titulo, estante[i][j].nota);
                }
                // Se clicou fora da área das estrelas, ele vai pro loop principal
                else return 1;// sai se clicou fora das estrelas
            }

            delay(50);
        }

        return 1;
    }

    return 0; //nenhum livro selecionado
}

//inicia a interface gráfica para escolha de gênero
void iniciaTela(int opcao, char genero[10])
{
    struct livro estante[4][5];
    preencherEstante(estante);
    printf("\n\nHISTORICO DE ACOES===========\n");

    //cria janela gráfica
    initwindow(1000, 750, genero);
    settextjustify(CENTER_TEXT, TOP_TEXT);
    outtextxy(500,10,"Selecione o seu livro");
    settextjustify(LEFT_TEXT, TOP_TEXT);
    mostrarCapas(estante[opcao-1]);
    outtextxy(5,10,"[   Sair ESC   ]");
    outtextxy(5,350,
    "===========================================================================================================================");

    //loop principal
    while (1)
    {
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            closegraph();
            break;
        }

        if (GetAsyncKeyState(VK_LBUTTON))
        {
            delay(100);
            int x = mousex();
            int y = mousey();

            // Se selecionou um livro, entra no modo detalhes
            if (detectaLivro(opcao - 1, estante, x, y))
            {
                // refaz a interface após sair de detalhes
                setfillstyle(SOLID_FILL, BLACK);
                bar(10, 375, 1000, 750);
                settextjustify(CENTER_TEXT, TOP_TEXT);
                outtextxy(500, 10, "Selecione o seu livro");
                settextjustify(LEFT_TEXT, TOP_TEXT);
                mostrarCapas(estante[opcao - 1]);
                outtextxy(5, 10, "[   Sair ESC   ]");
                outtextxy(5, 350, "===========================================================================================================================");
            }
        }

        delay(50);
    }
}
