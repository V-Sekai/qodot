#include "qodot.h"

#include "register_types.h"

void initialize_qodot_module(GDNativeInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	GDREGISTER_CLASS(Qodot);
}

void uninitialize_qodot_module(GDNativeInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
}