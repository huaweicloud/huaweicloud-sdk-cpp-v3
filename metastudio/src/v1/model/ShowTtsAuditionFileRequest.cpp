

#include "huaweicloud/metastudio/v1/model/ShowTtsAuditionFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsAuditionFileRequest::ShowTtsAuditionFileRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
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

ShowTtsAuditionFileRequest::~ShowTtsAuditionFileRequest() = default;

void ShowTtsAuditionFileRequest::validate()
{
}

web::json::value ShowTtsAuditionFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
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
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowTtsAuditionFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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


std::string ShowTtsAuditionFileRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowTtsAuditionFileRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTtsAuditionFileRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowTtsAuditionFileRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTtsAuditionFileRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTtsAuditionFileRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTtsAuditionFileRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTtsAuditionFileRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTtsAuditionFileRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTtsAuditionFileRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTtsAuditionFileRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTtsAuditionFileRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowTtsAuditionFileRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowTtsAuditionFileRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowTtsAuditionFileRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowTtsAuditionFileRequest::getJobId() const
{
    return jobId_;
}

void ShowTtsAuditionFileRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowTtsAuditionFileRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowTtsAuditionFileRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


