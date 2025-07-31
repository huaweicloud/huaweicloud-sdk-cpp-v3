

#include "huaweicloud/metastudio/v1/model/DeleteTtscVocabularyGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTtscVocabularyGroupsRequest::DeleteTtscVocabularyGroupsRequest()
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
    groupId_ = "";
    groupIdIsSet_ = false;
}

DeleteTtscVocabularyGroupsRequest::~DeleteTtscVocabularyGroupsRequest() = default;

void DeleteTtscVocabularyGroupsRequest::validate()
{
}

web::json::value DeleteTtscVocabularyGroupsRequest::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool DeleteTtscVocabularyGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteTtscVocabularyGroupsRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteTtscVocabularyGroupsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteTtscVocabularyGroupsRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTtscVocabularyGroupsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTtscVocabularyGroupsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTtscVocabularyGroupsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTtscVocabularyGroupsRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteTtscVocabularyGroupsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteTtscVocabularyGroupsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteTtscVocabularyGroupsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t DeleteTtscVocabularyGroupsRequest::getOffset() const
{
    return offset_;
}

void DeleteTtscVocabularyGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t DeleteTtscVocabularyGroupsRequest::getLimit() const
{
    return limit_;
}

void DeleteTtscVocabularyGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string DeleteTtscVocabularyGroupsRequest::getGroupId() const
{
    return groupId_;
}

void DeleteTtscVocabularyGroupsRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteTtscVocabularyGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteTtscVocabularyGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


