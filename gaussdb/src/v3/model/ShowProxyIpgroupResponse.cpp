

#include "huaweicloud/gaussdb/v3/model/ShowProxyIpgroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyIpgroupResponse::ShowProxyIpgroupResponse()
{
    enableIpGroup_ = false;
    enableIpGroupIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    ipGroupIsSet_ = false;
}

ShowProxyIpgroupResponse::~ShowProxyIpgroupResponse() = default;

void ShowProxyIpgroupResponse::validate()
{
}

web::json::value ShowProxyIpgroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIpGroupIsSet_) {
        val[utility::conversions::to_string_t("enable_ip_group")] = ModelBase::toJson(enableIpGroup_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(ipGroupIsSet_) {
        val[utility::conversions::to_string_t("ip_group")] = ModelBase::toJson(ipGroup_);
    }

    return val;
}
bool ShowProxyIpgroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_ip_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ip_group"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableIpGroup(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ip_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_group"));
        if(!fieldValue.is_null())
        {
            ProxyIpGroupDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpGroup(refVal);
        }
    }
    return ok;
}


bool ShowProxyIpgroupResponse::isEnableIpGroup() const
{
    return enableIpGroup_;
}

void ShowProxyIpgroupResponse::setEnableIpGroup(bool value)
{
    enableIpGroup_ = value;
    enableIpGroupIsSet_ = true;
}

bool ShowProxyIpgroupResponse::enableIpGroupIsSet() const
{
    return enableIpGroupIsSet_;
}

void ShowProxyIpgroupResponse::unsetenableIpGroup()
{
    enableIpGroupIsSet_ = false;
}

std::string ShowProxyIpgroupResponse::getType() const
{
    return type_;
}

void ShowProxyIpgroupResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowProxyIpgroupResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowProxyIpgroupResponse::unsettype()
{
    typeIsSet_ = false;
}

ProxyIpGroupDetail ShowProxyIpgroupResponse::getIpGroup() const
{
    return ipGroup_;
}

void ShowProxyIpgroupResponse::setIpGroup(const ProxyIpGroupDetail& value)
{
    ipGroup_ = value;
    ipGroupIsSet_ = true;
}

bool ShowProxyIpgroupResponse::ipGroupIsSet() const
{
    return ipGroupIsSet_;
}

void ShowProxyIpgroupResponse::unsetipGroup()
{
    ipGroupIsSet_ = false;
}

}
}
}
}
}


