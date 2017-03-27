/*
 * Generates a random name given a length
 */
 
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
