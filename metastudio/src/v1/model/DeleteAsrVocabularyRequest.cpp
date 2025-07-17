

#include "huaweicloud/metastudio/v1/model/DeleteAsrVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAsrVocabularyRequest::DeleteAsrVocabularyRequest()
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

DeleteAsrVocabularyRequest::~DeleteAsrVocabularyRequest() = default;

void DeleteAsrVocabularyRequest::validate()
{
}

web::json::value DeleteAsrVocabularyRequest::toJson() const
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
bool DeleteAsrVocabularyRequest::fromJson(const web::json::value& val)
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


std::string DeleteAsrVocabularyRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteAsrVocabularyRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteAsrVocabularyRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteAsrVocabularyRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteAsrVocabularyRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAsrVocabularyRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAsrVocabularyRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAsrVocabularyRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteAsrVocabularyRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteAsrVocabularyRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteAsrVocabularyRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteAsrVocabularyRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteAsrVocabularyRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteAsrVocabularyRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteAsrVocabularyRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteAsrVocabularyRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteAsrVocabularyRequest::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void DeleteAsrVocabularyRequest::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool DeleteAsrVocabularyRequest::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void DeleteAsrVocabularyRequest::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

}
}
}
}
}


