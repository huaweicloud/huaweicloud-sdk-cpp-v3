

#include "huaweicloud/metastudio/v1/model/ShowQuestionAnswerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowQuestionAnswerRequest::ShowQuestionAnswerRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    questionAnswerId_ = "";
    questionAnswerIdIsSet_ = false;
}

ShowQuestionAnswerRequest::~ShowQuestionAnswerRequest() = default;

void ShowQuestionAnswerRequest::validate()
{
}

web::json::value ShowQuestionAnswerRequest::toJson() const
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
    if(questionAnswerIdIsSet_) {
        val[utility::conversions::to_string_t("question_answer_id")] = ModelBase::toJson(questionAnswerId_);
    }

    return val;
}
bool ShowQuestionAnswerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("question_answer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_answer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionAnswerId(refVal);
        }
    }
    return ok;
}


std::string ShowQuestionAnswerRequest::getAuthorization() const
{
    return authorization_;
}

void ShowQuestionAnswerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowQuestionAnswerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowQuestionAnswerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowQuestionAnswerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowQuestionAnswerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowQuestionAnswerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowQuestionAnswerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowQuestionAnswerRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowQuestionAnswerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowQuestionAnswerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowQuestionAnswerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowQuestionAnswerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowQuestionAnswerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowQuestionAnswerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowQuestionAnswerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowQuestionAnswerRequest::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void ShowQuestionAnswerRequest::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool ShowQuestionAnswerRequest::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void ShowQuestionAnswerRequest::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

}
}
}
}
}


