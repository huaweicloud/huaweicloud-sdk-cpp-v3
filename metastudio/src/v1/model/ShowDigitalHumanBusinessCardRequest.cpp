

#include "huaweicloud/metastudio/v1/model/ShowDigitalHumanBusinessCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDigitalHumanBusinessCardRequest::ShowDigitalHumanBusinessCardRequest()
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

ShowDigitalHumanBusinessCardRequest::~ShowDigitalHumanBusinessCardRequest() = default;

void ShowDigitalHumanBusinessCardRequest::validate()
{
}

web::json::value ShowDigitalHumanBusinessCardRequest::toJson() const
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
bool ShowDigitalHumanBusinessCardRequest::fromJson(const web::json::value& val)
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


std::string ShowDigitalHumanBusinessCardRequest::getJobId() const
{
    return jobId_;
}

void ShowDigitalHumanBusinessCardRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowDigitalHumanBusinessCardRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardRequest::getAuthorization() const
{
    return authorization_;
}

void ShowDigitalHumanBusinessCardRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowDigitalHumanBusinessCardRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowDigitalHumanBusinessCardRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowDigitalHumanBusinessCardRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowDigitalHumanBusinessCardRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowDigitalHumanBusinessCardRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowDigitalHumanBusinessCardRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowDigitalHumanBusinessCardRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


