

#include "huaweicloud/metastudio/v1/model/ListLivePlatformsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLivePlatformsRequest::ListLivePlatformsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    accessType_ = "";
    accessTypeIsSet_ = false;
}

ListLivePlatformsRequest::~ListLivePlatformsRequest() = default;

void ListLivePlatformsRequest::validate()
{
}

web::json::value ListLivePlatformsRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(accessTypeIsSet_) {
        val[utility::conversions::to_string_t("access_type")] = ModelBase::toJson(accessType_);
    }

    return val;
}
bool ListLivePlatformsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessType(refVal);
        }
    }
    return ok;
}


std::string ListLivePlatformsRequest::getAuthorization() const
{
    return authorization_;
}

void ListLivePlatformsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListLivePlatformsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListLivePlatformsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListLivePlatformsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListLivePlatformsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListLivePlatformsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListLivePlatformsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListLivePlatformsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListLivePlatformsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListLivePlatformsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListLivePlatformsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ListLivePlatformsRequest::getOffset() const
{
    return offset_;
}

void ListLivePlatformsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLivePlatformsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLivePlatformsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLivePlatformsRequest::getLimit() const
{
    return limit_;
}

void ListLivePlatformsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLivePlatformsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLivePlatformsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLivePlatformsRequest::getAccessType() const
{
    return accessType_;
}

void ListLivePlatformsRequest::setAccessType(const std::string& value)
{
    accessType_ = value;
    accessTypeIsSet_ = true;
}

bool ListLivePlatformsRequest::accessTypeIsSet() const
{
    return accessTypeIsSet_;
}

void ListLivePlatformsRequest::unsetaccessType()
{
    accessTypeIsSet_ = false;
}

}
}
}
}
}


