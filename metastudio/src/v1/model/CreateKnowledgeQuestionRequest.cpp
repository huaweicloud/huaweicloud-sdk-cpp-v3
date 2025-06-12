

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeQuestionRequest::CreateKnowledgeQuestionRequest()
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

CreateKnowledgeQuestionRequest::~CreateKnowledgeQuestionRequest() = default;

void CreateKnowledgeQuestionRequest::validate()
{
}

web::json::value CreateKnowledgeQuestionRequest::toJson() const
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
bool CreateKnowledgeQuestionRequest::fromJson(const web::json::value& val)
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
            CreateKnowledgeQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateKnowledgeQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateKnowledgeQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateKnowledgeQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateKnowledgeQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateKnowledgeQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateKnowledgeQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateKnowledgeQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateKnowledgeQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateKnowledgeQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateKnowledgeQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateKnowledgeQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateKnowledgeQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateKnowledgeQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateKnowledgeQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateKnowledgeQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateKnowledgeQuestionReq CreateKnowledgeQuestionRequest::getBody() const
{
    return body_;
}

void CreateKnowledgeQuestionRequest::setBody(const CreateKnowledgeQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateKnowledgeQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateKnowledgeQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


