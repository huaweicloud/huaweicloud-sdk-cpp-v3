

#include "huaweicloud/metastudio/v1/model/ShowSummaryUsageDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowSummaryUsageDataRequest::ShowSummaryUsageDataRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

ShowSummaryUsageDataRequest::~ShowSummaryUsageDataRequest() = default;

void ShowSummaryUsageDataRequest::validate()
{
}

web::json::value ShowSummaryUsageDataRequest::toJson() const
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
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool ShowSummaryUsageDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string ShowSummaryUsageDataRequest::getAuthorization() const
{
    return authorization_;
}

void ShowSummaryUsageDataRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowSummaryUsageDataRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowSummaryUsageDataRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowSummaryUsageDataRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowSummaryUsageDataRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowSummaryUsageDataRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowSummaryUsageDataRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowSummaryUsageDataRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getUserId() const
{
    return userId_;
}

void ShowSummaryUsageDataRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowSummaryUsageDataRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getResourceType() const
{
    return resourceType_;
}

void ShowSummaryUsageDataRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowSummaryUsageDataRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getBusinessType() const
{
    return businessType_;
}

void ShowSummaryUsageDataRequest::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ShowSummaryUsageDataRequest::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string ShowSummaryUsageDataRequest::getUnit() const
{
    return unit_;
}

void ShowSummaryUsageDataRequest::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ShowSummaryUsageDataRequest::unitIsSet() const
{
    return unitIsSet_;
}

void ShowSummaryUsageDataRequest::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


