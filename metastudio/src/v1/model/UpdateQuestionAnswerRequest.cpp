

#include "huaweicloud/metastudio/v1/model/UpdateQuestionAnswerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateQuestionAnswerRequest::UpdateQuestionAnswerRequest()
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
    bodyIsSet_ = false;
}

UpdateQuestionAnswerRequest::~UpdateQuestionAnswerRequest() = default;

void UpdateQuestionAnswerRequest::validate()
{
}

web::json::value UpdateQuestionAnswerRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateQuestionAnswerRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateQuestionAnswerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateQuestionAnswerRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateQuestionAnswerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateQuestionAnswerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateQuestionAnswerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateQuestionAnswerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateQuestionAnswerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateQuestionAnswerRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateQuestionAnswerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateQuestionAnswerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateQuestionAnswerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateQuestionAnswerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateQuestionAnswerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateQuestionAnswerRequest::getQuestionAnswerId() const
{
    return questionAnswerId_;
}

void UpdateQuestionAnswerRequest::setQuestionAnswerId(const std::string& value)
{
    questionAnswerId_ = value;
    questionAnswerIdIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::questionAnswerIdIsSet() const
{
    return questionAnswerIdIsSet_;
}

void UpdateQuestionAnswerRequest::unsetquestionAnswerId()
{
    questionAnswerIdIsSet_ = false;
}

UpdateQuestionAnswerReq UpdateQuestionAnswerRequest::getBody() const
{
    return body_;
}

void UpdateQuestionAnswerRequest::setBody(const UpdateQuestionAnswerReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateQuestionAnswerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateQuestionAnswerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


