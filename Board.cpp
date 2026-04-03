#include "Board.h"
#include "Constants.h"

namespace Engine {
	Board::Board() {
		Reset();
	}
	
	void Board::Reset() {
		m_black_pieces = 0x0000000810000000ULL;
		m_white_pieces = 0x0000001008000000ULL;
		active_player = Player::White;
	}
}