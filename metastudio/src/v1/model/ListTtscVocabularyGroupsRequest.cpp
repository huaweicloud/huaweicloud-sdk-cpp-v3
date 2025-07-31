

#include "huaweicloud/metastudio/v1/model/ListTtscVocabularyGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtscVocabularyGroupsRequest::ListTtscVocabularyGroupsRequest()
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
}

ListTtscVocabularyGroupsRequest::~ListTtscVocabularyGroupsRequest() = default;

void ListTtscVocabularyGroupsRequest::validate()
{
}

web::json::value ListTtscVocabularyGroupsRequest::toJson() const
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

    return val;
}
bool ListTtscVocabularyGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListTtscVocabularyGroupsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ListTtscVocabularyGroupsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTtscVocabularyGroupsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTtscVocabularyGroupsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ListTtscVocabularyGroupsRequest::getAuthorization() const
{
    return authorization_;
}

void ListTtscVocabularyGroupsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTtscVocabularyGroupsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTtscVocabularyGroupsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTtscVocabularyGroupsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTtscVocabularyGroupsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTtscVocabularyGroupsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTtscVocabularyGroupsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTtscVocabularyGroupsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListTtscVocabularyGroupsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListTtscVocabularyGroupsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListTtscVocabularyGroupsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListTtscVocabularyGroupsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListTtscVocabularyGroupsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListTtscVocabularyGroupsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListTtscVocabularyGroupsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


