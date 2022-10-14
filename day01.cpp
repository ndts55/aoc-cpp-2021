#include <string>
#include <sstream>

int part_one(string &input) {
    auto increase_count = 0;
    auto last_measurement = -1;
    stringstream ss{input};
    for (string line; getline(ss, line);) {
        auto parsed = stoi(line);
        if (last_measurement != -1 && last_measurement < parsed) {
            increase_count += 1;
        }
        last_measurement = parsed;
    }
    return increase_count;
}

int part_two(string &input) {
    auto increase_count = 0;
    auto last_measurement = -1;
    auto a = -1;
    auto b = -1;
    auto c = -1;
    auto i = 0;
    stringstream ss{input};
    for (string line; getline(ss, line);) {
        auto parsed = stoi(line);
        switch (i % 3) {
            case 0:
                a = parsed;
                break;
            case 1:
                b = parsed;
                break;
            case 2:
                c = parsed;
                break;
        }
        i += 1;
        if (a != -1 && b != -1 && c != -1) {
            auto sum = a + b + c;
            if (last_measurement != -1 && last_measurement < sum) {
                increase_count += 1;
            }
            last_measurement = sum;
        }
    }
    return increase_count;
}
