#include <iostream>
using namespace std;
//classe personne 
class Person{
    private:
    string nom;
    string prenom;
    string date;
    public:
    Person(string n,string p,string d){
        nom = n;
        prenom = p;
        date = d;
    }
    void Affiche(){
        cout<<"Person:le nom est: "<<nom<<",le prenom est: "<<prenom<<",date de naisance est: "<<date<<endl;
    }
};
//sous classe employe de la classe  person
class Employe:Person{
    private:
    int salaire;
    public:
    Employe(string n,string p,string d,int s):Person(n,p,d){
        salaire = s;
    };
    void Affiche(){
        cout<<"Employe: le salaire est: "<<salaire<<endl;
    }
};
//sous classe chef de la classe  employe 
class Chef: public Employe{
    public:
    string service;
    public:
    Chef(string n,string p,string d,int s,string ss):Employe(n,p,d,s){
        service = ss;
    };
    void Affiche(){
        cout<<"Chef: le service est: "<<service<<endl;
    }
};
// sous classe directeur de  la classe chef 
class Directeur: public Chef{
    public:
    string societe;
    public:
    Directeur(string n,string p,string d,int s,string ss,string sss):Chef(n,p,d,s,ss){
        societe = sss;
    };
    void Affiche(){
        cout<<"Directeur: le societe est: "<<societe<<endl;
    }
};

int main(){
    Person p("imane","imane","2000/12/31");
    p.Affiche();
    Employe e("chaimae","cherkaoui","2000/2/29",3000);
    e.Affiche();
    Chef c("iman","boulaiz","2000/7/31",5000,"service1");
    c.Affiche();
    Directeur d("chaimkae","bennani","2000/11/01",8000,"service2","societe1");
    d.Affiche();
};
