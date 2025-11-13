

#include "huaweicloud/metastudio/v1/model/ShowUsageDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowUsageDataRequest::ShowUsageDataRequest()
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
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

ShowUsageDataRequest::~ShowUsageDataRequest() = default;

void ShowUsageDataRequest::validate()
{
}

web::json::value ShowUsageDataRequest::toJson() const
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
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
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
bool ShowUsageDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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


std::string ShowUsageDataRequest::getAuthorization() const
{
    return authorization_;
}

void ShowUsageDataRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowUsageDataRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowUsageDataRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowUsageDataRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowUsageDataRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowUsageDataRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowUsageDataRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowUsageDataRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowUsageDataRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowUsageDataRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowUsageDataRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ShowUsageDataRequest::getLimit() const
{
    return limit_;
}

void ShowUsageDataRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowUsageDataRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowUsageDataRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowUsageDataRequest::getOffset() const
{
    return offset_;
}

void ShowUsageDataRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowUsageDataRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowUsageDataRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowUsageDataRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowUsageDataRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowUsageDataRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowUsageDataRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowUsageDataRequest::getStartTime() const
{
    return startTime_;
}

void ShowUsageDataRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowUsageDataRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowUsageDataRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowUsageDataRequest::getEndTime() const
{
    return endTime_;
}

void ShowUsageDataRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowUsageDataRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowUsageDataRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowUsageDataRequest::getUserId() const
{
    return userId_;
}

void ShowUsageDataRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowUsageDataRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowUsageDataRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string ShowUsageDataRequest::getResourceType() const
{
    return resourceType_;
}

void ShowUsageDataRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowUsageDataRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowUsageDataRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ShowUsageDataRequest::getBusinessType() const
{
    return businessType_;
}

void ShowUsageDataRequest::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ShowUsageDataRequest::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ShowUsageDataRequest::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string ShowUsageDataRequest::getUnit() const
{
    return unit_;
}

void ShowUsageDataRequest::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ShowUsageDataRequest::unitIsSet() const
{
    return unitIsSet_;
}

void ShowUsageDataRequest::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


