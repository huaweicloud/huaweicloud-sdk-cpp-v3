

#include "huaweicloud/smn/v2/model/ApplicationEndpoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ApplicationEndpoint::ApplicationEndpoint()
{
    createTime_ = "";
    createTimeIsSet_ = false;
    endpointUrn_ = "";
    endpointUrnIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

ApplicationEndpoint::~ApplicationEndpoint() = default;

void ApplicationEndpoint::validate()
{
}

web::json::value ApplicationEndpoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endpointUrnIsSet_) {
        val[utility::conversions::to_string_t("endpoint_urn")] = ModelBase::toJson(endpointUrn_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool ApplicationEndpoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUrn(refVal);
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
    return ok;
}


std::string ApplicationEndpoint::getCreateTime() const
{
    return createTime_;
}

void ApplicationEndpoint::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ApplicationEndpoint::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ApplicationEndpoint::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ApplicationEndpoint::getEndpointUrn() const
{
    return endpointUrn_;
}

void ApplicationEndpoint::setEndpointUrn(const std::string& value)
{
    endpointUrn_ = value;
    endpointUrnIsSet_ = true;
}

bool ApplicationEndpoint::endpointUrnIsSet() const
{
    return endpointUrnIsSet_;
}

void ApplicationEndpoint::unsetendpointUrn()
{
    endpointUrnIsSet_ = false;
}

std::string ApplicationEndpoint::getUserData() const
{
    return userData_;
}

void ApplicationEndpoint::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ApplicationEndpoint::userDataIsSet() const
{
    return userDataIsSet_;
}

void ApplicationEndpoint::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ApplicationEndpoint::getEnabled() const
{
    return enabled_;
}

void ApplicationEndpoint::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ApplicationEndpoint::enabledIsSet() const
{
    return enabledIsSet_;
}

void ApplicationEndpoint::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ApplicationEndpoint::getToken() const
{
    return token_;
}

void ApplicationEndpoint::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ApplicationEndpoint::tokenIsSet() const
{
    return tokenIsSet_;
}

void ApplicationEndpoint::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


