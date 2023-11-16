

#include "huaweicloud/aad/v1/model/UpdateProtectedIpInPolicyBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




UpdateProtectedIpInPolicyBody::UpdateProtectedIpInPolicyBody()
{
    id_ = "";
    idIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateProtectedIpInPolicyBody::~UpdateProtectedIpInPolicyBody() = default;

void UpdateProtectedIpInPolicyBody::validate()
{
}

web::json::value UpdateProtectedIpInPolicyBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UpdateProtectedIpInPolicyBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string UpdateProtectedIpInPolicyBody::getId() const
{
    return id_;
}

void UpdateProtectedIpInPolicyBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateProtectedIpInPolicyBody::idIsSet() const
{
    return idIsSet_;
}

void UpdateProtectedIpInPolicyBody::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateProtectedIpInPolicyBody::getIp() const
{
    return ip_;
}

void UpdateProtectedIpInPolicyBody::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateProtectedIpInPolicyBody::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateProtectedIpInPolicyBody::unsetip()
{
    ipIsSet_ = false;
}

std::string UpdateProtectedIpInPolicyBody::getType() const
{
    return type_;
}

void UpdateProtectedIpInPolicyBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateProtectedIpInPolicyBody::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateProtectedIpInPolicyBody::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateProtectedIpInPolicyBody::getName() const
{
    return name_;
}

void UpdateProtectedIpInPolicyBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateProtectedIpInPolicyBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateProtectedIpInPolicyBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


