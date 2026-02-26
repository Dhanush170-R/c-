#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 4;

    int graph[4][4] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int cities[] = {1, 2, 3};
    int min_path = 9999;

    do {
        int current_path = 0;
        int k = 0;

        for (int i = 0; i < 3; i++) {
            current_path += graph[k][cities[i]];
            k = cities[i];
        }

        current_path += graph[k][0];
        min_path = min(min_path, current_path);

    } while (next_permutation(cities, cities + 3));

    cout << "Minimum travelling cost = " << min_path;

    return 0;
}