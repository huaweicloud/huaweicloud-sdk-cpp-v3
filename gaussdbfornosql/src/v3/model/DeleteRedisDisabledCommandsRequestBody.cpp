

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteRedisDisabledCommandsRequestBody::DeleteRedisDisabledCommandsRequestBody()
{
    disabledType_ = "";
    disabledTypeIsSet_ = false;
    commandsIsSet_ = false;
    keysIsSet_ = false;
}

DeleteRedisDisabledCommandsRequestBody::~DeleteRedisDisabledCommandsRequestBody() = default;

void DeleteRedisDisabledCommandsRequestBody::validate()
{
}

web::json::value DeleteRedisDisabledCommandsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disabledTypeIsSet_) {
        val[utility::conversions::to_string_t("disabled_type")] = ModelBase::toJson(disabledType_);
    }
    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }
    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }

    return val;
}
bool DeleteRedisDisabledCommandsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disabled_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabledType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commands"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commands"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommands(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<RedisDisabledCommandsDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    return ok;
}


std::string DeleteRedisDisabledCommandsRequestBody::getDisabledType() const
{
    return disabledType_;
}

void DeleteRedisDisabledCommandsRequestBody::setDisabledType(const std::string& value)
{
    disabledType_ = value;
    disabledTypeIsSet_ = true;
}

bool DeleteRedisDisabledCommandsRequestBody::disabledTypeIsSet() const
{
    return disabledTypeIsSet_;
}

void DeleteRedisDisabledCommandsRequestBody::unsetdisabledType()
{
    disabledTypeIsSet_ = false;
}

std::vector<std::string>& DeleteRedisDisabledCommandsRequestBody::getCommands()
{
    return commands_;
}

void DeleteRedisDisabledCommandsRequestBody::setCommands(const std::vector<std::string>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool DeleteRedisDisabledCommandsRequestBody::commandsIsSet() const
{
    return commandsIsSet_;
}

void DeleteRedisDisabledCommandsRequestBody::unsetcommands()
{
    commandsIsSet_ = false;
}

std::vector<RedisDisabledCommandsDetail>& DeleteRedisDisabledCommandsRequestBody::getKeys()
{
    return keys_;
}

void DeleteRedisDisabledCommandsRequestBody::setKeys(const std::vector<RedisDisabledCommandsDetail>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool DeleteRedisDisabledCommandsRequestBody::keysIsSet() const
{
    return keysIsSet_;
}

void DeleteRedisDisabledCommandsRequestBody::unsetkeys()
{
    keysIsSet_ = false;
}

}
}
}
}
}


