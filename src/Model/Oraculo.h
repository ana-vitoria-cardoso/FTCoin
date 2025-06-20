#ifndef ORACLE_H
#define ORACLE_H

#include <string>
#include <ctime>
#include <cstdlib>

/**
 * @class Oracle
 * @brief Simulates a cryptocurrency exchange rate oracle with random values
 */
class Oracle {
private:
    const double MIN_RATE = 50.0;   // Minimum exchange rate
    const double MAX_RATE = 500.0;  // Maximum exchange rate
    
    /**
     * @brief Initializes random number generator
     */
    void initRandomGenerator() {
        std::srand(std::time(0));  // Seed with current time
    }

public:
    /**
     * @brief Constructor that initializes random generator
     */
    Oracle() {
        initRandomGenerator();
    }

    /**
     * @brief Gets a random exchange rate for any date
     * @param date Date for the rate (unused in this implementation)
     * @return Random exchange rate between MIN_RATE and MAX_RATE
     */
    double getExchangeRate(const std::string& date) {
        // Generate random value between MIN_RATE and MAX_RATE
        double randomValue = MIN_RATE + (double)(std::rand()) / ((double)(RAND_MAX/(MAX_RATE - MIN_RATE)));
        return randomValue;
    }
};

#endif // ORACLE_H
