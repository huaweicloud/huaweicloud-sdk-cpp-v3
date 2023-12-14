

#include "huaweicloud/live/v1/model/ListIpAuthListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListIpAuthListResponse::ListIpAuthListResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    authType_ = "";
    authTypeIsSet_ = false;
    ipAuthList_ = "";
    ipAuthListIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListIpAuthListResponse::~ListIpAuthListResponse() = default;

void ListIpAuthListResponse::validate()
{
}

web::json::value ListIpAuthListResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListIpAuthListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ListIpAuthListResponse::getDomain() const
{
    return domain_;
}

void ListIpAuthListResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListIpAuthListResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ListIpAuthListResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListIpAuthListResponse::getAuthType() const
{
    return authType_;
}

void ListIpAuthListResponse::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool ListIpAuthListResponse::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void ListIpAuthListResponse::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string ListIpAuthListResponse::getIpAuthList() const
{
    return ipAuthList_;
}

void ListIpAuthListResponse::setIpAuthList(const std::string& value)
{
    ipAuthList_ = value;
    ipAuthListIsSet_ = true;
}

bool ListIpAuthListResponse::ipAuthListIsSet() const
{
    return ipAuthListIsSet_;
}

void ListIpAuthListResponse::unsetipAuthList()
{
    ipAuthListIsSet_ = false;
}

std::string ListIpAuthListResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListIpAuthListResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListIpAuthListResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListIpAuthListResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


