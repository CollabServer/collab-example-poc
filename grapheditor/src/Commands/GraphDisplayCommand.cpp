#include "Commands/GraphDisplayCommand.h"

GraphDisplayCommand::GraphDisplayCommand()
    : Command("graphDisplay",
              "This is the display graph command",
              "TODO"){
};


int GraphDisplayCommand::exec(utils::config config, const std::vector<std::string> &arguments){
    //TODO To implement
    std::cout << "Graph : (Not implemented yet)\n";
    return 0;
}
