

#include "huaweicloud/gaussdbfornosql/v3/model/ShowElbIpGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowElbIpGroupResponse::ShowElbIpGroupResponse()
{
    type_ = "";
    typeIsSet_ = false;
    ipGroupsIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
}

ShowElbIpGroupResponse::~ShowElbIpGroupResponse() = default;

void ShowElbIpGroupResponse::validate()
{
}

web::json::value ShowElbIpGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipGroupsIsSet_) {
        val[utility::conversions::to_string_t("ip_groups")] = ModelBase::toJson(ipGroups_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }

    return val;
}
bool ShowElbIpGroupResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SwitchIpGroupRequestBody_ip_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroups(refVal);
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
    return ok;
}


std::string ShowElbIpGroupResponse::getType() const
{
    return type_;
}

void ShowElbIpGroupResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowElbIpGroupResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowElbIpGroupResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<SwitchIpGroupRequestBody_ip_groups>& ShowElbIpGroupResponse::getIpGroups()
{
    return ipGroups_;
}

void ShowElbIpGroupResponse::setIpGroups(const std::vector<SwitchIpGroupRequestBody_ip_groups>& value)
{
    ipGroups_ = value;
    ipGroupsIsSet_ = true;
}

bool ShowElbIpGroupResponse::ipGroupsIsSet() const
{
    return ipGroupsIsSet_;
}

void ShowElbIpGroupResponse::unsetipGroups()
{
    ipGroupsIsSet_ = false;
}

bool ShowElbIpGroupResponse::isEnabled() const
{
    return enabled_;
}

void ShowElbIpGroupResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ShowElbIpGroupResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void ShowElbIpGroupResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

}
}
}
}
}


