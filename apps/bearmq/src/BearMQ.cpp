#include "Config.h"
#include "Broker.h"
#include <iostream>

int main(int argc, char* argv[]) {
    Config* config = new Config(&argc, (const char**)argv);

    Broker* broker = new Broker(config);

    return 0;
}
