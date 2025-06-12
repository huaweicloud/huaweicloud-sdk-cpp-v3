

#include "huaweicloud/metastudio/v1/model/Delete2dModelTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Delete2dModelTrainingJobRequest::Delete2dModelTrainingJobRequest()
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

Delete2dModelTrainingJobRequest::~Delete2dModelTrainingJobRequest() = default;

void Delete2dModelTrainingJobRequest::validate()
{
}

web::json::value Delete2dModelTrainingJobRequest::toJson() const
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
bool Delete2dModelTrainingJobRequest::fromJson(const web::json::value& val)
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


std::string Delete2dModelTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void Delete2dModelTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Delete2dModelTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Delete2dModelTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Delete2dModelTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void Delete2dModelTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Delete2dModelTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Delete2dModelTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Delete2dModelTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Delete2dModelTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Delete2dModelTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Delete2dModelTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Delete2dModelTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void Delete2dModelTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Delete2dModelTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Delete2dModelTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Delete2dModelTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Delete2dModelTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Delete2dModelTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Delete2dModelTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


