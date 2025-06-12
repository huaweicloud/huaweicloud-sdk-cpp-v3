

#include "huaweicloud/metastudio/v1/model/ListVideoMotionCaptureJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVideoMotionCaptureJobsRequest::ListVideoMotionCaptureJobsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListVideoMotionCaptureJobsRequest::~ListVideoMotionCaptureJobsRequest() = default;

void ListVideoMotionCaptureJobsRequest::validate()
{
}

web::json::value ListVideoMotionCaptureJobsRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListVideoMotionCaptureJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


std::string ListVideoMotionCaptureJobsRequest::getAuthorization() const
{
    return authorization_;
}

void ListVideoMotionCaptureJobsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListVideoMotionCaptureJobsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListVideoMotionCaptureJobsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListVideoMotionCaptureJobsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListVideoMotionCaptureJobsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListVideoMotionCaptureJobsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListVideoMotionCaptureJobsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListVideoMotionCaptureJobsRequest::getOffset() const
{
    return offset_;
}

void ListVideoMotionCaptureJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListVideoMotionCaptureJobsRequest::getLimit() const
{
    return limit_;
}

void ListVideoMotionCaptureJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVideoMotionCaptureJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVideoMotionCaptureJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


