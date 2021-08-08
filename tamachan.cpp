#include "rapidcsv.h"
#include <iostream>
#include <string>
#include <vector>

namespace {
using rapidcsv::Document;

using std::cout;
using std::endl;
using std::string;
using std::vector;
} // namespace

int main() {
  Document doc("../files/kenkou.csv");

  vector<string> kanji = doc.GetColumn<string>("漢字");
  vector<string> hiragana = doc.GetColumn<string>("ひらがな");
  vector<string> english = doc.GetColumn<string>("english");

  for (int i = 0; i < kanji.size(); ++i) {
    cout << kanji[i] << " " << hiragana[i] << " " << english[i] << endl;
  }

  return 0;
}
