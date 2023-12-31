//
// Created by Al-Sh on 10/24/2023.
//

#ifndef EIGHT_PUZZLE_SOLVER_ASTARMAN_H
#define EIGHT_PUZZLE_SOLVER_ASTARMAN_H

#include <vector>
#include <queue>
#include <utility>
#include <stdexcept>
#include <unordered_set>
#include <unordered_map>
#include <chrono>
#include <algorithm>
#include "../Headers/State.h"
#include "../Headers/Search.h"
#include "Algorithm.h"

class AStarMan : public Algorithm {
public:
    void search() override;

    explicit AStarMan(const std::vector<int> &grid);

    size_t heuristic(unsigned int state) const;

private:
    unsigned int start;
    const unsigned int GOAL{0x76543210};
    std::unordered_set<unsigned int> explored;
    std::unordered_map<unsigned int, std::pair<unsigned int, size_t>> parentMap;
    std::priority_queue<std::pair<size_t, std::pair<unsigned int, size_t>>, std::vector<std::pair<size_t, std::pair<unsigned int, size_t>>>, std::greater<>> frontier;

    bool aStar();
};


#endif //EIGHT_PUZZLE_SOLVER_ASTARMAN_H
