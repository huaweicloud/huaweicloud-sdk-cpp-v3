

#include "huaweicloud/metastudio/v1/model/DeleteTtscVocabularyConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTtscVocabularyConfigsRequest::DeleteTtscVocabularyConfigsRequest()
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
    bodyIsSet_ = false;
}

DeleteTtscVocabularyConfigsRequest::~DeleteTtscVocabularyConfigsRequest() = default;

void DeleteTtscVocabularyConfigsRequest::validate()
{
}

web::json::value DeleteTtscVocabularyConfigsRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteTtscVocabularyConfigsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteTtscVocabularyConfigsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTtscVocabularyConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteTtscVocabularyConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteTtscVocabularyConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTtscVocabularyConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTtscVocabularyConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTtscVocabularyConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTtscVocabularyConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteTtscVocabularyConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteTtscVocabularyConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteTtscVocabularyConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t DeleteTtscVocabularyConfigsRequest::getOffset() const
{
    return offset_;
}

void DeleteTtscVocabularyConfigsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t DeleteTtscVocabularyConfigsRequest::getLimit() const
{
    return limit_;
}

void DeleteTtscVocabularyConfigsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

DeleteTtscVocabularyConfigsRequestBody DeleteTtscVocabularyConfigsRequest::getBody() const
{
    return body_;
}

void DeleteTtscVocabularyConfigsRequest::setBody(const DeleteTtscVocabularyConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTtscVocabularyConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTtscVocabularyConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


