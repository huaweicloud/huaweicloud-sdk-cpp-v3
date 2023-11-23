

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchIpGroupRequestBody::SwitchIpGroupRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    ipGroupsIsSet_ = false;
}

SwitchIpGroupRequestBody::~SwitchIpGroupRequestBody() = default;

void SwitchIpGroupRequestBody::validate()
{
}

web::json::value SwitchIpGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(ipGroupsIsSet_) {
        val[utility::conversions::to_string_t("ip_groups")] = ModelBase::toJson(ipGroups_);
    }

    return val;
}
bool SwitchIpGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SwitchIpGroupRequestBody_ip_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroups(refVal);
        }
    }
    return ok;
}


std::string SwitchIpGroupRequestBody::getType() const
{
    return type_;
}

void SwitchIpGroupRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SwitchIpGroupRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void SwitchIpGroupRequestBody::unsettype()
{
    typeIsSet_ = false;
}

bool SwitchIpGroupRequestBody::isEnabled() const
{
    return enabled_;
}

void SwitchIpGroupRequestBody::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool SwitchIpGroupRequestBody::enabledIsSet() const
{
    return enabledIsSet_;
}

void SwitchIpGroupRequestBody::unsetenabled()
{
    enabledIsSet_ = false;
}

std::vector<SwitchIpGroupRequestBody_ip_groups>& SwitchIpGroupRequestBody::getIpGroups()
{
    return ipGroups_;
}

void SwitchIpGroupRequestBody::setIpGroups(const std::vector<SwitchIpGroupRequestBody_ip_groups>& value)
{
    ipGroups_ = value;
    ipGroupsIsSet_ = true;
}

bool SwitchIpGroupRequestBody::ipGroupsIsSet() const
{
    return ipGroupsIsSet_;
}

void SwitchIpGroupRequestBody::unsetipGroups()
{
    ipGroupsIsSet_ = false;
}

}
}
}
}
}


