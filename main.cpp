#include <iostream>
#include <fstream>


int main(int argc, char **argv) {
    std::cout << "Welcome to Lab 1 of CS2341!" << std::endl;

    std::ifstream fin(argv[1]);
    std::ofstream fout(argv[2]);
    int n;
    int sum = 0;
    int count = 0;





    while(fin >> n){
      std::cout << n << std::endl;
      fout << n << std::endl;
      count++;
      sum+=n;
    }

    std::cout << int(sum/count) << std::endl;
    fout << int(sum/count) << std::endl;
    int test = 0;
    fin.close();
    fout.close();

    return 0;
}
