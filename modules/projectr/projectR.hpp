/* projectR.hpp */

#ifndef PROJECTR_H
#define PROJECTR_H

#include "core/object/ref_counted.h"

class ProjectR : public RefCounted {
	GDCLASS(ProjectR, RefCounted);

	int count;

protected:
	static void _bind_methods();

public:
	void add(int p_value);
	void reset();
	int get_total() const;

	ProjectR();
};

#endif // PROJECTR_H
