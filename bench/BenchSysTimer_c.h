#ifndef SkBenchSysTimer_DEFINED
#define SkBenchSysTimer_DEFINED

//Time
#include <time.h>
#warning standard clocks

class BenchSysTimer {
public:
    void startWall();
    void startCpu();
    double endCpu();
    double endWall();
private:
    clock_t fStartCpu;
    time_t fStartWall;
};

#endif
