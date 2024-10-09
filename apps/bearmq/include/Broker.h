#include "Config.h"

class Broker {
public:
	Broker(Config* _config) : config(_config) {}
private:
	Config* config;
};
