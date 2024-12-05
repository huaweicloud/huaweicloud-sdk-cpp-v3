

#include "huaweicloud/gaussdbfornosql/v3/model/RedisDisabledCommandsDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisDisabledCommandsDetail::RedisDisabledCommandsDetail()
{
    dbId_ = "";
    dbIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    commandsIsSet_ = false;
}

RedisDisabledCommandsDetail::~RedisDisabledCommandsDetail() = default;

void RedisDisabledCommandsDetail::validate()
{
}

web::json::value RedisDisabledCommandsDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(commandsIsSet_) {
        val[utility::conversions::to_string_t("commands")] = ModelBase::toJson(commands_);
    }

    return val;
}
bool RedisDisabledCommandsDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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
    return ok;
}


std::string RedisDisabledCommandsDetail::getDbId() const
{
    return dbId_;
}

void RedisDisabledCommandsDetail::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool RedisDisabledCommandsDetail::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void RedisDisabledCommandsDetail::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string RedisDisabledCommandsDetail::getKey() const
{
    return key_;
}

void RedisDisabledCommandsDetail::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool RedisDisabledCommandsDetail::keyIsSet() const
{
    return keyIsSet_;
}

void RedisDisabledCommandsDetail::unsetkey()
{
    keyIsSet_ = false;
}

std::vector<std::string>& RedisDisabledCommandsDetail::getCommands()
{
    return commands_;
}

void RedisDisabledCommandsDetail::setCommands(const std::vector<std::string>& value)
{
    commands_ = value;
    commandsIsSet_ = true;
}

bool RedisDisabledCommandsDetail::commandsIsSet() const
{
    return commandsIsSet_;
}

void RedisDisabledCommandsDetail::unsetcommands()
{
    commandsIsSet_ = false;
}

}
}
}
}
}


