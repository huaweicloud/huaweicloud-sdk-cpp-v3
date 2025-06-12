

#include "huaweicloud/metastudio/v1/model/UpdateVideoScriptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateVideoScriptRequest::UpdateVideoScriptRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    scriptId_ = "";
    scriptIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVideoScriptRequest::~UpdateVideoScriptRequest() = default;

void UpdateVideoScriptRequest::validate()
{
}

web::json::value UpdateVideoScriptRequest::toJson() const
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
    if(scriptIdIsSet_) {
        val[utility::conversions::to_string_t("script_id")] = ModelBase::toJson(scriptId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateVideoScriptRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("script_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("script_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScriptId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateVideoScriptsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVideoScriptRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateVideoScriptRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateVideoScriptRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateVideoScriptRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateVideoScriptRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateVideoScriptRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateVideoScriptRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateVideoScriptRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateVideoScriptRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateVideoScriptRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateVideoScriptRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateVideoScriptRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateVideoScriptRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateVideoScriptRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateVideoScriptRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateVideoScriptRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateVideoScriptRequest::getScriptId() const
{
    return scriptId_;
}

void UpdateVideoScriptRequest::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool UpdateVideoScriptRequest::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void UpdateVideoScriptRequest::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

UpdateVideoScriptsReq UpdateVideoScriptRequest::getBody() const
{
    return body_;
}

void UpdateVideoScriptRequest::setBody(const UpdateVideoScriptsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVideoScriptRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVideoScriptRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


