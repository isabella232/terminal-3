// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "ContentProcess.g.h"
#include "ControlInteractivity.h"

namespace winrt::Microsoft::Terminal::Control::implementation
{
    struct ContentProcess : ContentProcessT<ContentProcess>

    {
        ContentProcess();
        void Initialize(Control::IControlSettings settings, TerminalConnection::ITerminalConnection connection);
        Control::ControlInteractivity GetInteractivity();

    private:
        Control::ControlInteractivity _interactivity{ nullptr };
    };
}

namespace winrt::Microsoft::Terminal::Control::factory_implementation
{
    BASIC_FACTORY(ContentProcess);
}
