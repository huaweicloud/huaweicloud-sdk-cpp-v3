

#include "huaweicloud/metastudio/v1/model/CreateQuestionAnswerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateQuestionAnswerRequest::CreateQuestionAnswerRequest()
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

CreateQuestionAnswerRequest::~CreateQuestionAnswerRequest() = default;

void CreateQuestionAnswerRequest::validate()
{
}

web::json::value CreateQuestionAnswerRequest::toJson() const
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
bool CreateQuestionAnswerRequest::fromJson(const web::json::value& val)
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
            CreateQuestionAnswerReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateQuestionAnswerRequest::getAuthorization() const
{
    return authorization_;
}

void CreateQuestionAnswerRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateQuestionAnswerRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateQuestionAnswerRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateQuestionAnswerRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateQuestionAnswerRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateQuestionAnswerRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateQuestionAnswerRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateQuestionAnswerRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateQuestionAnswerRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateQuestionAnswerRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateQuestionAnswerRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateQuestionAnswerRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateQuestionAnswerRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateQuestionAnswerRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateQuestionAnswerRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateQuestionAnswerReq CreateQuestionAnswerRequest::getBody() const
{
    return body_;
}

void CreateQuestionAnswerRequest::setBody(const CreateQuestionAnswerReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateQuestionAnswerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateQuestionAnswerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


