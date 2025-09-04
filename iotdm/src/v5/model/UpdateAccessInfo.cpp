

#include "huaweicloud/iotdm/v5/model/UpdateAccessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UpdateAccessInfo::UpdateAccessInfo()
{
    accessType_ = "";
    accessTypeIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    publicAddressesEnable_ = false;
    publicAddressesEnableIsSet_ = false;
    ipWhitelistIsSet_ = false;
}

UpdateAccessInfo::~UpdateAccessInfo() = default;

void UpdateAccessInfo::validate()
{
}

web::json::value UpdateAccessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessTypeIsSet_) {
        val[utility::conversions::to_string_t("access_type")] = ModelBase::toJson(accessType_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(publicAddressesEnableIsSet_) {
        val[utility::conversions::to_string_t("public_addresses_enable")] = ModelBase::toJson(publicAddressesEnable_);
    }
    if(ipWhitelistIsSet_) {
        val[utility::conversions::to_string_t("ip_whitelist")] = ModelBase::toJson(ipWhitelist_);
    }

    return val;
}
bool UpdateAccessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_addresses_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_addresses_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicAddressesEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_whitelist"));
        if(!fieldValue.is_null())
        {
            IPWhiteList refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpWhitelist(refVal);
        }
    }
    return ok;
}


std::string UpdateAccessInfo::getAccessType() const
{
    return accessType_;
}

void UpdateAccessInfo::setAccessType(const std::string& value)
{
    accessType_ = value;
    accessTypeIsSet_ = true;
}

bool UpdateAccessInfo::accessTypeIsSet() const
{
    return accessTypeIsSet_;
}

void UpdateAccessInfo::unsetaccessType()
{
    accessTypeIsSet_ = false;
}

std::string UpdateAccessInfo::getDomainName() const
{
    return domainName_;
}

void UpdateAccessInfo::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateAccessInfo::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateAccessInfo::unsetdomainName()
{
    domainNameIsSet_ = false;
}

bool UpdateAccessInfo::isPublicAddressesEnable() const
{
    return publicAddressesEnable_;
}

void UpdateAccessInfo::setPublicAddressesEnable(bool value)
{
    publicAddressesEnable_ = value;
    publicAddressesEnableIsSet_ = true;
}

bool UpdateAccessInfo::publicAddressesEnableIsSet() const
{
    return publicAddressesEnableIsSet_;
}

void UpdateAccessInfo::unsetpublicAddressesEnable()
{
    publicAddressesEnableIsSet_ = false;
}

IPWhiteList UpdateAccessInfo::getIpWhitelist() const
{
    return ipWhitelist_;
}

void UpdateAccessInfo::setIpWhitelist(const IPWhiteList& value)
{
    ipWhitelist_ = value;
    ipWhitelistIsSet_ = true;
}

bool UpdateAccessInfo::ipWhitelistIsSet() const
{
    return ipWhitelistIsSet_;
}

void UpdateAccessInfo::unsetipWhitelist()
{
    ipWhitelistIsSet_ = false;
}

}
}
}
}
}


