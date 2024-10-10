

#include "huaweicloud/aad/v2/model/BlackWhiteListRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




BlackWhiteListRule::BlackWhiteListRule()
{
    id_ = "";
    idIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

BlackWhiteListRule::~BlackWhiteListRule() = default;

void BlackWhiteListRule::validate()
{
}

web::json::value BlackWhiteListRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool BlackWhiteListRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}


std::string BlackWhiteListRule::getId() const
{
    return id_;
}

void BlackWhiteListRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BlackWhiteListRule::idIsSet() const
{
    return idIsSet_;
}

void BlackWhiteListRule::unsetid()
{
    idIsSet_ = false;
}

int32_t BlackWhiteListRule::getType() const
{
    return type_;
}

void BlackWhiteListRule::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BlackWhiteListRule::typeIsSet() const
{
    return typeIsSet_;
}

void BlackWhiteListRule::unsettype()
{
    typeIsSet_ = false;
}

std::string BlackWhiteListRule::getIp() const
{
    return ip_;
}

void BlackWhiteListRule::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BlackWhiteListRule::ipIsSet() const
{
    return ipIsSet_;
}

void BlackWhiteListRule::unsetip()
{
    ipIsSet_ = false;
}

std::string BlackWhiteListRule::getDomainId() const
{
    return domainId_;
}

void BlackWhiteListRule::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool BlackWhiteListRule::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void BlackWhiteListRule::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


