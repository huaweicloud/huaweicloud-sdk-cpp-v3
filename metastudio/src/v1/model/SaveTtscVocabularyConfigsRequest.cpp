

#include "huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscVocabularyConfigsRequest::SaveTtscVocabularyConfigsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveTtscVocabularyConfigsRequest::~SaveTtscVocabularyConfigsRequest() = default;

void SaveTtscVocabularyConfigsRequest::validate()
{
}

web::json::value SaveTtscVocabularyConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
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
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveTtscVocabularyConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SaveTtscVocabularyConfigsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveTtscVocabularyConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void SaveTtscVocabularyConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void SaveTtscVocabularyConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SaveTtscVocabularyConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void SaveTtscVocabularyConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void SaveTtscVocabularyConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequest::getVocabularyId() const
{
    return vocabularyId_;
}

void SaveTtscVocabularyConfigsRequest::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

SaveTtscVocabularyConfigsRequestBody SaveTtscVocabularyConfigsRequest::getBody() const
{
    return body_;
}

void SaveTtscVocabularyConfigsRequest::setBody(const SaveTtscVocabularyConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveTtscVocabularyConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


