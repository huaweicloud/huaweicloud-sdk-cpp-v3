

#include "huaweicloud/vod/v1/model/ListTopStatisticsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListTopStatisticsRequest::ListTopStatisticsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
}

ListTopStatisticsRequest::~ListTopStatisticsRequest() = default;

void ListTopStatisticsRequest::validate()
{
}

web::json::value ListTopStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }

    return val;
}

bool ListTopStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    return ok;
}


std::string ListTopStatisticsRequest::getAuthorization() const
{
    return authorization_;
}

void ListTopStatisticsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTopStatisticsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTopStatisticsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTopStatisticsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTopStatisticsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTopStatisticsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTopStatisticsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTopStatisticsRequest::getDomain() const
{
    return domain_;
}

void ListTopStatisticsRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListTopStatisticsRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListTopStatisticsRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListTopStatisticsRequest::getDate() const
{
    return date_;
}

void ListTopStatisticsRequest::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ListTopStatisticsRequest::dateIsSet() const
{
    return dateIsSet_;
}

void ListTopStatisticsRequest::unsetdate()
{
    dateIsSet_ = false;
}

}
}
}
}
}


