#include "register_types.h"

#include "core/object/class_db.h"
#include "ProjectR.hpp"
#include "pr_globals.hpp"

void initialize_projectr_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<ProjectR>();
	ClassDB::register_class<PR_Globals>();
}

void uninitialize_projectr_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
   // Nothing to do here in this example.
}
