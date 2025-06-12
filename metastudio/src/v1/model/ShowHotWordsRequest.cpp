

#include "huaweicloud/metastudio/v1/model/ShowHotWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotWordsRequest::ShowHotWordsRequest()
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
}

ShowHotWordsRequest::~ShowHotWordsRequest() = default;

void ShowHotWordsRequest::validate()
{
}

web::json::value ShowHotWordsRequest::toJson() const
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

    return val;
}
bool ShowHotWordsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowHotWordsRequest::getAuthorization() const
{
    return authorization_;
}

void ShowHotWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowHotWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowHotWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowHotWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowHotWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowHotWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowHotWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowHotWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowHotWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowHotWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowHotWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowHotWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowHotWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowHotWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowHotWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowHotWordsRequest::getHotWordsId() const
{
    return hotWordsId_;
}

void ShowHotWordsRequest::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool ShowHotWordsRequest::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void ShowHotWordsRequest::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

}
}
}
}
}


