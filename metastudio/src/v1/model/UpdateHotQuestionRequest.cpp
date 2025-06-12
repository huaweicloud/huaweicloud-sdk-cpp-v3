

#include "huaweicloud/metastudio/v1/model/UpdateHotQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotQuestionRequest::UpdateHotQuestionRequest()
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
    bodyIsSet_ = false;
}

UpdateHotQuestionRequest::~UpdateHotQuestionRequest() = default;

void UpdateHotQuestionRequest::validate()
{
}

web::json::value UpdateHotQuestionRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateHotQuestionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateHotQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHotQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateHotQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateHotQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateHotQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateHotQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateHotQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateHotQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateHotQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateHotQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateHotQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateHotQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateHotQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateHotQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateHotQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateHotQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateHotQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateHotQuestionRequest::getHotQuestionId() const
{
    return hotQuestionId_;
}

void UpdateHotQuestionRequest::setHotQuestionId(const std::string& value)
{
    hotQuestionId_ = value;
    hotQuestionIdIsSet_ = true;
}

bool UpdateHotQuestionRequest::hotQuestionIdIsSet() const
{
    return hotQuestionIdIsSet_;
}

void UpdateHotQuestionRequest::unsethotQuestionId()
{
    hotQuestionIdIsSet_ = false;
}

UpdateHotQuestionReq UpdateHotQuestionRequest::getBody() const
{
    return body_;
}

void UpdateHotQuestionRequest::setBody(const UpdateHotQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHotQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHotQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


