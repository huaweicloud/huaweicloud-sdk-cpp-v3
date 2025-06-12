

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeQuestionRequest::UpdateKnowledgeQuestionRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    questionId_ = "";
    questionIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateKnowledgeQuestionRequest::~UpdateKnowledgeQuestionRequest() = default;

void UpdateKnowledgeQuestionRequest::validate()
{
}

web::json::value UpdateKnowledgeQuestionRequest::toJson() const
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
    if(questionIdIsSet_) {
        val[utility::conversions::to_string_t("question_id")] = ModelBase::toJson(questionId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateKnowledgeQuestionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("question_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateKnowledgeQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateKnowledgeQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateKnowledgeQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateKnowledgeQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateKnowledgeQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateKnowledgeQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateKnowledgeQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateKnowledgeQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateKnowledgeQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateKnowledgeQuestionRequest::getQuestionId() const
{
    return questionId_;
}

void UpdateKnowledgeQuestionRequest::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetquestionId()
{
    questionIdIsSet_ = false;
}

UpdateKnowledgeQuestionReq UpdateKnowledgeQuestionRequest::getBody() const
{
    return body_;
}

void UpdateKnowledgeQuestionRequest::setBody(const UpdateKnowledgeQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateKnowledgeQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateKnowledgeQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


