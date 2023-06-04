// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  std::vector<char> res;
  if (tree.permutations.size() < n) {
    res.push_back('1');
    res.clear();
  } else {
    res = tree.permutations[n - 1];
    reverse(res.begin(), res.end());
    res.pop_back();
    reverse(res.begin(), res.end());
  }
  return res;
}
