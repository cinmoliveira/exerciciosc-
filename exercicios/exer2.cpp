/* 2) Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
*/

#include <iostream>

using namespace std;

//Sub-rotina com cálculos para conversão:
int converte_para_segs(int horas, int minutos, int segundos) {
  int segs_totais = segundos;
  segs_totais += minutos * 60;
  segs_totais += horas * 3600;
  return segs_totais;
  //return segundos + minutos * 60 + horas * 3600;
}

int main () {
  int h, m, s, ss; 

  cout << "Informe horas, minutos e segundos: ";
  cin >> h >> m >> s;

  ss = converte_para_segs(h, m, s);

  cout << h << ":" << m << ":" << s << " = " << ss << " segundos.\n";

  return 0;
}
