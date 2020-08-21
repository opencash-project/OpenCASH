#!/bin/bash
sudo apt-get install build-essential libtool bsdmainutils autotools-dev autoconf pkg-config automake python3 -y
sudo apt-get install libssl-dev libgmp-dev libevent-dev libboost-all-dev -y
sudo apt-get install software-properties-common
sudo add-apt-repository ppa:pivx/pivx
sudo apt-get update
sudo apt-get install libdb4.8-dev libdb4.8++-dev -y
sudo apt-get install libminiupnpc-dev -y
sudo apt-get install libzmq3-dev -y
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 libqt5svg5-dev libqt5charts5-dev qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev -y