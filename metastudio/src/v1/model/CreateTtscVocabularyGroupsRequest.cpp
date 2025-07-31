

#include "huaweicloud/metastudio/v1/model/CreateTtscVocabularyGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtscVocabularyGroupsRequest::CreateTtscVocabularyGroupsRequest()
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

CreateTtscVocabularyGroupsRequest::~CreateTtscVocabularyGroupsRequest() = default;

void CreateTtscVocabularyGroupsRequest::validate()
{
}

web::json::value CreateTtscVocabularyGroupsRequest::toJson() const
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
bool CreateTtscVocabularyGroupsRequest::fromJson(const web::json::value& val)
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
            SaveTtscVocabularyGroupsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTtscVocabularyGroupsRequest::getXRequestId() const
{
    return xRequestId_;
}

void CreateTtscVocabularyGroupsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string CreateTtscVocabularyGroupsRequest::getAuthorization() const
{
    return authorization_;
}

void CreateTtscVocabularyGroupsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateTtscVocabularyGroupsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateTtscVocabularyGroupsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateTtscVocabularyGroupsRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateTtscVocabularyGroupsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateTtscVocabularyGroupsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateTtscVocabularyGroupsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

SaveTtscVocabularyGroupsRequestBody CreateTtscVocabularyGroupsRequest::getBody() const
{
    return body_;
}

void CreateTtscVocabularyGroupsRequest::setBody(const SaveTtscVocabularyGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTtscVocabularyGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTtscVocabularyGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


