

#include "huaweicloud/metastudio/v1/model/ListUserQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListUserQuotasRequest::ListUserQuotasRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

ListUserQuotasRequest::~ListUserQuotasRequest() = default;

void ListUserQuotasRequest::validate()
{
}

web::json::value ListUserQuotasRequest::toJson() const
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
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool ListUserQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string ListUserQuotasRequest::getAuthorization() const
{
    return authorization_;
}

void ListUserQuotasRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListUserQuotasRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListUserQuotasRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListUserQuotasRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListUserQuotasRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListUserQuotasRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListUserQuotasRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListUserQuotasRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListUserQuotasRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListUserQuotasRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListUserQuotasRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ListUserQuotasRequest::getLimit() const
{
    return limit_;
}

void ListUserQuotasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUserQuotasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUserQuotasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListUserQuotasRequest::getOffset() const
{
    return offset_;
}

void ListUserQuotasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUserQuotasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUserQuotasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListUserQuotasRequest::getUserId() const
{
    return userId_;
}

void ListUserQuotasRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ListUserQuotasRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ListUserQuotasRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


