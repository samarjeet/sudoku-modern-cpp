//#include<benchmark/benchmark.h>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

class Node {
public : 
  Node(std::unordered_map<std::string, int>  grid) {
    for (auto sq : grid) {
    }

  }

private:
  static std::vector<std::string> _squares;
  static std::unordered_map<std::string, std::vector<std::string>> _peers;
  std::unordered_map<std::string, std::vector<std::string>> _values;


  std::vector<std::string> cross(std::vector<char> a, std::vector<char> b) {
    std::vector<std::string> crossPd;
    for (auto i : a)
      for (auto j : b) {
        std::string s("");
        s += i;
        s += j;
        crossPd.push_back(s);
      }
    return crossPd;
  }
};

  void createPeers(Node & n ) {
    std::vector<char> a, b;
    for (int i = 1; i < 10; ++i) {
      a.push_back(static_cast<char>('A' - 1 + i));
      b.push_back('0' + i);
    }
    //n::_squares = n::cross(a, b);

    // create the peers using lambda
  }
template <typename U> void print(U cont) {
  for (auto i : cont) {
    std::cout << i << std::endl;
  }
}

int main() {
    std::unordered_map<std::string, int> um = { 
        {"A1", 1}, 
        {"D3",7}
    } ;
    Node n( std::move(um) );
    createPeers(n);

  /*print(a);
  print(b);
  print(crossPd);
  */

  return 0;
}
