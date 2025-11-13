

#include "huaweicloud/metastudio/v1/model/ShowShortJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowShortJobRequest::ShowShortJobRequest()
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

ShowShortJobRequest::~ShowShortJobRequest() = default;

void ShowShortJobRequest::validate()
{
}

web::json::value ShowShortJobRequest::toJson() const
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
bool ShowShortJobRequest::fromJson(const web::json::value& val)
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


std::string ShowShortJobRequest::getAuthorization() const
{
    return authorization_;
}

void ShowShortJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowShortJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowShortJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowShortJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowShortJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowShortJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowShortJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowShortJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowShortJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowShortJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowShortJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowShortJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowShortJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowShortJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowShortJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowShortJobRequest::getJobId() const
{
    return jobId_;
}

void ShowShortJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowShortJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowShortJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


