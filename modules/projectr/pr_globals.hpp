/* pr_globals.hpp */

#ifndef PR_GLOBALS_H
#define PR_GLOBALS_H

#include "core/object/ref_counted.h"
#include "core/variant/typed_array.h"

class PR_Globals : public RefCounted {
	GDCLASS(PR_Globals, RefCounted);

	int count;

protected:
	static void _bind_methods();

public:
	static TypedArray<Vector2i> get_neighbour_tiles(const Vector2i &tile_coords);

	PR_Globals();
};

#endif // PR_GLOBALS_H
