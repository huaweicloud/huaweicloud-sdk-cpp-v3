

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsRequest::UpdateHotWordsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    hotWordsId_ = "";
    hotWordsIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHotWordsRequest::~UpdateHotWordsRequest() = default;

void UpdateHotWordsRequest::validate()
{
}

web::json::value UpdateHotWordsRequest::toJson() const
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
    if(hotWordsIdIsSet_) {
        val[utility::conversions::to_string_t("hot_words_id")] = ModelBase::toJson(hotWordsId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHotWordsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hot_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHotWordsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHotWordsRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateHotWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateHotWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateHotWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateHotWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateHotWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateHotWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateHotWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateHotWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateHotWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateHotWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateHotWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateHotWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateHotWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateHotWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateHotWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateHotWordsRequest::getHotWordsId() const
{
    return hotWordsId_;
}

void UpdateHotWordsRequest::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool UpdateHotWordsRequest::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void UpdateHotWordsRequest::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

UpdateHotWordsReq UpdateHotWordsRequest::getBody() const
{
    return body_;
}

void UpdateHotWordsRequest::setBody(const UpdateHotWordsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHotWordsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHotWordsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


