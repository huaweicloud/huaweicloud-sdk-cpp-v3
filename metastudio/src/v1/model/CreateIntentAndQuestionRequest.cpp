

#include "huaweicloud/metastudio/v1/model/CreateIntentAndQuestionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateIntentAndQuestionRequest::CreateIntentAndQuestionRequest()
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

CreateIntentAndQuestionRequest::~CreateIntentAndQuestionRequest() = default;

void CreateIntentAndQuestionRequest::validate()
{
}

web::json::value CreateIntentAndQuestionRequest::toJson() const
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
bool CreateIntentAndQuestionRequest::fromJson(const web::json::value& val)
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
            CreateIntentAndQuestionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIntentAndQuestionRequest::getAuthorization() const
{
    return authorization_;
}

void CreateIntentAndQuestionRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateIntentAndQuestionRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateIntentAndQuestionRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateIntentAndQuestionRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateIntentAndQuestionRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateIntentAndQuestionRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateIntentAndQuestionRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateIntentAndQuestionRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateIntentAndQuestionRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateIntentAndQuestionRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateIntentAndQuestionRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateIntentAndQuestionRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateIntentAndQuestionRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateIntentAndQuestionRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateIntentAndQuestionRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateIntentAndQuestionReq CreateIntentAndQuestionRequest::getBody() const
{
    return body_;
}

void CreateIntentAndQuestionRequest::setBody(const CreateIntentAndQuestionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIntentAndQuestionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIntentAndQuestionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


