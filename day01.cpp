#include <string>
#include <sstream>
#include <optional>
#include "day01.h"

using namespace std;

int part_one(string &input) {
    auto increase_count = 0;
    optional<int> last_measurement = nullopt;
    stringstream ss{input};
    for (string line; getline(ss, line);) {
        auto parsed = stoi(line);
        if (last_measurement && last_measurement.value() < parsed) {
            increase_count += 1;
        }
        last_measurement.emplace(parsed);
    }
    return increase_count;
}

int part_two(string &input) {
    auto increase_count = 0;
    optional<int> last_measurement = nullopt;
    optional<int> a = nullopt;
    optional<int> b = nullopt;
    optional<int> c = nullopt;
    auto i = 0;
    stringstream ss{input};
    for (string line; getline(ss, line);) {
        auto parsed = stoi(line);
        switch (i % 3) {
            case 0:
                a.emplace(parsed);
                break;
            case 1:
                b.emplace(parsed);
                break;
            case 2:
                c.emplace(parsed);
                break;
        }
        i += 1;
        if (a && b && c) {
            auto sum = a.value() + b.value() + c.value();
            if (last_measurement && last_measurement.value() < sum) {
                increase_count += 1;
            }
            last_measurement.emplace(sum);
        }
    }
    return increase_count;
}
