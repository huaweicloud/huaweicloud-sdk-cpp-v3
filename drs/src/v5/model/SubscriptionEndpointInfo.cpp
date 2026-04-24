

#include "huaweicloud/drs/v5/model/SubscriptionEndpointInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SubscriptionEndpointInfo::SubscriptionEndpointInfo()
{
    dbInstanceId_ = "";
    dbInstanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

SubscriptionEndpointInfo::~SubscriptionEndpointInfo() = default;

void SubscriptionEndpointInfo::validate()
{
}

web::json::value SubscriptionEndpointInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("db_instance_id")] = ModelBase::toJson(dbInstanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool SubscriptionEndpointInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string SubscriptionEndpointInfo::getDbInstanceId() const
{
    return dbInstanceId_;
}

void SubscriptionEndpointInfo::setDbInstanceId(const std::string& value)
{
    dbInstanceId_ = value;
    dbInstanceIdIsSet_ = true;
}

bool SubscriptionEndpointInfo::dbInstanceIdIsSet() const
{
    return dbInstanceIdIsSet_;
}

void SubscriptionEndpointInfo::unsetdbInstanceId()
{
    dbInstanceIdIsSet_ = false;
}

std::string SubscriptionEndpointInfo::getName() const
{
    return name_;
}

void SubscriptionEndpointInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubscriptionEndpointInfo::nameIsSet() const
{
    return nameIsSet_;
}

void SubscriptionEndpointInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string SubscriptionEndpointInfo::getIp() const
{
    return ip_;
}

void SubscriptionEndpointInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool SubscriptionEndpointInfo::ipIsSet() const
{
    return ipIsSet_;
}

void SubscriptionEndpointInfo::unsetip()
{
    ipIsSet_ = false;
}

int32_t SubscriptionEndpointInfo::getPort() const
{
    return port_;
}

void SubscriptionEndpointInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool SubscriptionEndpointInfo::portIsSet() const
{
    return portIsSet_;
}

void SubscriptionEndpointInfo::unsetport()
{
    portIsSet_ = false;
}

std::string SubscriptionEndpointInfo::getType() const
{
    return type_;
}

void SubscriptionEndpointInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SubscriptionEndpointInfo::typeIsSet() const
{
    return typeIsSet_;
}

void SubscriptionEndpointInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string SubscriptionEndpointInfo::getUserName() const
{
    return userName_;
}

void SubscriptionEndpointInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SubscriptionEndpointInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void SubscriptionEndpointInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


