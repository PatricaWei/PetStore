#include <iostream>
#include <string>
using namespace std;

class Pet
{
private:
   string name, type;
   long id;
   int numLimbs;

public:
   Pet();
   Pet(string name, string type, long id, int numLimbs);

   string getName();
   string getType();
   long getId();
   int getNumLimbs();

   bool setName(string str);
   bool setType(string str);
   bool setId(long num);
   bool setNumLimbs(int num);

   static const int DEFAULT_LIMBS;
};

int const Pet::DEFAULT_LIMBS = 4;

string makeACoolName(int length)
{
   string vowels = "aeiouy";
   string consonants = "bcdfghjklmnpqrstvwxz";

   string name = "";

   bool lastWasConsonant = (rand() > RAND_MAX / 2);

   for(int i=0; i < length; i++)
   {
      if(lastWasConsonant)
      {
         name += vowels[rand() % vowels.length()];
      }
      else
      {
         name += consonants[rand() % consonants.length()];
      }
      lastWasConsonant = !lastWasConsonant;
   }
   return name;
}

int main()
{
   Pet petArray[100];

   string typesOfPets[] = {"Dog", "Cat"};

   int const MAX_NAME_LENGTH = 8;

   for(int i=0; i < 100; i++)
   {
      petArray[i].setName(makeACoolName(rand() % MAX_NAME_LENGTH + 2));
      petArray[i].setType(typesOfPets[rand() % 2]);
      petArray[i].setId(i);
      petArray[i].setNumLimbs(petArray[i].DEFAULT_LIMBS);

      //cout << petArray[i].getName() << endl;
   }

   for(int i=0; i < 100; i++)
   {
      cout << "Name: " << petArray[i].getName() << endl
           << "Type: " << petArray[i].getType() << endl
           << "ID: " << petArray[i].getId() << endl
           << "Number of Limbs: " << petArray[i].getNumLimbs() << endl << endl;
   }
}

Pet::Pet()
{
   setName("");
   setType("");
   setId(0);
   setNumLimbs(DEFAULT_LIMBS);
}

string Pet::getName()
{
   return name;
}

string Pet::getType()
{
   return type;
}

long Pet::getId()
{
   return id;
}

int Pet::getNumLimbs()
{
   return numLimbs;
}

bool Pet::setName(string str)
{
   name = str;
   return true;
}

bool Pet::setType(string str)
{
   type = str;
   return true;
}

bool Pet::setId(long num)
{
   id = num;
   return true;
}

bool Pet::setNumLimbs(int num)
{
   if(num < 0)
      return false;
   else
   {
      numLimbs = num;
      return true;
   }
}

/*------------------PASTE OF RUN----------------
 Name: rinigifeb
Type: Cat
ID: 0
Number of Limbs: 4

Name: kykebu
Type: Cat
ID: 1
Number of Limbs: 4

Name: ybo
Type: Cat
ID: 2
Number of Limbs: 4

Name: tejikire
Type: Cat
ID: 3
Number of Limbs: 4

Name: kirah
Type: Cat
ID: 4
Number of Limbs: 4

Name: awyrug
Type: Dog
ID: 5
Number of Limbs: 4

Name: vafu
Type: Dog
ID: 6
Number of Limbs: 4

Name: cewalex
Type: Cat
ID: 7
Number of Limbs: 4

Name: osyvy
Type: Cat
ID: 8
Number of Limbs: 4

Name: mewyh
Type: Dog
ID: 9
Number of Limbs: 4

Name: afyda
Type: Dog
ID: 10
Number of Limbs: 4

Name: igowyl
Type: Cat
ID: 11
Number of Limbs: 4

Name: osamyhot
Type: Dog
ID: 12
Number of Limbs: 4

Name: libesuta
Type: Cat
ID: 13
Number of Limbs: 4

Name: duhu
Type: Dog
ID: 14
Number of Limbs: 4

Name: tupynoxov
Type: Dog
ID: 15
Number of Limbs: 4

Name: yj
Type: Dog
ID: 16
Number of Limbs: 4

Name: zafe
Type: Dog
ID: 17
Number of Limbs: 4

Name: ojy
Type: Dog
ID: 18
Number of Limbs: 4

Name: agusisex
Type: Dog
ID: 19
Number of Limbs: 4

Name: zekewizy
Type: Cat
ID: 20
Number of Limbs: 4

Name: eb
Type: Dog
ID: 21
Number of Limbs: 4

Name: oh
Type: Dog
ID: 22
Number of Limbs: 4

Name: oqat
Type: Dog
ID: 23
Number of Limbs: 4

Name: opymer
Type: Cat
ID: 24
Number of Limbs: 4

Name: ipa
Type: Cat
ID: 25
Number of Limbs: 4

Name: tit
Type: Dog
ID: 26
Number of Limbs: 4

Name: soveqisut
Type: Cat
ID: 27
Number of Limbs: 4

Name: rybetafuv
Type: Dog
ID: 28
Number of Limbs: 4

Name: axa
Type: Cat
ID: 29
Number of Limbs: 4

Name: fypuz
Type: Cat
ID: 30
Number of Limbs: 4

Name: mes
Type: Dog
ID: 31
Number of Limbs: 4

Name: wob
Type: Dog
ID: 32
Number of Limbs: 4

Name: lanavi
Type: Dog
ID: 33
Number of Limbs: 4

Name: cuhizom
Type: Cat
ID: 34
Number of Limbs: 4

Name: kydov
Type: Cat
ID: 35
Number of Limbs: 4

Name: ib
Type: Dog
ID: 36
Number of Limbs: 4

Name: vito
Type: Cat
ID: 37
Number of Limbs: 4

Name: jy
Type: Cat
ID: 38
Number of Limbs: 4

Name: owypudew
Type: Cat
ID: 39
Number of Limbs: 4

Name: rogabu
Type: Dog
ID: 40
Number of Limbs: 4

Name: butak
Type: Dog
ID: 41
Number of Limbs: 4

Name: ew
Type: Cat
ID: 42
Number of Limbs: 4

Name: baxo
Type: Cat
ID: 43
Number of Limbs: 4

Name: yde
Type: Cat
ID: 44
Number of Limbs: 4

Name: omofo
Type: Cat
ID: 45
Number of Limbs: 4

Name: xejiga
Type: Cat
ID: 46
Number of Limbs: 4

Name: bapuf
Type: Dog
ID: 47
Number of Limbs: 4

Name: if
Type: Dog
ID: 48
Number of Limbs: 4

Name: izisedyp
Type: Dog
ID: 49
Number of Limbs: 4

Name: ubenemijy
Type: Dog
ID: 50
Number of Limbs: 4

Name: agivogi
Type: Dog
ID: 51
Number of Limbs: 4

Name: ypohaximo
Type: Dog
ID: 52
Number of Limbs: 4

Name: oly
Type: Dog
ID: 53
Number of Limbs: 4

Name: owenanyr
Type: Cat
ID: 54
Number of Limbs: 4

Name: fi
Type: Cat
ID: 55
Number of Limbs: 4

Name: bykykih
Type: Cat
ID: 56
Number of Limbs: 4

Name: dosyrip
Type: Cat
ID: 57
Number of Limbs: 4

Name: memuvuba
Type: Dog
ID: 58
Number of Limbs: 4

Name: uk
Type: Dog
ID: 59
Number of Limbs: 4

Name: opipe
Type: Dog
ID: 60
Number of Limbs: 4

Name: obuxokupy
Type: Dog
ID: 61
Number of Limbs: 4

Name: kypuvit
Type: Dog
ID: 62
Number of Limbs: 4

Name: ceg
Type: Dog
ID: 63
Number of Limbs: 4

Name: yn
Type: Dog
ID: 64
Number of Limbs: 4

Name: cap
Type: Cat
ID: 65
Number of Limbs: 4

Name: vih
Type: Dog
ID: 66
Number of Limbs: 4

Name: ijajobupa
Type: Dog
ID: 67
Number of Limbs: 4

Name: xusek
Type: Cat
ID: 68
Number of Limbs: 4

Name: oxum
Type: Dog
ID: 69
Number of Limbs: 4

Name: suvofiheq
Type: Dog
ID: 70
Number of Limbs: 4

Name: tenoqi
Type: Cat
ID: 71
Number of Limbs: 4

Name: otozoge
Type: Cat
ID: 72
Number of Limbs: 4

Name: xybonej
Type: Dog
ID: 73
Number of Limbs: 4

Name: vezukuzot
Type: Cat
ID: 74
Number of Limbs: 4

Name: og
Type: Dog
ID: 75
Number of Limbs: 4

Name: yhace
Type: Cat
ID: 76
Number of Limbs: 4

Name: uxygozepy
Type: Dog
ID: 77
Number of Limbs: 4

Name: ujifiqe
Type: Dog
ID: 78
Number of Limbs: 4

Name: ume
Type: Cat
ID: 79
Number of Limbs: 4

Name: walumoly
Type: Cat
ID: 80
Number of Limbs: 4

Name: jow
Type: Dog
ID: 81
Number of Limbs: 4

Name: ateqe
Type: Cat
ID: 82
Number of Limbs: 4

Name: ex
Type: Dog
ID: 83
Number of Limbs: 4

Name: fy
Type: Dog
ID: 84
Number of Limbs: 4

Name: ycoquzino
Type: Cat
ID: 85
Number of Limbs: 4

Name: ypuvepy
Type: Dog
ID: 86
Number of Limbs: 4

Name: yruwaf
Type: Dog
ID: 87
Number of Limbs: 4

Name: syg
Type: Dog
ID: 88
Number of Limbs: 4

Name: ugigo
Type: Cat
ID: 89
Number of Limbs: 4

Name: gynycyduq
Type: Dog
ID: 90
Number of Limbs: 4

Name: winenocib
Type: Cat
ID: 91
Number of Limbs: 4

Name: in
Type: Dog
ID: 92
Number of Limbs: 4

Name: ga
Type: Dog
ID: 93
Number of Limbs: 4

Name: opyhywi
Type: Dog
ID: 94
Number of Limbs: 4

Name: emifoti
Type: Dog
ID: 95
Number of Limbs: 4

Name: sof
Type: Cat
ID: 96
Number of Limbs: 4

Name: ogif
Type: Dog
ID: 97
Number of Limbs: 4

Name: vubuna
Type: Cat
ID: 98
Number of Limbs: 4

Name: yculolyro
Type: Cat
ID: 99
Number of Limbs: 4

Program ended with exit code: 0
-------------------------------------------------*/
