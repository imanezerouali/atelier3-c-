#include <iostream>
using namespace std;
     //definir la classe Myclass&& declarer l'instructeur et le desctructeur 
class Myclass{
	string name;
	public:
		//les methods
		Myclass();
		~Myclass();
};
// affichage d'un msg sur un instructeur 
Myclass::Myclass(){
	cout<<"entrez votre nom "<<endl;
	cin>>name;
	cout<<"bonjour "<<name<<endl;
}
Myclass::~Myclass(){
	cout<<"au revoir "<<name;
	
} // creer un obj 
int main(void){
	Myclass e1;
	return 0;
}
