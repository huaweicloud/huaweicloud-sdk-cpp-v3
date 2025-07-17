

#include "huaweicloud/metastudio/v1/model/ShowAsrVocabularyAssociationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAsrVocabularyAssociationRequest::ShowAsrVocabularyAssociationRequest()
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
    asrVocabularyId_ = "";
    asrVocabularyIdIsSet_ = false;
}

ShowAsrVocabularyAssociationRequest::~ShowAsrVocabularyAssociationRequest() = default;

void ShowAsrVocabularyAssociationRequest::validate()
{
}

web::json::value ShowAsrVocabularyAssociationRequest::toJson() const
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
    if(asrVocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("asr_vocabulary_id")] = ModelBase::toJson(asrVocabularyId_);
    }

    return val;
}
bool ShowAsrVocabularyAssociationRequest::fromJson(const web::json::value& val)
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


std::string ShowAsrVocabularyAssociationRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAsrVocabularyAssociationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAsrVocabularyAssociationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAsrVocabularyAssociationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAsrVocabularyAssociationRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowAsrVocabularyAssociationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowAsrVocabularyAssociationRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowAsrVocabularyAssociationRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ShowAsrVocabularyAssociationRequest::getOffset() const
{
    return offset_;
}

void ShowAsrVocabularyAssociationRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowAsrVocabularyAssociationRequest::getLimit() const
{
    return limit_;
}

void ShowAsrVocabularyAssociationRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowAsrVocabularyAssociationRequest::getAsrVocabularyId() const
{
    return asrVocabularyId_;
}

void ShowAsrVocabularyAssociationRequest::setAsrVocabularyId(const std::string& value)
{
    asrVocabularyId_ = value;
    asrVocabularyIdIsSet_ = true;
}

bool ShowAsrVocabularyAssociationRequest::asrVocabularyIdIsSet() const
{
    return asrVocabularyIdIsSet_;
}

void ShowAsrVocabularyAssociationRequest::unsetasrVocabularyId()
{
    asrVocabularyIdIsSet_ = false;
}

}
}
}
}
}


