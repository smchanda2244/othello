#pragma once
#include "Types.h"

namespace Engine {
	static constexpr Coordinate MAX_POSITION = 63;
	static constexpr Coordinate MIN_POSITION = 0;

	static constexpr int8_t DIR_EAST = 1;
	static constexpr int8_t DIR_WEST = -1;
	static constexpr int8_t DIR_NORTH = -8;
	static constexpr int8_t DIR_SOUTH = 8;

	static constexpr int8_t DIR_SW = 7;
	static constexpr int8_t DIR_SE = 9;
	static constexpr int8_t DIR_NE = -7;
	static constexpr int8_t DIR_NW = -9;

	static constexpr uint64_t MASK_FILE_A = 0x0101010101010101ULL;
	static constexpr uint64_t MASK_FILE_H = 0x8080808080808080ULL;
	static constexpr uint64_t MASK_RANK_1 = 0x00000000000000FFULL; // Top Row
	static constexpr uint64_t MASK_RANK_8 = 0xFF00000000000000ULL; // Bot row

}
