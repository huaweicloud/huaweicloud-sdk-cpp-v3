

#include "huaweicloud/metastudio/v1/model/Show2dModelTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Show2dModelTrainingJobRequest::Show2dModelTrainingJobRequest()
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

Show2dModelTrainingJobRequest::~Show2dModelTrainingJobRequest() = default;

void Show2dModelTrainingJobRequest::validate()
{
}

web::json::value Show2dModelTrainingJobRequest::toJson() const
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
bool Show2dModelTrainingJobRequest::fromJson(const web::json::value& val)
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


std::string Show2dModelTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void Show2dModelTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Show2dModelTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Show2dModelTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Show2dModelTrainingJobRequest::getAuthorization() const
{
    return authorization_;
}

void Show2dModelTrainingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Show2dModelTrainingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Show2dModelTrainingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Show2dModelTrainingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Show2dModelTrainingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Show2dModelTrainingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Show2dModelTrainingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Show2dModelTrainingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void Show2dModelTrainingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Show2dModelTrainingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Show2dModelTrainingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Show2dModelTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Show2dModelTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Show2dModelTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Show2dModelTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


