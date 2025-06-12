

#include "huaweicloud/metastudio/v1/model/ShowAsyncTtsJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsyncTtsJobRequest::ShowAsyncTtsJobRequest()
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

ShowAsyncTtsJobRequest::~ShowAsyncTtsJobRequest() = default;

void ShowAsyncTtsJobRequest::validate()
{
}

web::json::value ShowAsyncTtsJobRequest::toJson() const
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
bool ShowAsyncTtsJobRequest::fromJson(const web::json::value& val)
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


std::string ShowAsyncTtsJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAsyncTtsJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAsyncTtsJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAsyncTtsJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAsyncTtsJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAsyncTtsJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAsyncTtsJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAsyncTtsJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAsyncTtsJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowAsyncTtsJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowAsyncTtsJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowAsyncTtsJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowAsyncTtsJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowAsyncTtsJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowAsyncTtsJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowAsyncTtsJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowAsyncTtsJobRequest::getJobId() const
{
    return jobId_;
}

void ShowAsyncTtsJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowAsyncTtsJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowAsyncTtsJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


