

#include "huaweicloud/metastudio/v1/model/ShowVideoMotionCaptureJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVideoMotionCaptureJobRequest::ShowVideoMotionCaptureJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
}

ShowVideoMotionCaptureJobRequest::~ShowVideoMotionCaptureJobRequest() = default;

void ShowVideoMotionCaptureJobRequest::validate()
{
}

web::json::value ShowVideoMotionCaptureJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
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

    return val;
}
bool ShowVideoMotionCaptureJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
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
    return ok;
}


std::string ShowVideoMotionCaptureJobRequest::getJobId() const
{
    return jobId_;
}

void ShowVideoMotionCaptureJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowVideoMotionCaptureJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowVideoMotionCaptureJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowVideoMotionCaptureJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowVideoMotionCaptureJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowVideoMotionCaptureJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVideoMotionCaptureJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVideoMotionCaptureJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVideoMotionCaptureJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowVideoMotionCaptureJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowVideoMotionCaptureJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowVideoMotionCaptureJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowVideoMotionCaptureJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowVideoMotionCaptureJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowVideoMotionCaptureJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


