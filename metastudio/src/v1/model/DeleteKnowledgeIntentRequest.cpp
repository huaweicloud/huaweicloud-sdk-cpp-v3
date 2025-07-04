

#include "huaweicloud/metastudio/v1/model/DeleteKnowledgeIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteKnowledgeIntentRequest::DeleteKnowledgeIntentRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteKnowledgeIntentRequest::~DeleteKnowledgeIntentRequest() = default;

void DeleteKnowledgeIntentRequest::validate()
{
}

web::json::value DeleteKnowledgeIntentRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteKnowledgeIntentRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteKnowledgeIntentRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteKnowledgeIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteKnowledgeIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteKnowledgeIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteKnowledgeIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteKnowledgeIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteKnowledgeIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteKnowledgeIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteKnowledgeIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteKnowledgeIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteKnowledgeIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteKnowledgeIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteKnowledgeIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteKnowledgeIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteKnowledgeIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteKnowledgeIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::vector<std::string>& DeleteKnowledgeIntentRequest::getBody()
{
    return body_;
}

void DeleteKnowledgeIntentRequest::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteKnowledgeIntentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteKnowledgeIntentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


