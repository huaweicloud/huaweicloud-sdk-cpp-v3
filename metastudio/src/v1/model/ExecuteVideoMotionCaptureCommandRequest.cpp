

#include "huaweicloud/metastudio/v1/model/ExecuteVideoMotionCaptureCommandRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteVideoMotionCaptureCommandRequest::ExecuteVideoMotionCaptureCommandRequest()
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
    bodyIsSet_ = false;
}

ExecuteVideoMotionCaptureCommandRequest::~ExecuteVideoMotionCaptureCommandRequest() = default;

void ExecuteVideoMotionCaptureCommandRequest::validate()
{
}

web::json::value ExecuteVideoMotionCaptureCommandRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExecuteVideoMotionCaptureCommandRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ControlDigitalHumanLiveReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteVideoMotionCaptureCommandRequest::getJobId() const
{
    return jobId_;
}

void ExecuteVideoMotionCaptureCommandRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExecuteVideoMotionCaptureCommandRequest::getAuthorization() const
{
    return authorization_;
}

void ExecuteVideoMotionCaptureCommandRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ExecuteVideoMotionCaptureCommandRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ExecuteVideoMotionCaptureCommandRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ExecuteVideoMotionCaptureCommandRequest::getXProjectId() const
{
    return xProjectId_;
}

void ExecuteVideoMotionCaptureCommandRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ExecuteVideoMotionCaptureCommandRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ExecuteVideoMotionCaptureCommandRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ControlDigitalHumanLiveReq ExecuteVideoMotionCaptureCommandRequest::getBody() const
{
    return body_;
}

void ExecuteVideoMotionCaptureCommandRequest::setBody(const ControlDigitalHumanLiveReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteVideoMotionCaptureCommandRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteVideoMotionCaptureCommandRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


