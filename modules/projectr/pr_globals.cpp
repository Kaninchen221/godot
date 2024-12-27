/* pr_globals.cpp */

#include "pr_globals.hpp"


void PR_Globals::_bind_methods() {
	ClassDB::bind_static_method("PR_Globals", D_METHOD("get_neighbour_tiles", "tile_coords"), &PR_Globals::get_neighbour_tiles);
}


TypedArray<Vector2i> PR_Globals::get_neighbour_tiles(const Vector2i &tile_coords) {
	TypedArray<Vector2i> result;

	result.append(Vector2i(tile_coords.x - 1, tile_coords.y - 1));
	result.append(Vector2i(tile_coords.x, tile_coords.y - 1));
	result.append(Vector2i(tile_coords.x + 1, tile_coords.y - 1));
	
	result.append(Vector2i(tile_coords.x - 1, tile_coords.y));
	result.append(Vector2i(tile_coords.x + 1, tile_coords.y));
	
	result.append(Vector2i(tile_coords.x - 1, tile_coords.y + 1));
	result.append(Vector2i(tile_coords.x, tile_coords.y + 1));
	result.append(Vector2i(tile_coords.x + 1, tile_coords.y + 1));

	return result;
}

PR_Globals::PR_Globals() {
}
