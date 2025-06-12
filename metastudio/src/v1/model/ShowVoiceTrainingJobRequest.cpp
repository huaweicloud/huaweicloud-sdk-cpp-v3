

#include "huaweicloud/metastudio/v1/model/ShowVoiceTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVoiceTrainingJobRequest::ShowVoiceTrainingJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowVoiceTrainingJobRequest::~ShowVoiceTrainingJobRequest() = default;

void ShowVoiceTrainingJobRequest::validate()
{
}

web::json::value ShowVoiceTrainingJobRequest::toJson() const
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowVoiceTrainingJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ShowVoiceTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowVoiceTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowVoiceTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowVoiceTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowVoiceTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVoiceTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVoiceTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVoiceTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowVoiceTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowVoiceTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowVoiceTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowVoiceTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowVoiceTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowVoiceTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowVoiceTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void ShowVoiceTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowVoiceTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowVoiceTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


