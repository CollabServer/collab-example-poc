#pragma once

#include <iostream>

#include "Command.h"
#include "Editor.h"


class QuitCommand : public Command {
    private:
        Editor* editor;

    public:
        QuitCommand(Editor* editor);
        int exec(utils::config config, const std::vector<std::string> &arguments);
};


