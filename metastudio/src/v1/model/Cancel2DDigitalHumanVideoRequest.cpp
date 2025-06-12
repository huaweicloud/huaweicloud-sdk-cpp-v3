

#include "huaweicloud/metastudio/v1/model/Cancel2DDigitalHumanVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Cancel2DDigitalHumanVideoRequest::Cancel2DDigitalHumanVideoRequest()
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

Cancel2DDigitalHumanVideoRequest::~Cancel2DDigitalHumanVideoRequest() = default;

void Cancel2DDigitalHumanVideoRequest::validate()
{
}

web::json::value Cancel2DDigitalHumanVideoRequest::toJson() const
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
bool Cancel2DDigitalHumanVideoRequest::fromJson(const web::json::value& val)
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


std::string Cancel2DDigitalHumanVideoRequest::getJobId() const
{
    return jobId_;
}

void Cancel2DDigitalHumanVideoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Cancel2DDigitalHumanVideoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Cancel2DDigitalHumanVideoRequest::getAuthorization() const
{
    return authorization_;
}

void Cancel2DDigitalHumanVideoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Cancel2DDigitalHumanVideoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Cancel2DDigitalHumanVideoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Cancel2DDigitalHumanVideoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Cancel2DDigitalHumanVideoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Cancel2DDigitalHumanVideoRequest::getXProjectId() const
{
    return xProjectId_;
}

void Cancel2DDigitalHumanVideoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Cancel2DDigitalHumanVideoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Cancel2DDigitalHumanVideoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Cancel2DDigitalHumanVideoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Cancel2DDigitalHumanVideoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Cancel2DDigitalHumanVideoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


