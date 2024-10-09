#pragma once

#include <string>
#include <vector>
#include <optional>

class Config {
public:
	Config(const int* argc, const char** argv);

	int getListenPort();

private:
	template <typename T>
	std::optional<T> getArgument(const std::string& argument);

	int _argc;
	std::vector<std::string> _argv{};

	int _listenPort;
};
