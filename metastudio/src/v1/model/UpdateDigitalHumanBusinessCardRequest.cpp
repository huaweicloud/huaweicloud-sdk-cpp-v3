

#include "huaweicloud/metastudio/v1/model/UpdateDigitalHumanBusinessCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDigitalHumanBusinessCardRequest::UpdateDigitalHumanBusinessCardRequest()
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
    bodyIsSet_ = false;
}

UpdateDigitalHumanBusinessCardRequest::~UpdateDigitalHumanBusinessCardRequest() = default;

void UpdateDigitalHumanBusinessCardRequest::validate()
{
}

web::json::value UpdateDigitalHumanBusinessCardRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDigitalHumanBusinessCardRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDigitalHumanBusinessCardReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDigitalHumanBusinessCardRequest::getJobId() const
{
    return jobId_;
}

void UpdateDigitalHumanBusinessCardRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string UpdateDigitalHumanBusinessCardRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDigitalHumanBusinessCardRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDigitalHumanBusinessCardRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDigitalHumanBusinessCardRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDigitalHumanBusinessCardRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateDigitalHumanBusinessCardRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateDigitalHumanBusinessCardRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDigitalHumanBusinessCardRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateDigitalHumanBusinessCardReq UpdateDigitalHumanBusinessCardRequest::getBody() const
{
    return body_;
}

void UpdateDigitalHumanBusinessCardRequest::setBody(const CreateDigitalHumanBusinessCardReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDigitalHumanBusinessCardRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDigitalHumanBusinessCardRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


