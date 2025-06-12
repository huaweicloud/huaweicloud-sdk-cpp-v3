

#include "huaweicloud/metastudio/v1/model/ShowVideoScriptRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVideoScriptRequest::ShowVideoScriptRequest()
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
}

ShowVideoScriptRequest::~ShowVideoScriptRequest() = default;

void ShowVideoScriptRequest::validate()
{
}

web::json::value ShowVideoScriptRequest::toJson() const
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

    return val;
}
bool ShowVideoScriptRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowVideoScriptRequest::getAuthorization() const
{
    return authorization_;
}

void ShowVideoScriptRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowVideoScriptRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowVideoScriptRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowVideoScriptRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVideoScriptRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVideoScriptRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVideoScriptRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowVideoScriptRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowVideoScriptRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowVideoScriptRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowVideoScriptRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowVideoScriptRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowVideoScriptRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowVideoScriptRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowVideoScriptRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowVideoScriptRequest::getScriptId() const
{
    return scriptId_;
}

void ShowVideoScriptRequest::setScriptId(const std::string& value)
{
    scriptId_ = value;
    scriptIdIsSet_ = true;
}

bool ShowVideoScriptRequest::scriptIdIsSet() const
{
    return scriptIdIsSet_;
}

void ShowVideoScriptRequest::unsetscriptId()
{
    scriptIdIsSet_ = false;
}

}
}
}
}
}


