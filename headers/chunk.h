#ifndef CHUNK_H
#define CHUNK_H

#include "globaldef.h"

// Chunks seem to just be something to attach chunk meshes to, maybe
// this whole thing needs a rework?
struct chunk_t {
    uint8 voxels[CHUNK_CROOT][CHUNK_CROOT][CHUNK_CROOT];
    vec pos = {0.0f, 0.0f, 0.0f};

    bool update = false;
};

enum VOXELTYPES {
    V_STONE_BLACK = (uint8) 1,
    V_STONE_GREY = 2,
    V_STONE_ORANGE = 3,
    V_STONE_PEPPER = 4
};

void chunk_fill_perlin(chunk_t *chunk);

void chunk_fill(chunk_t *chunk, uint8 value);

#endif
