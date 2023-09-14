

#include "huaweicloud/smn/v2/model/ListApplicationEndpointsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationEndpointsRequest::ListApplicationEndpointsRequest()
{
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

ListApplicationEndpointsRequest::~ListApplicationEndpointsRequest() = default;

void ListApplicationEndpointsRequest::validate()
{
}

web::json::value ListApplicationEndpointsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}

bool ListApplicationEndpointsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}

std::string ListApplicationEndpointsRequest::getApplicationUrn() const
{
    return applicationUrn_;
}

void ListApplicationEndpointsRequest::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool ListApplicationEndpointsRequest::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void ListApplicationEndpointsRequest::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

int32_t ListApplicationEndpointsRequest::getOffset() const
{
    return offset_;
}

void ListApplicationEndpointsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListApplicationEndpointsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListApplicationEndpointsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListApplicationEndpointsRequest::getLimit() const
{
    return limit_;
}

void ListApplicationEndpointsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicationEndpointsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicationEndpointsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListApplicationEndpointsRequest::getEnabled() const
{
    return enabled_;
}

void ListApplicationEndpointsRequest::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ListApplicationEndpointsRequest::enabledIsSet() const
{
    return enabledIsSet_;
}

void ListApplicationEndpointsRequest::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ListApplicationEndpointsRequest::getToken() const
{
    return token_;
}

void ListApplicationEndpointsRequest::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ListApplicationEndpointsRequest::tokenIsSet() const
{
    return tokenIsSet_;
}

void ListApplicationEndpointsRequest::unsettoken()
{
    tokenIsSet_ = false;
}

std::string ListApplicationEndpointsRequest::getUserData() const
{
    return userData_;
}

void ListApplicationEndpointsRequest::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ListApplicationEndpointsRequest::userDataIsSet() const
{
    return userDataIsSet_;
}

void ListApplicationEndpointsRequest::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


