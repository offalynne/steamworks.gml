// steam_autogen.cpp: Generated by GmlCppExtFuncs. Don't touch this!
#include "gml_ext.h"
#include "steam_glue.h"
// Struct forward declarations:
// from steam_inventory.cpp:48:
struct steam_inventory_result_item {
	SteamItemInstanceID_t item_id;
	SteamItemDef_t item_def;
	uint16 quantity;
	uint16 flags;
};
// from steam_inventory.cpp:111:
struct steam_inventory_create_item_t {
	SteamItemDef_t item_def;
	uint32 quantity;
};
// from steam_inventory.cpp:115:
struct steam_inventory_destroy_item_t {
	SteamItemInstanceID_t item_id;
	uint32 quantity;
};
// from steam_inventory.cpp:294:
struct steam_inventory_get_item_prices_t {
	SteamItemDef_t item_def;
	uint64 price;
};
// from steam_lobby_chat.cpp:4:
struct steam_lobby_message {
	uint8_t* data;
	size_t size;
	int lifetime;
};
// from steam_user.cpp:42:
struct steam_get_friends_game_info_t {
	uint64 friendId;
	uint32 gameId;
	uint64 lobbyId;
	char name[32];
};
extern int steam_inventory_result_get_status(SteamInventoryResult_t inv_result);
dllx double steam_inventory_result_get_status_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _arg_inv_result;
	_arg_inv_result = _in.read<SteamInventoryResult_t>();
	return steam_inventory_result_get_status(_arg_inv_result);
}

extern int steam_inventory_result_get_unix_timestamp(SteamInventoryResult_t inv_result);
dllx double steam_inventory_result_get_unix_timestamp_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _arg_inv_result;
	_arg_inv_result = _in.read<SteamInventoryResult_t>();
	return steam_inventory_result_get_unix_timestamp(_arg_inv_result);
}

extern const char* steam_inventory_result_get_item_property(SteamInventoryResult_t inv_result, int item_index, const char* prop_name);
dllx const char* steam_inventory_result_get_item_property_raw(void* _ptr, const char* _arg_prop_name) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _arg_inv_result;
	_arg_inv_result = _in.read<SteamInventoryResult_t>();
	int _arg_item_index;
	_arg_item_index = _in.read<int>();
	return steam_inventory_result_get_item_property(_arg_inv_result, _arg_item_index, _arg_prop_name);
}

extern vector<steam_inventory_result_item> steam_inventory_result_get_items(SteamInventoryResult_t inv_result);
static vector<steam_inventory_result_item> steam_inventory_result_get_items_raw_vec;
dllx double steam_inventory_result_get_items_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _arg_inv_result;
	_arg_inv_result = _in.read<SteamInventoryResult_t>();
	steam_inventory_result_get_items_raw_vec = steam_inventory_result_get_items(_arg_inv_result);
	return (double)(4 + steam_inventory_result_get_items_raw_vec.size() * sizeof(steam_inventory_result_item));
}
dllx double steam_inventory_result_get_items_raw_post(void* _ptr) {
	gml_ostream _out(_ptr);
	_out.write_vector<steam_inventory_result_item>(steam_inventory_result_get_items_raw_vec);
	return 1;
}

extern bool steam_inventory_result_destroy(SteamInventoryResult_t inv_result);
dllx double steam_inventory_result_destroy_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _arg_inv_result;
	_arg_inv_result = _in.read<SteamInventoryResult_t>();
	return steam_inventory_result_destroy(_arg_inv_result);
}

extern SteamInventoryResult_t steam_inventory_trigger_item_drop(SteamItemDef_t item_def);
dllx double steam_inventory_trigger_item_drop_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamItemDef_t _arg_item_def;
	_arg_item_def = _in.read<SteamItemDef_t>();
	SteamInventoryResult_t _ret = steam_inventory_trigger_item_drop(_arg_item_def);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_add_promo_item(SteamItemDef_t item_def);
dllx double steam_inventory_add_promo_item_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamItemDef_t _arg_item_def;
	_arg_item_def = _in.read<SteamItemDef_t>();
	SteamInventoryResult_t _ret = steam_inventory_add_promo_item(_arg_item_def);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_add_promo_items(vector<SteamItemDef_t> item_defs);
dllx double steam_inventory_add_promo_items_raw(void* _ptr) {
	gml_istream _in(_ptr);
	vector<SteamItemDef_t> _arg_item_defs;
	_arg_item_defs = _in.read_vector<SteamItemDef_t>();
	SteamInventoryResult_t _ret = steam_inventory_add_promo_items(_arg_item_defs);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_consume_item(SteamItemInstanceID_t item_id, uint32 quantity);
dllx double steam_inventory_consume_item_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	uint32 _arg_quantity;
	_arg_quantity = _in.read<uint32>();
	SteamInventoryResult_t _ret = steam_inventory_consume_item(_arg_item_id, _arg_quantity);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_exchange_items(vector<steam_inventory_create_item_t> create, vector< steam_inventory_destroy_item_t> destroy);
dllx double steam_inventory_exchange_items_raw(void* _ptr) {
	gml_istream _in(_ptr);
	vector<steam_inventory_create_item_t> _arg_create;
	_arg_create = _in.read_vector<steam_inventory_create_item_t>();
	vector< steam_inventory_destroy_item_t> _arg_destroy;
	_arg_destroy = _in.read_vector<steam_inventory_destroy_item_t>();
	SteamInventoryResult_t _ret = steam_inventory_exchange_items(_arg_create, _arg_destroy);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_generate_items(vector<steam_inventory_create_item_t> create);
dllx double steam_inventory_generate_items_raw(void* _ptr) {
	gml_istream _in(_ptr);
	vector<steam_inventory_create_item_t> _arg_create;
	_arg_create = _in.read_vector<steam_inventory_create_item_t>();
	SteamInventoryResult_t _ret = steam_inventory_generate_items(_arg_create);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryResult_t steam_inventory_get_all_items();
dllx double steam_inventory_get_all_items_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryResult_t _ret = steam_inventory_get_all_items();
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern bool steam_inventory_request_eligible_promo_item_defs(uint64 user_id);
dllx double steam_inventory_request_eligible_promo_item_defs_raw(void* _ptr) {
	gml_istream _in(_ptr);
	uint64 _arg_user_id;
	if (_in.read<bool>()) {
		_arg_user_id = _in.read<uint64>();
	} else _arg_user_id = 0;
	return steam_inventory_request_eligible_promo_item_defs(_arg_user_id);
}

extern SteamInventoryResult_t steam_inventory_get_items_by_id(vector<SteamItemInstanceID_t> item_ids);
dllx double steam_inventory_get_items_by_id_raw(void* _ptr) {
	gml_istream _in(_ptr);
	vector<SteamItemInstanceID_t> _arg_item_ids;
	_arg_item_ids = _in.read_vector<SteamItemInstanceID_t>();
	SteamInventoryResult_t _ret = steam_inventory_get_items_by_id(_arg_item_ids);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern SteamInventoryUpdateHandle_t steam_inventory_start_update_properties();
dllx double steam_inventory_start_update_properties_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _ret = steam_inventory_start_update_properties();
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryUpdateHandle_t>(_ret);
	return 1;
}

extern bool steam_inventory_set_property_bool(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t item_id, const char* prop_name, bool value);
dllx double steam_inventory_set_property_bool_raw(void* _ptr, const char* _arg_prop_name) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	bool _arg_value;
	_arg_value = _in.read<bool>();
	return steam_inventory_set_property_bool(_arg_handle, _arg_item_id, _arg_prop_name, _arg_value);
}

extern bool steam_inventory_set_property_float(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t item_id, const char* prop_name, float value);
dllx double steam_inventory_set_property_float_raw(void* _ptr, const char* _arg_prop_name) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	float _arg_value;
	_arg_value = _in.read<float>();
	return steam_inventory_set_property_float(_arg_handle, _arg_item_id, _arg_prop_name, _arg_value);
}

extern bool steam_inventory_set_property_int(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t item_id, const char* prop_name, int64 value);
dllx double steam_inventory_set_property_int_raw(void* _ptr, const char* _arg_prop_name) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	int64 _arg_value;
	_arg_value = _in.read<int64>();
	return steam_inventory_set_property_int(_arg_handle, _arg_item_id, _arg_prop_name, _arg_value);
}

extern bool steam_inventory_set_property_string(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t item_id, const char* prop_name, const char* value);
dllx double steam_inventory_set_property_string_raw(void* _ptr, const char* _arg_prop_name, const char* _arg_value) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	return steam_inventory_set_property_string(_arg_handle, _arg_item_id, _arg_prop_name, _arg_value);
}

extern bool steam_inventory_remove_property(SteamInventoryUpdateHandle_t handle, SteamItemInstanceID_t item_id, const char* prop_name);
dllx double steam_inventory_remove_property_raw(void* _ptr, const char* _arg_prop_name) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamItemInstanceID_t _arg_item_id;
	_arg_item_id = _in.read<SteamItemInstanceID_t>();
	return steam_inventory_remove_property(_arg_handle, _arg_item_id, _arg_prop_name);
}

extern SteamInventoryResult_t steam_inventory_submit_update_properties(SteamInventoryUpdateHandle_t handle);
dllx double steam_inventory_submit_update_properties_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamInventoryUpdateHandle_t _arg_handle;
	_arg_handle = _in.read<SteamInventoryUpdateHandle_t>();
	SteamInventoryResult_t _ret = steam_inventory_submit_update_properties(_arg_handle);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern bool steam_inventory_load_item_definitions();
dllx double steam_inventory_load_item_definitions_raw(void* _ptr) {
	gml_istream _in(_ptr);
	return steam_inventory_load_item_definitions();
}

extern optional<uint64> steam_inventory_get_item_price(SteamItemDef_t item_def);
dllx double steam_inventory_get_item_price_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamItemDef_t _arg_item_def;
	_arg_item_def = _in.read<SteamItemDef_t>();
	optional<uint64> _ret = steam_inventory_get_item_price(_arg_item_def);
	gml_ostream _out(_ptr);
	{
		auto& _opt = _ret;
		if (_opt.has_value()) {
			_out.write<bool>(true);
			_out.write<uint64>(_opt.value());
			
		} else _out.write<bool>(false);
		
	}
	return 1;
}

extern optional<vector<steam_inventory_get_item_prices_t>> steam_inventory_get_items_with_prices();
static vector<steam_inventory_get_item_prices_t> steam_inventory_get_items_with_prices_raw_vec;
dllx double steam_inventory_get_items_with_prices_raw(void* _ptr) {
	gml_istream _in(_ptr);
	auto _ret = steam_inventory_get_items_with_prices();
	if (!_ret.has_value()) return 0;
	steam_inventory_get_items_with_prices_raw_vec = _ret.value();
	return (double)(4 + steam_inventory_get_items_with_prices_raw_vec.size() * sizeof(steam_inventory_get_item_prices_t));
}
dllx double steam_inventory_get_items_with_prices_raw_post(void* _ptr) {
	gml_ostream _out(_ptr);
	_out.write_vector<steam_inventory_get_item_prices_t>(steam_inventory_get_items_with_prices_raw_vec);
	return 1;
}

extern bool steam_inventory_request_prices();
dllx double steam_inventory_request_prices_raw(void* _ptr) {
	gml_istream _in(_ptr);
	return steam_inventory_request_prices();
}

extern SteamInventoryResult_t steam_inventory_transfer_item_quantity(SteamItemInstanceID_t source_item_id, uint32 quantity, SteamItemInstanceID_t dest_item_id);
dllx double steam_inventory_transfer_item_quantity_raw(void* _ptr) {
	gml_istream _in(_ptr);
	SteamItemInstanceID_t _arg_source_item_id;
	_arg_source_item_id = _in.read<SteamItemInstanceID_t>();
	uint32 _arg_quantity;
	_arg_quantity = _in.read<uint32>();
	SteamItemInstanceID_t _arg_dest_item_id;
	_arg_dest_item_id = _in.read<SteamItemInstanceID_t>();
	SteamInventoryResult_t _ret = steam_inventory_transfer_item_quantity(_arg_source_item_id, _arg_quantity, _arg_dest_item_id);
	gml_ostream _out(_ptr);
	_out.write<SteamInventoryResult_t>(_ret);
	return 1;
}

extern bool steam_lobby_send_chat_message(const char* text);
dllx double steam_lobby_send_chat_message_raw(void* _ptr, const char* _arg_text) {
	gml_istream _in(_ptr);
	return steam_lobby_send_chat_message(_arg_text);
}

extern double steam_lobby_send_chat_message_buffer(gml_buffer buf, int size);
dllx double steam_lobby_send_chat_message_buffer_raw(void* _ptr) {
	gml_istream _in(_ptr);
	gml_buffer _arg_buf;
	_arg_buf = _in.read_gml_buffer();
	int _arg_size;
	if (_in.read<bool>()) {
		_arg_size = _in.read<int>();
	} else _arg_size = -1;
	return steam_lobby_send_chat_message_buffer(_arg_buf, _arg_size);
}

extern bool steam_lobby_get_chat_message_data(int64_t message_index, gml_buffer buf);
dllx double steam_lobby_get_chat_message_data_raw(void* _ptr) {
	gml_istream _in(_ptr);
	int64_t _arg_message_index;
	_arg_message_index = _in.read<int64_t>();
	gml_buffer _arg_buf;
	_arg_buf = _in.read_gml_buffer();
	return steam_lobby_get_chat_message_data(_arg_message_index, _arg_buf);
}

extern bool steam_lobby_set_joinable(bool joinable);
dllx double steam_lobby_set_joinable_raw(void* _ptr) {
	gml_istream _in(_ptr);
	bool _arg_joinable;
	_arg_joinable = _in.read<bool>();
	return steam_lobby_set_joinable(_arg_joinable);
}

extern vector<steam_get_friends_game_info_t> steam_get_friends_game_info();
static vector<steam_get_friends_game_info_t> steam_get_friends_game_info_raw_vec;
dllx double steam_get_friends_game_info_raw(void* _ptr) {
	gml_istream _in(_ptr);
	steam_get_friends_game_info_raw_vec = steam_get_friends_game_info();
	return (double)(4 + steam_get_friends_game_info_raw_vec.size() * sizeof(steam_get_friends_game_info_t));
}
dllx double steam_get_friends_game_info_raw_post(void* _ptr) {
	gml_ostream _out(_ptr);
	_out.write_vector<steam_get_friends_game_info_t>(steam_get_friends_game_info_raw_vec);
	return 1;
}

extern const char* steam_get_user_persona_name_sync(uint64_t user_id);
dllx const char* steam_get_user_persona_name_sync_raw(void* _ptr) {
	gml_istream _in(_ptr);
	uint64_t _arg_user_id;
	_arg_user_id = _in.read<uint64_t>();
	return steam_get_user_persona_name_sync(_arg_user_id);
}

extern steam_image_id steam_get_user_avatar(uint64_t user_id, int avatar_size);
dllx double steam_get_user_avatar_raw(void* _ptr) {
	gml_istream _in(_ptr);
	uint64_t _arg_user_id;
	_arg_user_id = _in.read<uint64_t>();
	int _arg_avatar_size;
	_arg_avatar_size = _in.read<int>();
	return steam_get_user_avatar(_arg_user_id, _arg_avatar_size);
}

extern std::optional<std::tuple<int, int>> steam_image_get_size(steam_image_id img);
dllx double steam_image_get_size_raw(void* _ptr) {
	gml_istream _in(_ptr);
	steam_image_id _arg_img;
	_arg_img = _in.read<steam_image_id>();
	std::optional<std::tuple<int, int>> _ret = steam_image_get_size(_arg_img);
	gml_ostream _out(_ptr);
	{
		auto& _opt = _ret;
		if (_opt.has_value()) {
			_out.write<bool>(true);
			_out.write_tuple<int, int>(_opt.value());
			
		} else _out.write<bool>(false);
		
	}
	return 1;
}

extern bool steam_image_get_rgba(steam_image_id img, gml_buffer dest_buf);
dllx double steam_image_get_rgba_raw(void* _ptr) {
	gml_istream _in(_ptr);
	steam_image_id _arg_img;
	_arg_img = _in.read<steam_image_id>();
	gml_buffer _arg_dest_buf;
	_arg_dest_buf = _in.read_gml_buffer();
	return steam_image_get_rgba(_arg_img, _arg_dest_buf);
}

extern bool steam_image_get_bgra(steam_image_id img, gml_buffer dest_buf);
dllx double steam_image_get_bgra_raw(void* _ptr) {
	gml_istream _in(_ptr);
	steam_image_id _arg_img;
	_arg_img = _in.read<steam_image_id>();
	gml_buffer _arg_dest_buf;
	_arg_dest_buf = _in.read_gml_buffer();
	return steam_image_get_bgra(_arg_img, _arg_dest_buf);
}

