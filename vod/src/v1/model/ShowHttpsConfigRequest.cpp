

#include "huaweicloud/vod/v1/model/ShowHttpsConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowHttpsConfigRequest::ShowHttpsConfigRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
}

ShowHttpsConfigRequest::~ShowHttpsConfigRequest() = default;

void ShowHttpsConfigRequest::validate()
{
}

web::json::value ShowHttpsConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ShowHttpsConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string ShowHttpsConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowHttpsConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowHttpsConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowHttpsConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowHttpsConfigRequest::getDomain() const
{
    return domain_;
}

void ShowHttpsConfigRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowHttpsConfigRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowHttpsConfigRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


