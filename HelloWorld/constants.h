#pragma once

#include <cstdint>
#include <cstdlib>
#include <cmath> 
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>
#include <iostream>
#include <fstream>
#include <filesystem>
#include <thread>
#include <future>
#include <mutex> 

int DISPLAY_WIDTH = 640;
int DISPLAY_HEIGHT = 360;
int DISPLAY_SCALE = 2;

enum ObjectType 
{
	TYPE_BALL
};