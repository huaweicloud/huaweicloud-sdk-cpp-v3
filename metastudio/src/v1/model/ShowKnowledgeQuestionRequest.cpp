

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeQuestionRequest::ShowKnowledgeQuestionRequest()
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
}

ShowKnowledgeQuestionRequest::~ShowKnowledgeQuestionRequest() = default;

void ShowKnowledgeQuestionRequest::validate()
{
}

web::json::value ShowKnowledgeQuestionRequest::toJson() const
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

    return val;
}
bool ShowKnowledgeQuestionRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowKnowledgeQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void ShowKnowledgeQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowKnowledgeQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowKnowledgeQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowKnowledgeQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowKnowledgeQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowKnowledgeQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowKnowledgeQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowKnowledgeQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowKnowledgeQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowKnowledgeQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowKnowledgeQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowKnowledgeQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowKnowledgeQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowKnowledgeQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowKnowledgeQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowKnowledgeQuestionRequest::getQuestionId() const
{
    return questionId_;
}

void ShowKnowledgeQuestionRequest::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool ShowKnowledgeQuestionRequest::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void ShowKnowledgeQuestionRequest::unsetquestionId()
{
    questionIdIsSet_ = false;
}

}
}
}
}
}


