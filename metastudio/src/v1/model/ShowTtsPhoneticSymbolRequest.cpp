

#include "huaweicloud/metastudio/v1/model/ShowTtsPhoneticSymbolRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTtsPhoneticSymbolRequest::ShowTtsPhoneticSymbolRequest()
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
    word_ = "";
    wordIsSet_ = false;
}

ShowTtsPhoneticSymbolRequest::~ShowTtsPhoneticSymbolRequest() = default;

void ShowTtsPhoneticSymbolRequest::validate()
{
}

web::json::value ShowTtsPhoneticSymbolRequest::toJson() const
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
    if(wordIsSet_) {
        val[utility::conversions::to_string_t("word")] = ModelBase::toJson(word_);
    }

    return val;
}
bool ShowTtsPhoneticSymbolRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWord(refVal);
        }
    }
    return ok;
}


std::string ShowTtsPhoneticSymbolRequest::getXRequestId() const
{
    return xRequestId_;
}

void ShowTtsPhoneticSymbolRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ShowTtsPhoneticSymbolRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTtsPhoneticSymbolRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTtsPhoneticSymbolRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTtsPhoneticSymbolRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTtsPhoneticSymbolRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTtsPhoneticSymbolRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowTtsPhoneticSymbolRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowTtsPhoneticSymbolRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ShowTtsPhoneticSymbolRequest::getOffset() const
{
    return offset_;
}

void ShowTtsPhoneticSymbolRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTtsPhoneticSymbolRequest::getLimit() const
{
    return limit_;
}

void ShowTtsPhoneticSymbolRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowTtsPhoneticSymbolRequest::getWord() const
{
    return word_;
}

void ShowTtsPhoneticSymbolRequest::setWord(const std::string& value)
{
    word_ = value;
    wordIsSet_ = true;
}

bool ShowTtsPhoneticSymbolRequest::wordIsSet() const
{
    return wordIsSet_;
}

void ShowTtsPhoneticSymbolRequest::unsetword()
{
    wordIsSet_ = false;
}

}
}
}
}
}


