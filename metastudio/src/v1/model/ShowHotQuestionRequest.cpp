

#include "huaweicloud/metastudio/v1/model/ShowHotQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotQuestionRequest::ShowHotQuestionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    hotQuestionId_ = "";
    hotQuestionIdIsSet_ = false;
}

ShowHotQuestionRequest::~ShowHotQuestionRequest() = default;

void ShowHotQuestionRequest::validate()
{
}

web::json::value ShowHotQuestionRequest::toJson() const
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
    if(hotQuestionIdIsSet_) {
        val[utility::conversions::to_string_t("hot_question_id")] = ModelBase::toJson(hotQuestionId_);
    }

    return val;
}
bool ShowHotQuestionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hot_question_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_question_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotQuestionId(refVal);
        }
    }
    return ok;
}


std::string ShowHotQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void ShowHotQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowHotQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowHotQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowHotQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowHotQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowHotQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowHotQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowHotQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowHotQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowHotQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowHotQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowHotQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowHotQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowHotQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowHotQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowHotQuestionRequest::getHotQuestionId() const
{
    return hotQuestionId_;
}

void ShowHotQuestionRequest::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool ShowHotQuestionRequest::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void ShowHotQuestionRequest::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

}
}
}
}
}


