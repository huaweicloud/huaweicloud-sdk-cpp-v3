

#include "huaweicloud/metastudio/v1/model/UpdateAsrVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAsrVocabularyRequest::UpdateAsrVocabularyRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    asrVocabularyId_ = "";
    asrVocabularyIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAsrVocabularyRequest::~UpdateAsrVocabularyRequest() = default;

void UpdateAsrVocabularyRequest::validate()
{
}

web::json::value UpdateAsrVocabularyRequest::toJson() const
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
    if(asrVocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("asr_vocabulary_id")] = ModelBase::toJson(asrVocabularyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAsrVocabularyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asr_vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAsrVocabularyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAsrVocabularyRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateAsrVocabularyRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateAsrVocabularyRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateAsrVocabularyRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateAsrVocabularyRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateAsrVocabularyRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateAsrVocabularyRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateAsrVocabularyRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateAsrVocabularyRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateAsrVocabularyRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateAsrVocabularyRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateAsrVocabularyRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateAsrVocabularyRequest::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void UpdateAsrVocabularyRequest::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void UpdateAsrVocabularyRequest::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

UpdateAsrVocabularyReq UpdateAsrVocabularyRequest::getBody() const
{
    return body_;
}

void UpdateAsrVocabularyRequest::setBody(const UpdateAsrVocabularyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAsrVocabularyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAsrVocabularyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


