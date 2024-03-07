#pragma once

#include <core/types.h>
#include <raylib.h>

typedef union Box Box;
union Box {
  struct {
    Vector2 position;
    Vector2 size;
  };
  struct  {
    F32 x;
    F32 y;
    F32 width;
    F32 height;
  };
  
};

typedef U64 UINodeFlags;
enum {
  UINodeFlag_None = 0,
};

typedef U32 UINodeSize;
enum {
  UINodeSize_Size,
  UINodeSize_PercentageOfParent,
};

typedef struct UINode UINode;
struct UINode {
  Box box;
  UINode *hashNext; 
  UINode *next;
  UINode *prev;
  UINode *firstChild;
  UINode *lastChild;
  U64 childCount;
  UINodeSize sizeX;
  UINodeSize sizeY;
};