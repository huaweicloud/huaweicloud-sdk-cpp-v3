

#include "huaweicloud/cloudtable/v2/model/Nic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




Nic::Nic()
{
    netId_ = "";
    netIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
}

Nic::~Nic() = default;

void Nic::validate()
{
}

web::json::value Nic::toJson() const
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
bool Nic::fromJson(const web::json::value& val)
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


std::string Nic::getNetId() const
{
    return netId_;
}

void Nic::setNetId(const std::string& value)
{
    netId_ = value;
    netIdIsSet_ = true;
}

bool Nic::netIdIsSet() const
{
    return netIdIsSet_;
}

void Nic::unsetnetId()
{
    netIdIsSet_ = false;
}

std::string Nic::getSecurityGroupId() const
{
    return securityGroupId_;
}

void Nic::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool Nic::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void Nic::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

}
}
}
}
}


