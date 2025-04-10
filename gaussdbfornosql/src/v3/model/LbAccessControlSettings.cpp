

#include "huaweicloud/gaussdbfornosql/v3/model/LbAccessControlSettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




LbAccessControlSettings::LbAccessControlSettings()
{
    enabled_ = false;
    enabledIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ipGroupsIsSet_ = false;
}

LbAccessControlSettings::~LbAccessControlSettings() = default;

void LbAccessControlSettings::validate()
{
}

web::json::value LbAccessControlSettings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipGroupsIsSet_) {
        val[utility::conversions::to_string_t("ip_groups")] = ModelBase::toJson(ipGroups_);
    }

    return val;
}
bool LbAccessControlSettings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<IpGroupsDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroups(refVal);
        }
    }
    return ok;
}


bool LbAccessControlSettings::isEnabled() const
{
    return enabled_;
}

void LbAccessControlSettings::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool LbAccessControlSettings::enabledIsSet() const
{
    return enabledIsSet_;
}

void LbAccessControlSettings::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string LbAccessControlSettings::getType() const
{
    return type_;
}

void LbAccessControlSettings::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LbAccessControlSettings::typeIsSet() const
{
    return typeIsSet_;
}

void LbAccessControlSettings::unsettype()
{
    typeIsSet_ = false;
}

std::vector<IpGroupsDetail>& LbAccessControlSettings::getIpGroups()
{
    return ipGroups_;
}

void LbAccessControlSettings::setIpGroups(const std::vector<IpGroupsDetail>& value)
{
    ipGroups_ = value;
    ipGroupsIsSet_ = true;
}

bool LbAccessControlSettings::ipGroupsIsSet() const
{
    return ipGroupsIsSet_;
}

void LbAccessControlSettings::unsetipGroups()
{
    ipGroupsIsSet_ = false;
}

}
}
}
}
}


