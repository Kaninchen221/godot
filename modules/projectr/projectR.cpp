/* projectR.cpp */

#include "projectR.hpp"

void ProjectR::add(int p_value) {
	count += p_value;
}

void ProjectR::reset() {
	count = 0;
}

int ProjectR::get_total() const {
	return count;
}

void ProjectR::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add", "value"), &ProjectR::add);
	ClassDB::bind_method(D_METHOD("reset"), &ProjectR::reset);
	ClassDB::bind_method(D_METHOD("get_total"), &ProjectR::get_total);
}

ProjectR::ProjectR() {
	count = 0;
}
