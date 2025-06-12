

#include "huaweicloud/metastudio/v1/model/DeleteHotWordsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteHotWordsRequest::DeleteHotWordsRequest()
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

DeleteHotWordsRequest::~DeleteHotWordsRequest() = default;

void DeleteHotWordsRequest::validate()
{
}

web::json::value DeleteHotWordsRequest::toJson() const
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
bool DeleteHotWordsRequest::fromJson(const web::json::value& val)
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


std::string DeleteHotWordsRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteHotWordsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteHotWordsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteHotWordsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteHotWordsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteHotWordsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteHotWordsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteHotWordsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteHotWordsRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteHotWordsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteHotWordsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteHotWordsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteHotWordsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteHotWordsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteHotWordsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteHotWordsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteHotWordsRequest::getHotWordsId() const
{
    return hotWordsId_;
}

void DeleteHotWordsRequest::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool DeleteHotWordsRequest::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void DeleteHotWordsRequest::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

}
}
}
}
}


