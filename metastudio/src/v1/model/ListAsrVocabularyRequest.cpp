

#include "huaweicloud/metastudio/v1/model/ListAsrVocabularyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListAsrVocabularyRequest::ListAsrVocabularyRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    vocabularyType_ = "";
    vocabularyTypeIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ListAsrVocabularyRequest::~ListAsrVocabularyRequest() = default;

void ListAsrVocabularyRequest::validate()
{
}

web::json::value ListAsrVocabularyRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(vocabularyTypeIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_type")] = ModelBase::toJson(vocabularyType_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ListAsrVocabularyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string ListAsrVocabularyRequest::getAuthorization() const
{
    return authorization_;
}

void ListAsrVocabularyRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListAsrVocabularyRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListAsrVocabularyRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListAsrVocabularyRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAsrVocabularyRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAsrVocabularyRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAsrVocabularyRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAsrVocabularyRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListAsrVocabularyRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListAsrVocabularyRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListAsrVocabularyRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListAsrVocabularyRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListAsrVocabularyRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListAsrVocabularyRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListAsrVocabularyRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListAsrVocabularyRequest::getOffset() const
{
    return offset_;
}

void ListAsrVocabularyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAsrVocabularyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAsrVocabularyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAsrVocabularyRequest::getLimit() const
{
    return limit_;
}

void ListAsrVocabularyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAsrVocabularyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAsrVocabularyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAsrVocabularyRequest::getVocabularyType() const
{
    return vocabularyType_;
}

void ListAsrVocabularyRequest::setVocabularyType(const std::string& value)
{
    vocabularyType_ = value;
    vocabularyTypeIsSet_ = true;
}

bool ListAsrVocabularyRequest::vocabularyTypeIsSet() const
{
    return vocabularyTypeIsSet_;
}

void ListAsrVocabularyRequest::unsetvocabularyType()
{
    vocabularyTypeIsSet_ = false;
}

std::string ListAsrVocabularyRequest::getLanguage() const
{
    return language_;
}

void ListAsrVocabularyRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ListAsrVocabularyRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ListAsrVocabularyRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


