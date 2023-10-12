

#include "huaweicloud/smn/v2/model/ListApplicationEndpointAttributesResponseBody_attributes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListApplicationEndpointAttributesResponseBody_attributes::ListApplicationEndpointAttributesResponseBody_attributes()
{
    enabled_ = "";
    enabledIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

ListApplicationEndpointAttributesResponseBody_attributes::~ListApplicationEndpointAttributesResponseBody_attributes() = default;

void ListApplicationEndpointAttributesResponseBody_attributes::validate()
{
}

web::json::value ListApplicationEndpointAttributesResponseBody_attributes::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ListApplicationEndpointAttributesResponseBody_attributes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListApplicationEndpointAttributesResponseBody_attributes::getEnabled() const
{
    return enabled_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ListApplicationEndpointAttributesResponseBody_attributes::enabledIsSet() const
{
    return enabledIsSet_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ListApplicationEndpointAttributesResponseBody_attributes::getToken() const
{
    return token_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ListApplicationEndpointAttributesResponseBody_attributes::tokenIsSet() const
{
    return tokenIsSet_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::unsettoken()
{
    tokenIsSet_ = false;
}

std::string ListApplicationEndpointAttributesResponseBody_attributes::getUserData() const
{
    return userData_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ListApplicationEndpointAttributesResponseBody_attributes::userDataIsSet() const
{
    return userDataIsSet_;
}

void ListApplicationEndpointAttributesResponseBody_attributes::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


