

#include "huaweicloud/metastudio/v1/model/CommitVoiceTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CommitVoiceTrainingJobRequest::CommitVoiceTrainingJobRequest()
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
    bodyIsSet_ = false;
}

CommitVoiceTrainingJobRequest::~CommitVoiceTrainingJobRequest() = default;

void CommitVoiceTrainingJobRequest::validate()
{
}

web::json::value CommitVoiceTrainingJobRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CommitVoiceTrainingJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CommitJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CommitVoiceTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void CommitVoiceTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CommitVoiceTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CommitVoiceTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CommitVoiceTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void CommitVoiceTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CommitVoiceTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CommitVoiceTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CommitVoiceTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void CommitVoiceTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

CommitJobReq CommitVoiceTrainingJobRequest::getBody() const
{
    return body_;
}

void CommitVoiceTrainingJobRequest::setBody(const CommitJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CommitVoiceTrainingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CommitVoiceTrainingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


