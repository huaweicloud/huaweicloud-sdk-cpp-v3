

#include "huaweicloud/identitycenter/v1/model/DescribeApplicationProviderRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeApplicationProviderRequest::DescribeApplicationProviderRequest()
{
    applicationProviderId_ = "";
    applicationProviderIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

DescribeApplicationProviderRequest::~DescribeApplicationProviderRequest() = default;

void DescribeApplicationProviderRequest::validate()
{
}

web::json::value DescribeApplicationProviderRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationProviderIdIsSet_) {
        val[utility::conversions::to_string_t("application_provider_id")] = ModelBase::toJson(applicationProviderId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool DescribeApplicationProviderRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationProviderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    return ok;
}


std::string DescribeApplicationProviderRequest::getApplicationProviderId() const
{
    return applicationProviderId_;
}

void DescribeApplicationProviderRequest::setApplicationProviderId(const std::string& value)
{
    applicationProviderId_ = value;
    applicationProviderIdIsSet_ = true;
}

bool DescribeApplicationProviderRequest::applicationProviderIdIsSet() const
{
    return applicationProviderIdIsSet_;
}

void DescribeApplicationProviderRequest::unsetapplicationProviderId()
{
    applicationProviderIdIsSet_ = false;
}

std::string DescribeApplicationProviderRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeApplicationProviderRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeApplicationProviderRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeApplicationProviderRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


