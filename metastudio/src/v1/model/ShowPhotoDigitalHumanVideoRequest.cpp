

#include "huaweicloud/metastudio/v1/model/ShowPhotoDigitalHumanVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPhotoDigitalHumanVideoRequest::ShowPhotoDigitalHumanVideoRequest()
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
    showScript_ = false;
    showScriptIsSet_ = false;
}

ShowPhotoDigitalHumanVideoRequest::~ShowPhotoDigitalHumanVideoRequest() = default;

void ShowPhotoDigitalHumanVideoRequest::validate()
{
}

web::json::value ShowPhotoDigitalHumanVideoRequest::toJson() const
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
    if(showScriptIsSet_) {
        val[utility::conversions::to_string_t("show_script")] = ModelBase::toJson(showScript_);
    }

    return val;
}
bool ShowPhotoDigitalHumanVideoRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("show_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_script"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowScript(refVal);
        }
    }
    return ok;
}


std::string ShowPhotoDigitalHumanVideoRequest::getJobId() const
{
    return jobId_;
}

void ShowPhotoDigitalHumanVideoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPhotoDigitalHumanVideoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPhotoDigitalHumanVideoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPhotoDigitalHumanVideoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPhotoDigitalHumanVideoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPhotoDigitalHumanVideoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

bool ShowPhotoDigitalHumanVideoRequest::isShowScript() const
{
    return showScript_;
}

void ShowPhotoDigitalHumanVideoRequest::setShowScript(bool value)
{
    showScript_ = value;
    showScriptIsSet_ = true;
}

bool ShowPhotoDigitalHumanVideoRequest::showScriptIsSet() const
{
    return showScriptIsSet_;
}

void ShowPhotoDigitalHumanVideoRequest::unsetshowScript()
{
    showScriptIsSet_ = false;
}

}
}
}
}
}


