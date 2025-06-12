

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsRequest::ShowPacifyWordsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    pacifyWordsId_ = "";
    pacifyWordsIdIsSet_ = false;
}

ShowPacifyWordsRequest::~ShowPacifyWordsRequest() = default;

void ShowPacifyWordsRequest::validate()
{
}

web::json::value ShowPacifyWordsRequest::toJson() const
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
    if(pacifyWordsIdIsSet_) {
        val[utility::conversions::to_string_t("pacify_words_id")] = ModelBase::toJson(pacifyWordsId_);
    }

    return val;
}
bool ShowPacifyWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pacify_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pacify_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacifyWordsId(refVal);
        }
    }
    return ok;
}


std::string ShowPacifyWordsRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPacifyWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPacifyWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPacifyWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPacifyWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPacifyWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPacifyWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPacifyWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPacifyWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPacifyWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPacifyWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPacifyWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPacifyWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPacifyWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPacifyWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPacifyWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowPacifyWordsRequest::getPacifyWordsId() const
{
    return pacifyWordsId_;
}

void ShowPacifyWordsRequest::setPacifyWordsId(const std::string& value)
{
    pacifyWordsId_ = value;
    pacifyWordsIdIsSet_ = true;
}

bool ShowPacifyWordsRequest::pacifyWordsIdIsSet() const
{
    return pacifyWordsIdIsSet_;
}

void ShowPacifyWordsRequest::unsetpacifyWordsId()
{
    pacifyWordsIdIsSet_ = false;
}

}
}
}
}
}


