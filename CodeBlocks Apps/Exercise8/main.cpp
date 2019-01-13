#include <iostream>

using namespace std;


class Ihminen{

	private:
		string humanName_;
		int number_;
	    Ihminen *d;
	public:
		Ihminen();
		~Ihminen();
		Ihminen(string humanName);
		void KavelytaKoiraa(int number);
		void OtaVastuuKoirasta(Ihminen *d);


};

Ihminen::Ihminen(){}

Ihminen ::~Ihminen(){}

Ihminen ::Ihminen(string humanName): humanName_(humanName){
	cout << humanName_ <<": Mutta eihän minulla ole koiraa..." << endl;
}


void Ihminen::KavelytaKoiraa(int number){
   number_ =number;
   //return number;

}


void Ihminen :: OtaVastuuKoirasta(Ihminen *d){
	d = new Ihminen(humanName_);


	}
class Koira: public Ihminen{

	private:
		string dogName_;
		int dog_num;



	public:
		Koira();
		~Koira();
		Koira(string dogName);
		void Hauku();

};

Koira::Koira(){}

Koira ::~Koira(){}

Koira ::Koira(string dogName):dogName_(dogName){


}

void Koira :: Hauku(){

	cout << dogName_ << ": Hau hau! Olen kävellyt" << dog_num << "kilometriä." << endl;
}


int main()
{
  string koiran_nimi, ihmisen_nimi;
  cout << "Anna ihmisen nimi: ";
  cin >> ihmisen_nimi;
  cout << "Anna koiran nimi: ";
  cin >> koiran_nimi;

  cout << endl;

  Ihminen* isanta = new Ihminen(ihmisen_nimi);
  Koira* rekku = new Koira(koiran_nimi);

  isanta->KavelytaKoiraa(7);
  rekku->Hauku();

  isanta->OtaVastuuKoirasta(rekku);
  isanta->KavelytaKoiraa(7);

  rekku->Hauku();

  return 0;
}
