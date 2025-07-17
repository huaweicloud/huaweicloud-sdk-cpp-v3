

#include "huaweicloud/metastudio/v1/model/ShowAsrVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsrVocabularyRequest::ShowAsrVocabularyRequest()
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
}

ShowAsrVocabularyRequest::~ShowAsrVocabularyRequest() = default;

void ShowAsrVocabularyRequest::validate()
{
}

web::json::value ShowAsrVocabularyRequest::toJson() const
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

    return val;
}
bool ShowAsrVocabularyRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowAsrVocabularyRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAsrVocabularyRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAsrVocabularyRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAsrVocabularyRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAsrVocabularyRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAsrVocabularyRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAsrVocabularyRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAsrVocabularyRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAsrVocabularyRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowAsrVocabularyRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowAsrVocabularyRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowAsrVocabularyRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowAsrVocabularyRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowAsrVocabularyRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowAsrVocabularyRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowAsrVocabularyRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowAsrVocabularyRequest::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void ShowAsrVocabularyRequest::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool ShowAsrVocabularyRequest::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void ShowAsrVocabularyRequest::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

}
}
}
}
}


