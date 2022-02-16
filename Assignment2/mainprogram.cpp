/*
Function Name: The int main() function
What it does: In this function, a text file is opened through ifstream and while it is open, I call all of my functions from Parser.cpp and produce the results into the file.
Parameters name and data types: No parameters and data types involved.
Return value and type: No return value and type in this file.
*/
#include <fstream>
#include <string>
#include "Parser.h"
using namespace std;
int main(){
  Parser p;

  int counta = p.Acount();//Setting each called value to a variable so the function won't call again
  int countb = p.Bcount();
  int countc = p.Ccount();
  int countd = p.Dcount();
  int counte = p.Ecount();
  int countf = p.Fcount();
  int countg = p.Gcount();
  int counth = p.Hcount();
  int counti = p.Icount();
  int countj = p.Jcount();
  int countk = p.Kcount();
  int countl = p.Lcount();
  int countm = p.Mcount();
  int countn = p.Ncount();
  int counto = p.Ocount();
  int countp = p.Pcount();
  int countq = p.Qcount();
  int countr = p.Rcount();
  int counts = p.Scount();
  int countt = p.Tcount();
  int countu = p.Ucount();
  int countv = p.Vcount();
  int countw = p.Wcount();
  int countx = p.Xcount();
  int county = p.Ycount();
  int countz = p.Zcount();

  ofstream out_file;
  out_file.open("output.txt");//Opening the file "output.txt" to insert all of the values
  out_file << "a:" << counta << endl;
  out_file << "b:" << countb << endl;
  out_file << "c:" << countc << endl;
  out_file << "d:" << countd << endl;
  out_file << "e:" << counte << endl;
  out_file << "f:" << countf << endl;
  out_file << "g:" << countg << endl;
  out_file << "h:" << counth << endl;
  out_file << "i:" << counti << endl;
  out_file << "j:" << countj << endl;
  out_file << "k:" << countk << endl;
  out_file << "l:" << countl << endl;
  out_file << "m:" << countm << endl;
  out_file << "n:" << countn << endl;
  out_file << "o:" << counto << endl;
  out_file << "p:" << countp << endl;
  out_file << "q:" << countq << endl;
  out_file << "r:" << countr << endl;
  out_file << "s:" << counts << endl;
  out_file << "t:" << countt << endl;
  out_file << "u:" << countu << endl;
  out_file << "v:" << countv << endl;
  out_file << "w:" << countw << endl;
  out_file << "x:" << countx << endl;
  out_file << "y:" << county << endl;
  out_file << "z:" << countz << endl;
  out_file << "alphabets:" << (counta + countb + countc + countd + counte + countf + countg + counth
  + counti + countj + countk + countl + countm + countn + counto + countp + countq + countr + counts
+ countt + countu + countv + countw + countx + county + countz) << endl; //The sum of all alphabetical letters
  out_file << "non-alphabets:" << p.Non_Charactercount() << endl;
  out_file << "average:" << (counta + countb + countc + countd + counte + countf + countg + counth
  + counti + countj + countk + countl + countm + countn + counto + countp + countq + countr + counts
+ countt + countu + countv + countw + countx + county + countz)/26.0 << endl;//The average of all alphabetical letters
  out_file << "pairs:" << p.Pairs() << endl;
  out_file.close();

  return 0;
}
