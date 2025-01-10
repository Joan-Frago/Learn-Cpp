#include <iostream>

float cnv2usd(float crr, float tcr) {
  float us_crr;
  us_crr = crr * tcr;

  return us_crr;
}

int main() {
  float cb_crr;
  float br_crr;
  float pr_crr;

  float cb_tcr = 0.00023;
  float br_tcr = 0.1656;
  float pr_tcr = 0.27;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> cb_crr;
  std::cout << std::endl << "Enter number of Brazilian Reais: ";
  std::cin >> br_crr;
  std::cout << std::endl << "Enter number of Peruvian Soles: ";
  std::cin >> pr_crr;

  float cb_usd = cnv2usd(cb_crr,cb_tcr);
  float br_usd = cnv2usd(br_crr,br_tcr);
  float pr_usd = cnv2usd(pr_crr,pr_tcr);

  std::cout << std::endl << std::endl << "Colombian Pesos to usd: " << cb_usd;
  std::cout << std::endl << "Brazilian Reais to usd: " << br_usd;
  std::cout << std::endl << "Peruvian Soles to usd: " << pr_usd;

  return 0;
}
