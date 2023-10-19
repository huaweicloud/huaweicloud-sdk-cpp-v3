

#include "huaweicloud/gaussdb/v3/model/AccessControlRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AccessControlRule::AccessControlRule()
{
    ip_ = "";
    ipIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AccessControlRule::~AccessControlRule() = default;

void AccessControlRule::validate()
{
}

web::json::value AccessControlRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AccessControlRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string AccessControlRule::getIp() const
{
    return ip_;
}

void AccessControlRule::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool AccessControlRule::ipIsSet() const
{
    return ipIsSet_;
}

void AccessControlRule::unsetip()
{
    ipIsSet_ = false;
}

std::string AccessControlRule::getDescription() const
{
    return description_;
}

void AccessControlRule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AccessControlRule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AccessControlRule::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


