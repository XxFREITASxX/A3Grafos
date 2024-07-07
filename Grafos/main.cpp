#include <iostream>

using namespace std;

int main() {

  bool loop = true;
  do {

    int op;

    cout << "\n___________________________________" << endl;
    cout << "|                                 |" << endl;
    cout << "|              MENU               |" << endl;
    cout << "|    GERENCIADOR DE ATIVIDADES    |" << endl;
    cout << "|                                 |" << endl;
    cout << "|  (1) Cadastrar                  |" << endl;
    cout << "|  (2) Consultar                  |" << endl;
    cout << "|  (3) Imprimir                   |" << endl;
    cout << "|  (4) Remover                    |" << endl;
    cout << "|  (5) Atualizar                  |" << endl;
    cout << "|  (0) Sair                       |" << endl;
    cout << "|_________________________________|" << endl << endl;
    cin >> op;

    switch (op) {

    case 1: {

      int numero;
      char inserir;
      string nome;
      int duracaoEstimada;
      char resposta;

      cout << "\nInsira o nome da atividade: " << endl;
      cin >> nome;
      cout << "\nInsira a duração estimada da atividade(Em Horas): " << endl;
      cin >> duracaoEstimada;
      cout << "\nDeseja inserir uma dependencia? (S/N)" << endl;
      cin >> resposta;
      if (resposta == 'S' || resposta == 's'){
        do {
          cout << "\nInsira um numero" << endl;
          cin >> numero;

          cout << "Deseja inserir outro número? (S/N)" << endl;
          cin >> inserir;

        } while (inserir == 'S' || inserir == 's');
      }

      cout << "Atividade cadastrada com sucesso!" << endl;
      break;
    }
    case 2:

      int id;
      cout << "ID da Atividade Desejada: ";
      cin >> id;

       if ( 0 != nullptr) {

          cout << "\nNome: " << endl;
          cout << "Duração Estimada: " << endl;

      } else {

          cout << "\nAtividade não encontrada." << endl;

      }

      break;

    case 3:
 
      break;

    case 4:

      break;

    case 0:

      return 0;

    default:

      break;
    }
  } while (loop);
}