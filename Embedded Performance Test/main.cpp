#include <fstream>
#include <chrono>

//template<typename defaultVariable>
class lightSwitcher {
    std::chrono::time_point<std::chrono::steady_clock> startTime;
    void OutputLogData(std::chrono::microseconds outputTime)
    {
        std::ofstream testStreamB("testLog2.txt", std::ios::app);
        testStreamB << outputTime.count() << '\n';
    }

public:
    lightSwitcher()
    {
        startTime = std::chrono::steady_clock::now();       
        std::ofstream testStream("testLog.txt", std::ios::trunc);
        testStream << "Basic test blank generic output file" << '\n'; 
    }

    void LoopFileOutPutTest()
    {
        for (int i = 0; i < 100; i++)
        {
            std::ofstream testStream("testLog.txt", std::ios::app);
            testStream << i << '\n';
        }
        auto endTime = std::chrono::steady_clock::now();
        std::chrono::microseconds runTime = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
        OutputLogData(runTime);
    }
};




int main()
{  
    lightSwitcher TestInit;
    TestInit.LoopFileOutPutTest();

    return 0;
}