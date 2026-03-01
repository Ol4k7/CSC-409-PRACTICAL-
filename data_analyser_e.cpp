#include <iostream>
#include <vector>
#include <limits> // Required for clearing the input buffer

class StatsAnalyzer {
private:
    std::vector<int> data;
public:
    void addValue(int val) { data.push_back(val); }

    double getAverage() {
        if (data.empty()) return 0.0;
        double sum = 0;
        for(int n : data) sum += n;
        return sum / data.size();
    }

    int countBelowAverage() {
        double avg = getAverage();
        int count = 0;
        for(int n : data) {
            if(n < (double)avg) count++; 
        }
        return count;
    }
};

int main() {
    StatsAnalyzer sa;
    int count = 0;
    
    std::cout << "Enter 10 integers (press Enter after each):" << std::endl;
    
    while(count < 10) {
        int temp;
        std::cout << "Integer " << count + 1 << ": ";
        
        if (std::cin >> temp) {
            sa.addValue(temp);
            count++;
        } else {
            // This fix handles the "0.2 average" bug by clearing bad input
            std::cout << "Invalid input. Please enter a whole number." << std::endl;
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    std::cout << "\n--- Results ---" << std::endl;
    std::cout << "Average: " << sa.getAverage() << std::endl;
    std::cout << "Count less than average: " << sa.countBelowAverage() << std::endl;
    
    return 0;
}