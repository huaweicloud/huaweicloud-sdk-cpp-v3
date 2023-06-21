

#include "huaweicloud/cloudtable/v2/model/Nics.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




Nics::Nics()
{
    netId_ = "";
    netIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

Nics::~Nics() = default;

void Nics::validate()
{
}

web::json::value Nics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(netIdIsSet_) {
        val[utility::conversions::to_string_t("net_id")] = ModelBase::toJson(netId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }

    return val;
}

bool Nics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    return ok;
}


std::string Nics::getNetId() const
{
    return netId_;
}

void Nics::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool Nics::netIdIsSet() const
{
    return netIdIsSet_;
}

void Nics::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string Nics::getSecurityGroupId() const
{
    return securityGroupId_;
}

void Nics::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool Nics::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void Nics::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


