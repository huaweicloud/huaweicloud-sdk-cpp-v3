

#include "huaweicloud/metastudio/v1/model/Execute2dModelTrainingCommandByUserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Execute2dModelTrainingCommandByUserRequest::Execute2dModelTrainingCommandByUserRequest()
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

Execute2dModelTrainingCommandByUserRequest::~Execute2dModelTrainingCommandByUserRequest() = default;

void Execute2dModelTrainingCommandByUserRequest::validate()
{
}

web::json::value Execute2dModelTrainingCommandByUserRequest::toJson() const
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
bool Execute2dModelTrainingCommandByUserRequest::fromJson(const web::json::value& val)
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
            Execute2dModelTrainingCommandByUserReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string Execute2dModelTrainingCommandByUserRequest::getJobId() const
{
    return jobId_;
}

void Execute2dModelTrainingCommandByUserRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserRequest::getAuthorization() const
{
    return authorization_;
}

void Execute2dModelTrainingCommandByUserRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Execute2dModelTrainingCommandByUserRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserRequest::getXProjectId() const
{
    return xProjectId_;
}

void Execute2dModelTrainingCommandByUserRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Execute2dModelTrainingCommandByUserRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Execute2dModelTrainingCommandByUserRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

Execute2dModelTrainingCommandByUserReq Execute2dModelTrainingCommandByUserRequest::getBody() const
{
    return body_;
}

void Execute2dModelTrainingCommandByUserRequest::setBody(const Execute2dModelTrainingCommandByUserReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool Execute2dModelTrainingCommandByUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void Execute2dModelTrainingCommandByUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


