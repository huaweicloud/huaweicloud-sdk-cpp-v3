

#include "huaweicloud/metastudio/v1/model/ListTtsaJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTtsaJobsRequest::ListTtsaJobsRequest()
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
}

ListTtsaJobsRequest::~ListTtsaJobsRequest() = default;

void ListTtsaJobsRequest::validate()
{
}

web::json::value ListTtsaJobsRequest::toJson() const
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

    return val;
}
bool ListTtsaJobsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListTtsaJobsRequest::getAuthorization() const
{
    return authorization_;
}

void ListTtsaJobsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTtsaJobsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTtsaJobsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTtsaJobsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTtsaJobsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTtsaJobsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTtsaJobsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTtsaJobsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListTtsaJobsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListTtsaJobsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListTtsaJobsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListTtsaJobsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListTtsaJobsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListTtsaJobsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListTtsaJobsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListTtsaJobsRequest::getOffset() const
{
    return offset_;
}

void ListTtsaJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTtsaJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTtsaJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTtsaJobsRequest::getLimit() const
{
    return limit_;
}

void ListTtsaJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTtsaJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTtsaJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


