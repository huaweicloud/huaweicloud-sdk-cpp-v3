

#include "huaweicloud/metastudio/v1/model/CreateAsrVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAsrVocabularyRequest::CreateAsrVocabularyRequest()
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

CreateAsrVocabularyRequest::~CreateAsrVocabularyRequest() = default;

void CreateAsrVocabularyRequest::validate()
{
}

web::json::value CreateAsrVocabularyRequest::toJson() const
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
bool CreateAsrVocabularyRequest::fromJson(const web::json::value& val)
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
            CreateAsrVocabularyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateAsrVocabularyRequest::getAuthorization() const
{
    return authorization_;
}

void CreateAsrVocabularyRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateAsrVocabularyRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateAsrVocabularyRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateAsrVocabularyRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateAsrVocabularyRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateAsrVocabularyRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateAsrVocabularyRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateAsrVocabularyRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateAsrVocabularyRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateAsrVocabularyRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateAsrVocabularyRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateAsrVocabularyRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateAsrVocabularyRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateAsrVocabularyRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateAsrVocabularyRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateAsrVocabularyReq CreateAsrVocabularyRequest::getBody() const
{
    return body_;
}

void CreateAsrVocabularyRequest::setBody(const CreateAsrVocabularyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAsrVocabularyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAsrVocabularyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


