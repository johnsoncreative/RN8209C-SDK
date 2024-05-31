#include "ConfigManager/ConfigManager.h"
#include "rn8209_flash.h"

extern "C" {
    bool read_rn8209_param_struct(struct rn8209c_flash* data) {
        ConfigManager configManager("/rn8209_param.bin");
        return configManager.readStruct(data, sizeof(struct rn8209c_flash));
    }

    bool write_rn8209_param_struct(const struct rn8209c_flash* data) {
        ConfigManager configManager("/rn8209_param.bin");
        return configManager.writeStruct(data, sizeof(struct rn8209c_flash));
    }
}
