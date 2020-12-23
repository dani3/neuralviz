#include "Log.h"

#include <spdlog/sinks/stdout_color_sinks.h>

namespace NeuralViz {
    std::shared_ptr<spdlog::logger> Log::s_Logger;

    void Log::Init() {
        spdlog::set_pattern("%^[%T] %n: %v%$");

        s_Logger = spdlog::stdout_color_mt("NEURALVIZ");
        s_Logger->set_level(spdlog::level::trace);
    }
}
