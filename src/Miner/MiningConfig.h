// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018, The TurtleCoin Developers
// Copyright (c) 2019, The Lithe Project Development Team
//
// Please see the included LICENSE file for more information.

#pragma once

#include "version.h"

#include <cstdint>
#include <string>

namespace CryptoNote {

struct MiningConfig
{
    MiningConfig();

    void parse(int argc, char** argv);

    std::string miningAddress;
    std::string daemonAddress;
    std::string daemonHost;
    int daemonPort;
    size_t threadCount;
    size_t scanPeriod;
    size_t blocksLimit;
    uint64_t firstBlockTimestamp;
    int64_t blockTimestampInterval;
    bool help;
    bool version;
    int donateLevel;  // [0-100] representing percentage of hashpower going to dev fund wallet
    const std::string donateAddress = "ethiLBw2Y8PM8rpRtMQ3aM9Va96vYFLY5SPEscJp3a2iiEYYWZYCUFMDHep3EFHwfQRW3Wdh33XHnbhbDtqFs44RJVnmvNbuyBT"; // address of the dev fund wallet
};

} //namespace CryptoNote
