#pragma once
#include "Types.h"

namespace Engine {
	class Board {
	public:
		Board();
		void Reset();
	private:
		Coordinate m_black_pieces;
		Coordinate m_white_pieces;

		Player active_player;


	};
}
