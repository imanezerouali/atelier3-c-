
  #include <iostream>
  using namespace std;
class Complex {
public:
double r; //la partie reelle
double i; //la partie imaginaire 
public:
void add(Complex, Complex);
void subtract(Complex, Complex);
void print();
void multip(Complex, Complex);
};
//pour la multiplication

void Complex::multip(Complex op1,Complex op2){
	r=op1.r*op2.r - op1.i*op2.i;
	i=op1.r*op2.i +op1.i*op2.r;
}
//pour l'addition
void Complex::add (Complex op1, Complex op2) {
r = op1.r + op2.r;
i = op1.i + op2.i;
}
//pour la soustraction
void Complex::subtract (Complex op1, Complex op2) {
r = op1.r - op2.r;
i = op1.i - op2.i;
}
//pour l'affichag
void Complex::print () {
	if(i>=0){
	
cout<< " "<<r<<"+ i"<< i <<endl;}
else
cout<< " "<<r<<"- i"<< -i <<endl;
}


 int main () {
Complex operand1, operand2, result;
cout << "\n entrez la partie reelle  du premier nombre complexe: " << endl;
cin >> operand1.r;
cout << "entrez la partie imaginaire du 1er nombre complexe  : " << endl;
cin >> operand1.i;
cout << "entrez la partie reelle  du deuxieme nombre complexe:  " << endl;
cin >> operand2.r;
cout << "entrez la partie imaginaire   du deuxieme nombre complexe: " << endl;
cin >> operand2.i;

cout << "\n la somme est : ";
result.add(operand1, operand2);
result.print();
cout << "\n la difference est : ";
result.subtract(operand1, operand2);
result.print();
cout<<"\n le produit est :";
result.multip(operand1,operand2);
result.print();
}
