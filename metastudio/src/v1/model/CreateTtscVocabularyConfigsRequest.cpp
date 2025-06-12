

#include "huaweicloud/metastudio/v1/model/CreateTtscVocabularyConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtscVocabularyConfigsRequest::CreateTtscVocabularyConfigsRequest()
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
    bodyIsSet_ = false;
}

CreateTtscVocabularyConfigsRequest::~CreateTtscVocabularyConfigsRequest() = default;

void CreateTtscVocabularyConfigsRequest::validate()
{
}

web::json::value CreateTtscVocabularyConfigsRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTtscVocabularyConfigsRequest::fromJson(const web::json::value& val)
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


std::string CreateTtscVocabularyConfigsRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateTtscVocabularyConfigsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateTtscVocabularyConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTtscVocabularyConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTtscVocabularyConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTtscVocabularyConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTtscVocabularyConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTtscVocabularyConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTtscVocabularyConfigsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTtscVocabularyConfigsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

SaveTtscVocabularyConfigsRequestBody CreateTtscVocabularyConfigsRequest::getBody() const
{
    return body_;
}

void CreateTtscVocabularyConfigsRequest::setBody(const SaveTtscVocabularyConfigsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTtscVocabularyConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTtscVocabularyConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


