#include <iostream>
using namespace std;

     string nome;
     int idade;
     char sangue;

int main(){
   system("cls");
   cout << "################## EXAME DE SANGUE ##################";
   
   int numP;
   cout << "\n\n" << "quantas pessoas sao para fazer o exame?";
   cout << "\n" << "numero: ";
   cin >> numP;
   cout << endl;
        
        voltar: // 1▪️ checkpoint aqui 
      for (int i = 1; i <= numP; i++)
      {
         
        cout << "--------------------------------\n";
        cout << "digite o nome: ";
        cin >> nome;
        cout << "idade: ";
        cin >> idade;
        
        cout << "sangue: ";
        cin >> sangue;
        if((sangue == 'A' || sangue == 'B' || sangue == 'AB' || sangue == 'O')){
         continue;
        }else{
         cout << "tipo sanguineo incorreto!!!"<<endl;

         goto voltar; /*1▪️ essa função serve para voltar a um ponto especifico,
                       é como um checkpoint 😊
                       */ 
                      
        }
        cout << "--------------------------------\n";
      
      }
}

