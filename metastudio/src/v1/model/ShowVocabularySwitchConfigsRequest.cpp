

#include "huaweicloud/metastudio/v1/model/ShowVocabularySwitchConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVocabularySwitchConfigsRequest::ShowVocabularySwitchConfigsRequest()
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
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

ShowVocabularySwitchConfigsRequest::~ShowVocabularySwitchConfigsRequest() = default;

void ShowVocabularySwitchConfigsRequest::validate()
{
}

web::json::value ShowVocabularySwitchConfigsRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool ShowVocabularySwitchConfigsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string ShowVocabularySwitchConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowVocabularySwitchConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowVocabularySwitchConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void ShowVocabularySwitchConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowVocabularySwitchConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVocabularySwitchConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowVocabularySwitchConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowVocabularySwitchConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowVocabularySwitchConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowVocabularySwitchConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ShowVocabularySwitchConfigsRequest::getOffset() const
{
    return offset_;
}

void ShowVocabularySwitchConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowVocabularySwitchConfigsRequest::getLimit() const
{
    return limit_;
}

void ShowVocabularySwitchConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowVocabularySwitchConfigsRequest::getKey() const
{
    return key_;
}

void ShowVocabularySwitchConfigsRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ShowVocabularySwitchConfigsRequest::keyIsSet() const
{
    return keyIsSet_;
}

void ShowVocabularySwitchConfigsRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


