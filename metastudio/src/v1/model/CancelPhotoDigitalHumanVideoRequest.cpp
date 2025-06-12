

#include "huaweicloud/metastudio/v1/model/CancelPhotoDigitalHumanVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CancelPhotoDigitalHumanVideoRequest::CancelPhotoDigitalHumanVideoRequest()
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

CancelPhotoDigitalHumanVideoRequest::~CancelPhotoDigitalHumanVideoRequest() = default;

void CancelPhotoDigitalHumanVideoRequest::validate()
{
}

web::json::value CancelPhotoDigitalHumanVideoRequest::toJson() const
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
bool CancelPhotoDigitalHumanVideoRequest::fromJson(const web::json::value& val)
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


std::string CancelPhotoDigitalHumanVideoRequest::getJobId() const
{
    return jobId_;
}

void CancelPhotoDigitalHumanVideoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CancelPhotoDigitalHumanVideoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CancelPhotoDigitalHumanVideoRequest::getAuthorization() const
{
    return authorization_;
}

void CancelPhotoDigitalHumanVideoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CancelPhotoDigitalHumanVideoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CancelPhotoDigitalHumanVideoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CancelPhotoDigitalHumanVideoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CancelPhotoDigitalHumanVideoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CancelPhotoDigitalHumanVideoRequest::getXProjectId() const
{
    return xProjectId_;
}

void CancelPhotoDigitalHumanVideoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CancelPhotoDigitalHumanVideoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CancelPhotoDigitalHumanVideoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CancelPhotoDigitalHumanVideoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CancelPhotoDigitalHumanVideoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CancelPhotoDigitalHumanVideoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


