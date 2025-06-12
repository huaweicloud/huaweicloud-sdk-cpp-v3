

#include "huaweicloud/metastudio/v1/model/DeleteDigitalHumanBusinessCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteDigitalHumanBusinessCardRequest::DeleteDigitalHumanBusinessCardRequest()
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

DeleteDigitalHumanBusinessCardRequest::~DeleteDigitalHumanBusinessCardRequest() = default;

void DeleteDigitalHumanBusinessCardRequest::validate()
{
}

web::json::value DeleteDigitalHumanBusinessCardRequest::toJson() const
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
bool DeleteDigitalHumanBusinessCardRequest::fromJson(const web::json::value& val)
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


std::string DeleteDigitalHumanBusinessCardRequest::getJobId() const
{
    return jobId_;
}

void DeleteDigitalHumanBusinessCardRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDigitalHumanBusinessCardRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDigitalHumanBusinessCardRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DeleteDigitalHumanBusinessCardRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteDigitalHumanBusinessCardRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteDigitalHumanBusinessCardRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteDigitalHumanBusinessCardRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteDigitalHumanBusinessCardRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteDigitalHumanBusinessCardRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteDigitalHumanBusinessCardRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteDigitalHumanBusinessCardRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteDigitalHumanBusinessCardRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteDigitalHumanBusinessCardRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteDigitalHumanBusinessCardRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteDigitalHumanBusinessCardRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteDigitalHumanBusinessCardRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteDigitalHumanBusinessCardRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteDigitalHumanBusinessCardRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteDigitalHumanBusinessCardRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


