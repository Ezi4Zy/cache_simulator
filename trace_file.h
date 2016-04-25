//
// Created by fear on 2016/4/24.
//

#ifndef CACHE_SIMULATOR_TRACE_FILE_H
#define CACHE_SIMULATOR_TRACE_FILE_H

#include <string>
#include <vector>
using std::string;
using std::vector;

class trace_file{
public:
    explicit trace_file(const char* filename);
    ~trace_file();
    void read_file();
    string getline();

private:
    FILE* file;
    int line_index;
    vector<string> lines;
};

#endif //CACHE_SIMULATOR_TRACE_FILE_H
