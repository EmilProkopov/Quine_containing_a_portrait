#include <fstream>
#include <vector>
#include <string>

using namespace std;
ofstream fout;
string name = "Emmanuil Prokopov";

int main()
    {
      char q='"';
      fout.open("copy.cpp");
      vector <string> b={
        "+oosososyhddhhddmdshmmmddmmdddhhhhhhhysyddmmmmdddddddddmmmmmmmddddddhyyyyyyyyyyy",
        "so+ssoooohdhhdddhyhdddddhdhhhhdhhyyyssysooyhdmNmmmmmmmmmmmmddddddddddhysossssssy",
        "o+/soyo:+yhhhhysyhdddddhhhhdddddddddddmmmmmmdyyyyhdmNNNmmmddddddddddddhysyyyyhyy",
        "/+-so++/ohhhyhhhhhdmdddddhhdhdddddmmmmmmmmmmmmmmmdhssyyhmmmmmmmmmdddddddysyyyhyy",
        "-///////shhdddmddddddddddddddddddmmmddmdddmmmmmmmmmmmmmdyssydmmmmmmddhddy++oosss",
        "-+os/ossyhhddddddddddddddddddddddddddddmmmmmmmmmmmmmmmmNNmmdyyyyhdmmddhhhyo+++//",
        "+ssss+yyhhddddddddmmddddddddmddmmmmmmmmmmmmmmmmmmmmmmmmmNNNmNNNmmdhyyyyhso//--:/",
        "sssyyyhdddddddddddmmmddmmmddmmmmmmmmmmmmmmmmmmmmmddmmmmmmmmNNNNmmmmmddhysysso+//",
        "ssshyhdddddddddddddddddddddmmmmmmmmmmmmmmmmmmmmddmmmmmmmmmmNNNmmmmmmmdmdhhhso/:/",
        "osyyshdddddddddddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmNmmmNmmmddddhhho:++",
        "ooyshdddddmmmmmddddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddh++sy",
        "/+syhdddmmmmmmmmmmmdddddddddddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddyosy",
        "+oosddmmmmmmmmmmmmddhhyyyyhdhhddmmmmmmmNmNNmmmmmmmmmmmmmmmmmmmmmmmmmmddddddddhyy",
        "+/+sdmmmmmmmmmmmmhhyyssoooosyhhddddmmmmmmmmmmmNNmmNmmmmmmmmmmmmmmmmmmdddddddddhh",
        ":++shdmmmmmmmmmmdyysooooooooosssyyhdddmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmdddddddddhhh",
        ":+syydddmmmmmdddhyso++++++++++ooooossyyhddmmmmmmmmmmmmmmmmmmmmmmmmmdddddddddddhh",
        "ooys++ddmmmdysssso++++////++++++oooossssyyyhhdmmmmmmmmmmmmmmmmmmmmdddddddddddhhh",
        "+os/-:ydmmdy+///////////////////++++ooooooosssyhhddddddddddmmmmmdddddddddddddhhd",
        "sss---odmdh+//:://////////////////+++++++++ooossyyhhhhhhhhddddmddhhhhdddddddhddd",
        "yys/-`.yddy////++ooo++////:://///////++++++++++oosshhhhhhhdddddhyyyyhdddmddhhddd",
        "hhyo` `+hh+:/+ossyyyyyso++//::::::://///////++++++oosyhhdddhhyyysssyhdmmmdhyhhhd",
        "yyyo```+yo--://///++syhhhyys+///:::::///////////////+++oossooooooyyyhmmddhhhyyhh",
        "yyyo``.so-.--::://///++osyhhhso////://////::////////////////////+osyddddhyyyyyyy",
        "+/::.`-s/...--:+osssssyhysoosyyso+///////////////////////////+++++oyhhhhhysssyyy",
        ":--:.` -..`..-:/+o+:-oyydhsooooosso+///////////++++oooossssysssoooohoosyyyysosyy",
        "---::` `````...:/++/+yyys//+oo+++++////+++++oossyyhhhhhhhhhhyyyssyyoooyyyysosyy-",
        ":/+o:` ``````..--://++ooo+oooo+/////:////++ooossssyhddhyyyyssoooohyyssyyyyssssy+",
        "++oss/-`````.-----::////++++//////:::::///+ooosysooyhhyo/oyhhso+odhhhhhhdhhhhhh+",
        "+sys+oo```.-----::::::::::///::::::::::///++ooooooossssoooosso++ymmmmmdmmmmmmmmy",
        "yys+oyy.`.--::::::::::::::::::::::::::////++++++++++++++++/////+mNNNNNmNNNmmNNNy",
        "yo+syhh-..-::::::::::::::::::::::::-:://:/+//////++///////////+ymmmNmmmmmddmmdys",
        "ooyhhhh+..::::::::::::::::::::::::--://://++/////////////////+odmmmmmmmmddho/:/s",
        "yhdddhs/.-::::::::::::::::::::::::-::////++++//////////////+++hmmmmmmmmmh+-/shdh",
        "ddhs+:-.--:::::::::::::::///:::::-:::/://++++++++///////+++++smmmmmmmmds/+ydddhd",
        "dy/-....-::::::::::::::://::::::--:://:///+oo++++++++++++++osdmmmmmmmdo:yddddddh",
        "hyo-...--::::::::::::::::::::::::::///:///++o+++++++++++++oshdmmmmmmds:hmmmddddh",
        "hhhs/-----::::::::::::::://:::::::////////+++++++++++++++osyhdddmmmmy:ymmmmmdddh",
        "hhhhyo/---:/:/:::::::::::////:::::///////+++++++++++++++oyyyhddddmdd/ommmmmmmmmh",
        "hhhhhhy+::::/:::///////////////::::////++++++++++++++++syyyhhhdddmdy:hmmmmmmmmmd",
        "hhhhhhhhs/:::/:://+++++///////++/////++++++++++++++++oys+so/++yhdddo:hmmmmmmmmmd",
        "dddhhhhhhy+:::///////+oo++++//++++++++++++++++++++++oyso:+.+soyhdddo++smmmmmmmmd",
        "ddddddhhdhhy+//////////+++ossoo++++oooooooooo++++++oo/:/-`.++hddddh////dmmmmmmmd",
        "dddddddddddddhso+///////+oooooooosssssoooo+++++/+sss:o.`../oyhhhddy/://dddmmmmmm",
        "mmmmddddddddddddds///////+++oooooooooooo++++/+osysss+-``-/+yhhhhhs////odddmmmmmm",
        "mmmmNmmddddddddhhys+////////++++++++++++++++syyysso:`../oosyyyyys/:++/ydddmmmmmN",
        "NNmmmmNNmmdddddhsoo+++//////+++++++++++++oyhhhyyyo``.+osssyyyo+-+/:+/+hddddddddm",
        "mmmNNmmmmmmmmdhysooooooo++++++++++++++osyhdhhhhs:`-oyyss+-/s/::os/oydmmmddddddmd",
        "ddmmmmmmmmmmmmmmdhysooosssssssooooosyhhhhhhhy+/:oyyyys/++ `o:-++-:/+hmmmmddddddd",
        "dddddmmmmmmmmmmmmmdhyyyssyhhhhhhdddddhhhhhhyyyyyy+/.:+o:. `:+/++: `:hydmmmdddddd",
        "dddddddddddddddmmmmmdhhhhhhdddddddhhhhhhhhyyyo+++-./- -o+/++/:-//-./dmddmmmmdddd",
        "#include <fstream>",
        "#include <vector>",
        "#include <string>",
        "endl",
        "using namespace std;",
        "ofstream fout;",
        "string name = ","q","Emmanuil Prokopov","q",";",
        "endl",
        "int main()",
        "    {",
        "      char q='","q","';",
        "      fout.open(","q","copy.cpp","q",");",
        "      vector <string> b={",
        "      };",
        "      for(int i=50; i<=72; ++i)",
        "          {",
        "            if(b[i]==","q"," q","q",") fout << q;",
        "            else",
        "                {",
        "                  if(b[i]==","q"," endl","q",") fout << endl;",
        "                  else",
        "                     {",
        "                       fout << b[i];",
        "                       if(b[i+1] != ","q"," q","q",")fout << endl;",
        "                     }",
        "               }",
        "          }",
        "      fout << ","q","        ","q",";",
        "      fout << q;",
        "      fout << b[0];",
        "      fout << q;",
        "      fout << ',';",
        "      fout << endl;",
        "      for(int i = 1; i < b.size()-1; ++i)",
        "          {",
        "            if(b[i-1]!=","q"," q","q"," && b[i-1]!=","q"," q","q"," && b[i]!=","q"," q","q"," && b[i]!=","q"," q","q"," && b[i]!=","q"," endl","q"," && b[i-1]!=","q"," endl","q",") fout << ","q","        ","q",";",
        "            fout << q;",
        "            if(b[i] == ","q"," q","q"," && i!= 93) fout << ","q"," q","q",";",
        "             else fout << b[i];",
        "            fout << q;",
        "            fout << ',';",
        "            if(b[i]!=","q"," q","q"," && b[i+1]!=","q"," q","q"," && b[i]!=","q"," q","q"," && b[i+1]!=","q"," q","q"," && b[i]!=","q"," endl","q"," && b[i+1]!=","q"," endl","q",") fout << endl;",
        "          }",
        "      fout << ","q","        ","q",";",
        "      fout << q;",
        "      fout << b[b.size()-1];",
        "      fout << q;",
        "      fout << endl;",
        "      for(int i=73; i<b.size()-1; ++i)",
        "          {",
        "            if(b[i]==","q"," q","q",") fout << q;",
        "            else",
        "                {",
        "                  if(b[i]==","q"," endl","q",") fout << endl;",
        "                  else",
        "                       {",
        "                         if(b[i]==","q"," q","q"," && i!=206 && i!=143 && i!=147 && i!=117 && i!=121 && i!=155 && i!=159) fout << ","q"," q","q",";",
        "                         else",
        "                             {",
        "                               if(b[i] == ","q"," endl","q"," && i!=217 && i!=129 && i!=133 && i!=171 && i!=175) fout << ","q"," endl","q",";",
        "                               else",
        "                                   {",
        "                                     fout << b[i];",
        "                                     if(b[i+1] != ","q"," q","q"," && i != b.size()-1) fout << endl;",
        "                                   }",
        "                             }",
        "                       }",
        "                }",
        "          }",
        "      fout << b[b.size()-1];",
        "      fout.close();",
        "      return 0;",
        "    }"
      };
      for(int i=50; i<=72; ++i)
          {
            if(b[i]=="q") fout << q;
            else
                {
                  if(b[i]=="endl") fout << endl;
                  else
                      {
                        fout << b[i];
                        if(b[i+1] != "q")fout << endl;
                      }
                }
          }
      fout << "          ";
      fout << q;
      fout << b[0];
      fout << q;
      fout << ',';
      fout << endl;
      for(int i = 1; i < b.size()-1; ++i)
          {
            if(b[i-1]!="q" && b[i-1]!=" q" && b[i]!=" q" && b[i]!="q" && b[i]!=" endl" && b[i-1]!=" endl") fout << "          ";
            fout << q;
            if(b[i] == " q" && i!= 93) fout << " q";
             else fout << b[i];
            fout << q;
            fout << ',';
            if(b[i]!=" q" && b[i+1]!=" q" && b[i]!="q" && b[i+1]!="q" && b[i]!=" endl" && b[i+1]!=" endl") fout << endl;
          }
      fout << "          ";
      fout << q;
      fout << b[b.size()-1];
      fout << q;
      fout << endl;
      for(int i=73; i<b.size()-1; ++i)
          {
            if(b[i]=="q") fout << q;
            else
                {
                  if(b[i]=="endl") fout << endl;
                  else
                      {
                        if(b[i]==" q" && i!=206 && i!=143 && i!=147 && i!=117 && i!=121 && i!=155 && i!=159) fout << "q";
                        else
                            {
                              if(b[i] == " endl" && i!=217 && i!=129 && i!=133 && i!=171 && i!=175) fout << "endl";
                              else
                                  {
                                    fout << b[i];
                                    if(b[i+1] != "q" && i != b.size()-1) fout << endl;
                                  }
                            }
                      }
               }
          }
      fout << b[b.size()-1];
      fout.close();
      return 0;
    }