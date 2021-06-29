#pragma once
#include"resource.h"
#include<Windows.h>

#include <tchar.h>
#include <D3DX9.h>
#include<D3dx9math.h>

#pragma comment(lib, "d3dx9.lib") 

#pragma comment(lib, "winmm.lib") 


#define RGB2BGR( Color ) (Color & 0xFF000000) | ((Color & 0xFF0000) >> 16) | (Color & 0x00FF00) | ((Color & 0x0000FF) << 16)
