#include "cli_command_table.h"
#include "cli_types.h"
#include "gettempperature_ci.h"
#include "settemprature_ci.h"
#include "effect_led_ci.h"

const cli_command_info_t command_infor_gettemp =
{
	gettempearture,
	"get temp from LM35"
};
const cli_command_info_t command_infor_settemp_max =
{
	setTempeartureMax,
	"set temp max"
};
const cli_command_info_t command_infor_setEffectLed  =
{
	set_effect_led,
	"set effect of led"
};

const cli_command_entry_t command_entry_table[] =
{
	{"gettemp",&command_infor_gettemp},
	{"setTempMax",&command_infor_settemp_max},
	{"setEffectLed",&command_infor_setEffectLed},
	{NULL,NULL}
};
