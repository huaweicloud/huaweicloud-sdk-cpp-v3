

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeIntentRequest::UpdateKnowledgeIntentRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    intentId_ = "";
    intentIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKnowledgeIntentRequest::~UpdateKnowledgeIntentRequest() = default;

void UpdateKnowledgeIntentRequest::validate()
{
}

web::json::value UpdateKnowledgeIntentRequest::toJson() const
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
    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKnowledgeIntentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKnowledgeIntentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKnowledgeIntentRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateKnowledgeIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateKnowledgeIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateKnowledgeIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateKnowledgeIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateKnowledgeIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateKnowledgeIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateKnowledgeIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateKnowledgeIntentRequest::getIntentId() const
{
    return intentId_;
}

void UpdateKnowledgeIntentRequest::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetintentId()
{
    intentIdIsSet_ = false;
}

UpdateKnowledgeIntentReq UpdateKnowledgeIntentRequest::getBody() const
{
    return body_;
}

void UpdateKnowledgeIntentRequest::setBody(const UpdateKnowledgeIntentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKnowledgeIntentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKnowledgeIntentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


