

#include "huaweicloud/live/v1/model/IPAuthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




IPAuthInfo::IPAuthInfo()
{
    domain_ = "";
    domainIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    ipAuthList_ = "";
    ipAuthListIsSet_ = false;
}

IPAuthInfo::~IPAuthInfo() = default;

void IPAuthInfo::validate()
{
}

web::json::value IPAuthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(ipAuthListIsSet_) {
        val[utility::conversions::to_string_t("ip_auth_list")] = ModelBase::toJson(ipAuthList_);
    }

    return val;
}
bool IPAuthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_auth_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_auth_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAuthList(refVal);
        }
    }
    return ok;
}


std::string IPAuthInfo::getDomain() const
{
    return domain_;
}

void IPAuthInfo::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool IPAuthInfo::domainIsSet() const
{
    return domainIsSet_;
}

void IPAuthInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string IPAuthInfo::getAuthType() const
{
    return authType_;
}

void IPAuthInfo::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool IPAuthInfo::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void IPAuthInfo::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string IPAuthInfo::getIpAuthList() const
{
    return ipAuthList_;
}

void IPAuthInfo::setIpAuthList(const std::string& value)
{
    ipAuthList_ = value;
    ipAuthListIsSet_ = true;
}

bool IPAuthInfo::ipAuthListIsSet() const
{
    return ipAuthListIsSet_;
}

void IPAuthInfo::unsetipAuthList()
{
    ipAuthListIsSet_ = false;
}

}
}
}
}
}


