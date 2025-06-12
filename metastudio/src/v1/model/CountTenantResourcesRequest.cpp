

#include "huaweicloud/metastudio/v1/model/CountTenantResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CountTenantResourcesRequest::CountTenantResourcesRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    business_ = "";
    businessIsSet_ = false;
    resourceExpireStartTime_ = "";
    resourceExpireStartTimeIsSet_ = false;
    resourceExpireEndTime_ = "";
    resourceExpireEndTimeIsSet_ = false;
}

CountTenantResourcesRequest::~CountTenantResourcesRequest() = default;

void CountTenantResourcesRequest::validate()
{
}

web::json::value CountTenantResourcesRequest::toJson() const
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
    if(businessIsSet_) {
        val[utility::conversions::to_string_t("business")] = ModelBase::toJson(business_);
    }
    if(resourceExpireStartTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_start_time")] = ModelBase::toJson(resourceExpireStartTime_);
    }
    if(resourceExpireEndTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_end_time")] = ModelBase::toJson(resourceExpireEndTime_);
    }

    return val;
}
bool CountTenantResourcesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("business"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiness(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireEndTime(refVal);
        }
    }
    return ok;
}


std::string CountTenantResourcesRequest::getAuthorization() const
{
    return authorization_;
}

void CountTenantResourcesRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CountTenantResourcesRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CountTenantResourcesRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CountTenantResourcesRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CountTenantResourcesRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CountTenantResourcesRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CountTenantResourcesRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CountTenantResourcesRequest::getXProjectId() const
{
    return xProjectId_;
}

void CountTenantResourcesRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CountTenantResourcesRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CountTenantResourcesRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CountTenantResourcesRequest::getBusiness() const
{
    return business_;
}

void CountTenantResourcesRequest::setBusiness(const std::string& value)
{
    business_ = value;
    businessIsSet_ = true;
}

bool CountTenantResourcesRequest::businessIsSet() const
{
    return businessIsSet_;
}

void CountTenantResourcesRequest::unsetbusiness()
{
    businessIsSet_ = false;
}

std::string CountTenantResourcesRequest::getResourceExpireStartTime() const
{
    return resourceExpireStartTime_;
}

void CountTenantResourcesRequest::setResourceExpireStartTime(const std::string& value)
{
    resourceExpireStartTime_ = value;
    resourceExpireStartTimeIsSet_ = true;
}

bool CountTenantResourcesRequest::resourceExpireStartTimeIsSet() const
{
    return resourceExpireStartTimeIsSet_;
}

void CountTenantResourcesRequest::unsetresourceExpireStartTime()
{
    resourceExpireStartTimeIsSet_ = false;
}

std::string CountTenantResourcesRequest::getResourceExpireEndTime() const
{
    return resourceExpireEndTime_;
}

void CountTenantResourcesRequest::setResourceExpireEndTime(const std::string& value)
{
    resourceExpireEndTime_ = value;
    resourceExpireEndTimeIsSet_ = true;
}

bool CountTenantResourcesRequest::resourceExpireEndTimeIsSet() const
{
    return resourceExpireEndTimeIsSet_;
}

void CountTenantResourcesRequest::unsetresourceExpireEndTime()
{
    resourceExpireEndTimeIsSet_ = false;
}

}
}
}
}
}


