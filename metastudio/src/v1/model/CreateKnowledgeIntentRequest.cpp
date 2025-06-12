

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeIntentRequest::CreateKnowledgeIntentRequest()
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

CreateKnowledgeIntentRequest::~CreateKnowledgeIntentRequest() = default;

void CreateKnowledgeIntentRequest::validate()
{
}

web::json::value CreateKnowledgeIntentRequest::toJson() const
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
bool CreateKnowledgeIntentRequest::fromJson(const web::json::value& val)
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
            CreateKnowledgeIntentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeIntentRequest::getAuthorization() const
{
    return authorization_;
}

void CreateKnowledgeIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateKnowledgeIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateKnowledgeIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateKnowledgeIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateKnowledgeIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateKnowledgeIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateKnowledgeIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateKnowledgeIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateKnowledgeIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateKnowledgeIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateKnowledgeIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateKnowledgeIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateKnowledgeIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateKnowledgeIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateKnowledgeIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateKnowledgeIntentReq CreateKnowledgeIntentRequest::getBody() const
{
    return body_;
}

void CreateKnowledgeIntentRequest::setBody(const CreateKnowledgeIntentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKnowledgeIntentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKnowledgeIntentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


