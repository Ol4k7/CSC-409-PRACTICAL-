#include <iostream>
#include <vector>

class StatsAnalyzer {
private:
    std::vector<int> data;
public:
    void addValue(int val) { data.push_back(val); }

    double getAverage() {
        double sum = 0;
        for(int n : data) sum += n;
        return sum / data.size();
    }

    int countBelowAverage() {
        double avg = getAverage();
        int count = 0;
        for(int n : data) {
            if(n < avg) count++;
        }
        return count;
    }
};

int main() {
    StatsAnalyzer sa;
    std::cout << "Enter 10 integers:" << std::endl;
    for(int i = 0; i < 10; i++) {
        int temp; std::cin >> temp;
        sa.addValue(temp);
    }
    std::cout << "Average: " << sa.getAverage() << std::endl;
    std::cout << "Count less than average: " << sa.countBelowAverage() << std::endl;
    return 0;
}