

#include "huaweicloud/metastudio/v1/model/Show2DDigitalHumanVideoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




Show2DDigitalHumanVideoRequest::Show2DDigitalHumanVideoRequest()
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

Show2DDigitalHumanVideoRequest::~Show2DDigitalHumanVideoRequest() = default;

void Show2DDigitalHumanVideoRequest::validate()
{
}

web::json::value Show2DDigitalHumanVideoRequest::toJson() const
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
bool Show2DDigitalHumanVideoRequest::fromJson(const web::json::value& val)
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


std::string Show2DDigitalHumanVideoRequest::getJobId() const
{
    return jobId_;
}

void Show2DDigitalHumanVideoRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string Show2DDigitalHumanVideoRequest::getAuthorization() const
{
    return authorization_;
}

void Show2DDigitalHumanVideoRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string Show2DDigitalHumanVideoRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void Show2DDigitalHumanVideoRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string Show2DDigitalHumanVideoRequest::getXProjectId() const
{
    return xProjectId_;
}

void Show2DDigitalHumanVideoRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string Show2DDigitalHumanVideoRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void Show2DDigitalHumanVideoRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

bool Show2DDigitalHumanVideoRequest::isShowScript() const
{
    return showScript_;
}

void Show2DDigitalHumanVideoRequest::setShowScript(bool value)
{
    showScript_ = value;
    showScriptIsSet_ = true;
}

bool Show2DDigitalHumanVideoRequest::showScriptIsSet() const
{
    return showScriptIsSet_;
}

void Show2DDigitalHumanVideoRequest::unsetshowScript()
{
    showScriptIsSet_ = false;
}

}
}
}
}
}


