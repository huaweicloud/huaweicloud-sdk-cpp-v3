

#include "huaweicloud/metastudio/v1/model/UpdateTtscVocabularyGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateTtscVocabularyGroupsRequest::UpdateTtscVocabularyGroupsRequest()
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
    groupId_ = "";
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTtscVocabularyGroupsRequest::~UpdateTtscVocabularyGroupsRequest() = default;

void UpdateTtscVocabularyGroupsRequest::validate()
{
}

web::json::value UpdateTtscVocabularyGroupsRequest::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTtscVocabularyGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


std::string UpdateTtscVocabularyGroupsRequest::getXRequestId() const
{
    return xRequestId_;
}

void UpdateTtscVocabularyGroupsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string UpdateTtscVocabularyGroupsRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateTtscVocabularyGroupsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateTtscVocabularyGroupsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateTtscVocabularyGroupsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateTtscVocabularyGroupsRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateTtscVocabularyGroupsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateTtscVocabularyGroupsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateTtscVocabularyGroupsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateTtscVocabularyGroupsRequest::getGroupId() const
{
    return groupId_;
}

void UpdateTtscVocabularyGroupsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

SaveTtscVocabularyGroupsRequestBody UpdateTtscVocabularyGroupsRequest::getBody() const
{
    return body_;
}

void UpdateTtscVocabularyGroupsRequest::setBody(const SaveTtscVocabularyGroupsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTtscVocabularyGroupsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTtscVocabularyGroupsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


