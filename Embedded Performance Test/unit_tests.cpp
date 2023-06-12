#include <iostream>
#include <chrono>
#include <fstream>

class tests {
    
    // Redumentry timing test to check that functionality works on machine.
    void timingTest() {
        for (int i = 0; i < 1000; i++)
        {
            auto& startTime = std::chrono::steady_clock::now();        
            auto& endTime = std::chrono::steady_clock::now();
            std::chrono::microseconds runTime 
                = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
            std::ofstream timingTestStream("timingTestPerformanceLog.txt", std::ios::in);
            timingTestStream << runTime.count() << '\n'; 
        }
    }

    // Outputs the GPIO pin based on a random number using rand().
    void lightTest(){

    }

    // Sets a random time between 0,10 seconds of motor spinning.
    void motorTest(){
        
    }



};