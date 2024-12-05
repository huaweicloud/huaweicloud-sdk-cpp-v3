

#include "huaweicloud/gaussdbfornosql/v3/model/HotKeysInfoResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




HotKeysInfoResponseBody::HotKeysInfoResponseBody()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    command_ = "";
    commandIsSet_ = false;
    qps_ = 0;
    qpsIsSet_ = false;
    dbId_ = 0;
    dbIdIsSet_ = false;
}

HotKeysInfoResponseBody::~HotKeysInfoResponseBody() = default;

void HotKeysInfoResponseBody::validate()
{
}

web::json::value HotKeysInfoResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(commandIsSet_) {
        val[utility::conversions::to_string_t("command")] = ModelBase::toJson(command_);
    }
    if(qpsIsSet_) {
        val[utility::conversions::to_string_t("qps")] = ModelBase::toJson(qps_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }

    return val;
}
bool HotKeysInfoResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("command"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("command"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommand(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    return ok;
}


std::string HotKeysInfoResponseBody::getName() const
{
    return name_;
}

void HotKeysInfoResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HotKeysInfoResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void HotKeysInfoResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string HotKeysInfoResponseBody::getType() const
{
    return type_;
}

void HotKeysInfoResponseBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HotKeysInfoResponseBody::typeIsSet() const
{
    return typeIsSet_;
}

void HotKeysInfoResponseBody::unsettype()
{
    typeIsSet_ = false;
}

std::string HotKeysInfoResponseBody::getCommand() const
{
    return command_;
}

void HotKeysInfoResponseBody::setCommand(const std::string& value)
{
    command_ = value;
    commandIsSet_ = true;
}

bool HotKeysInfoResponseBody::commandIsSet() const
{
    return commandIsSet_;
}

void HotKeysInfoResponseBody::unsetcommand()
{
    commandIsSet_ = false;
}

int32_t HotKeysInfoResponseBody::getQps() const
{
    return qps_;
}

void HotKeysInfoResponseBody::setQps(int32_t value)
{
    qps_ = value;
    qpsIsSet_ = true;
}

bool HotKeysInfoResponseBody::qpsIsSet() const
{
    return qpsIsSet_;
}

void HotKeysInfoResponseBody::unsetqps()
{
    qpsIsSet_ = false;
}

int32_t HotKeysInfoResponseBody::getDbId() const
{
    return dbId_;
}

void HotKeysInfoResponseBody::setDbId(int32_t value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool HotKeysInfoResponseBody::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void HotKeysInfoResponseBody::unsetdbId()
{
    dbIdIsSet_ = false;
}

}
}
}
}
}


