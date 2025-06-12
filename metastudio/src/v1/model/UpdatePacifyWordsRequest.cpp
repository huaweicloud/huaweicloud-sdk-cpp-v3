

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsRequest::UpdatePacifyWordsRequest()
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
    bodyIsSet_ = false;
}

UpdatePacifyWordsRequest::~UpdatePacifyWordsRequest() = default;

void UpdatePacifyWordsRequest::validate()
{
}

web::json::value UpdatePacifyWordsRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePacifyWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdatePacifyWordsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsRequest::getAuthorization() const
{
    return authorization_;
}

void UpdatePacifyWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdatePacifyWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdatePacifyWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdatePacifyWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdatePacifyWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdatePacifyWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdatePacifyWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdatePacifyWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdatePacifyWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdatePacifyWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdatePacifyWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdatePacifyWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdatePacifyWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdatePacifyWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdatePacifyWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdatePacifyWordsRequest::getPacifyWordsId() const
{
    return pacifyWordsId_;
}

void UpdatePacifyWordsRequest::setPacifyWordsId(const std::string& value)
{
    pacifyWordsId_ = value;
    pacifyWordsIdIsSet_ = true;
}

bool UpdatePacifyWordsRequest::pacifyWordsIdIsSet() const
{
    return pacifyWordsIdIsSet_;
}

void UpdatePacifyWordsRequest::unsetpacifyWordsId()
{
    pacifyWordsIdIsSet_ = false;
}

UpdatePacifyWordsReq UpdatePacifyWordsRequest::getBody() const
{
    return body_;
}

void UpdatePacifyWordsRequest::setBody(const UpdatePacifyWordsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePacifyWordsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePacifyWordsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


