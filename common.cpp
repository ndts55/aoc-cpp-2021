#include <fstream>
#include <string>
#include <unistd.h>
#include "common.h"

using namespace std;

auto read_file_to_string(const string &file) -> string {
    chdir(PROJECT_DIRECTORY);
    ifstream ifs(file);
    string content;
    content.assign((istreambuf_iterator<char>(ifs)), (istreambuf_iterator<char>()));
    return content;
}

auto read_small(const string &id) -> string {
    return read_file_to_string("inputs/small_input" + id + ".txt");
}

auto read_big(const string &id) -> string {
    return read_file_to_string("inputs/input" + id + ".txt");
}
