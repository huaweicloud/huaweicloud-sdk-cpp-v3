

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisDisabledCommandsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisDisabledCommandsResponse::ShowRedisDisabledCommandsResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    disabledType_ = "";
    disabledTypeIsSet_ = false;
    commandsIsSet_ = false;
    keysIsSet_ = false;
}

ShowRedisDisabledCommandsResponse::~ShowRedisDisabledCommandsResponse() = default;

void ShowRedisDisabledCommandsResponse::validate()
{
}

web::json::value ShowRedisDisabledCommandsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
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
bool ShowRedisDisabledCommandsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
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


std::string ShowRedisDisabledCommandsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowRedisDisabledCommandsResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowRedisDisabledCommandsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowRedisDisabledCommandsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::string ShowRedisDisabledCommandsResponse::getDisabledType() const
{
    return disabledType_;
}

void ShowRedisDisabledCommandsResponse::setDisabledType(const std::string& value)
{
    disabledType_ = value;
    disabledTypeIsSet_ = true;
}

bool ShowRedisDisabledCommandsResponse::disabledTypeIsSet() const
{
    return disabledTypeIsSet_;
}

void ShowRedisDisabledCommandsResponse::unsetdisabledType()
{
    disabledTypeIsSet_ = false;
}

std::vector<std::string>& ShowRedisDisabledCommandsResponse::getCommands()
{
    return commands_;
}

void ShowRedisDisabledCommandsResponse::setCommands(const std::vector<std::string>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool ShowRedisDisabledCommandsResponse::commandsIsSet() const
{
    return commandsIsSet_;
}

void ShowRedisDisabledCommandsResponse::unsetcommands()
{
    commandsIsSet_ = false;
}

std::vector<RedisDisabledCommandsDetail>& ShowRedisDisabledCommandsResponse::getKeys()
{
    return keys_;
}

void ShowRedisDisabledCommandsResponse::setKeys(const std::vector<RedisDisabledCommandsDetail>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool ShowRedisDisabledCommandsResponse::keysIsSet() const
{
    return keysIsSet_;
}

void ShowRedisDisabledCommandsResponse::unsetkeys()
{
    keysIsSet_ = false;
}

}
}
}
}
}


