

#include "huaweicloud/metastudio/v1/model/ShowPictureModelingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPictureModelingJobRequest::ShowPictureModelingJobRequest()
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

ShowPictureModelingJobRequest::~ShowPictureModelingJobRequest() = default;

void ShowPictureModelingJobRequest::validate()
{
}

web::json::value ShowPictureModelingJobRequest::toJson() const
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
bool ShowPictureModelingJobRequest::fromJson(const web::json::value& val)
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


std::string ShowPictureModelingJobRequest::getJobId() const
{
    return jobId_;
}

void ShowPictureModelingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPictureModelingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPictureModelingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPictureModelingJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPictureModelingJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPictureModelingJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPictureModelingJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPictureModelingJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPictureModelingJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPictureModelingJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPictureModelingJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPictureModelingJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPictureModelingJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPictureModelingJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPictureModelingJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPictureModelingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPictureModelingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPictureModelingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPictureModelingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


