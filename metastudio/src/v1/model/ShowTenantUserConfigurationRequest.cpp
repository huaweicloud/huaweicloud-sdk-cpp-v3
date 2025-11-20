

#include "huaweicloud/metastudio/v1/model/ShowTenantUserConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantUserConfigurationRequest::ShowTenantUserConfigurationRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowTenantUserConfigurationRequest::~ShowTenantUserConfigurationRequest() = default;

void ShowTenantUserConfigurationRequest::validate()
{
}

web::json::value ShowTenantUserConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ShowTenantUserConfigurationRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ShowTenantUserConfigurationRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTenantUserConfigurationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTenantUserConfigurationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTenantUserConfigurationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTenantUserConfigurationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTenantUserConfigurationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTenantUserConfigurationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTenantUserConfigurationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTenantUserConfigurationRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTenantUserConfigurationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTenantUserConfigurationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTenantUserConfigurationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ShowTenantUserConfigurationRequest::getLimit() const
{
    return limit_;
}

void ShowTenantUserConfigurationRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTenantUserConfigurationRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTenantUserConfigurationRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowTenantUserConfigurationRequest::getOffset() const
{
    return offset_;
}

void ShowTenantUserConfigurationRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTenantUserConfigurationRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTenantUserConfigurationRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


