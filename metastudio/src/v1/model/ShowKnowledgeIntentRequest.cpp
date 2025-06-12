

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeIntentRequest::ShowKnowledgeIntentRequest()
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
}

ShowKnowledgeIntentRequest::~ShowKnowledgeIntentRequest() = default;

void ShowKnowledgeIntentRequest::validate()
{
}

web::json::value ShowKnowledgeIntentRequest::toJson() const
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

    return val;
}
bool ShowKnowledgeIntentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowKnowledgeIntentRequest::getAuthorization() const
{
    return authorization_;
}

void ShowKnowledgeIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowKnowledgeIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowKnowledgeIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowKnowledgeIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowKnowledgeIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowKnowledgeIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowKnowledgeIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowKnowledgeIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowKnowledgeIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowKnowledgeIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowKnowledgeIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowKnowledgeIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowKnowledgeIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowKnowledgeIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowKnowledgeIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowKnowledgeIntentRequest::getIntentId() const
{
    return intentId_;
}

void ShowKnowledgeIntentRequest::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool ShowKnowledgeIntentRequest::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void ShowKnowledgeIntentRequest::unsetintentId()
{
    intentIdIsSet_ = false;
}

}
}
}
}
}


