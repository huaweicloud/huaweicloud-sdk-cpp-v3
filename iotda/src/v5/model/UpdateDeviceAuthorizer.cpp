

#include "huaweicloud/iotda/v5/model/UpdateDeviceAuthorizer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceAuthorizer::UpdateDeviceAuthorizer()
{
    authorizerName_ = "";
    authorizerNameIsSet_ = false;
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    signingEnable_ = false;
    signingEnableIsSet_ = false;
    signingToken_ = "";
    signingTokenIsSet_ = false;
    signingPublicKey_ = "";
    signingPublicKeyIsSet_ = false;
    defaultAuthorizer_ = false;
    defaultAuthorizerIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    cacheEnable_ = false;
    cacheEnableIsSet_ = false;
}

UpdateDeviceAuthorizer::~UpdateDeviceAuthorizer() = default;

void UpdateDeviceAuthorizer::validate()
{
}

web::json::value UpdateDeviceAuthorizer::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizerNameIsSet_) {
        val[utility::conversions::to_string_t("authorizer_name")] = ModelBase::toJson(authorizerName_);
    }
    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(signingEnableIsSet_) {
        val[utility::conversions::to_string_t("signing_enable")] = ModelBase::toJson(signingEnable_);
    }
    if(signingTokenIsSet_) {
        val[utility::conversions::to_string_t("signing_token")] = ModelBase::toJson(signingToken_);
    }
    if(signingPublicKeyIsSet_) {
        val[utility::conversions::to_string_t("signing_public_key")] = ModelBase::toJson(signingPublicKey_);
    }
    if(defaultAuthorizerIsSet_) {
        val[utility::conversions::to_string_t("default_authorizer")] = ModelBase::toJson(defaultAuthorizer_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(cacheEnableIsSet_) {
        val[utility::conversions::to_string_t("cache_enable")] = ModelBase::toJson(cacheEnable_);
    }

    return val;
}
bool UpdateDeviceAuthorizer::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorizer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signing_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signing_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSigningEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signing_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signing_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSigningToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("signing_public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("signing_public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSigningPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_authorizer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_authorizer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultAuthorizer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cache_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cache_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCacheEnable(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceAuthorizer::getAuthorizerName() const
{
    return authorizerName_;
}

void UpdateDeviceAuthorizer::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool UpdateDeviceAuthorizer::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void UpdateDeviceAuthorizer::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

std::string UpdateDeviceAuthorizer::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateDeviceAuthorizer::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateDeviceAuthorizer::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateDeviceAuthorizer::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

bool UpdateDeviceAuthorizer::isSigningEnable() const
{
    return signingEnable_;
}

void UpdateDeviceAuthorizer::setSigningEnable(bool value)
{
    signingEnable_ = value;
    signingEnableIsSet_ = true;
}

bool UpdateDeviceAuthorizer::signingEnableIsSet() const
{
    return signingEnableIsSet_;
}

void UpdateDeviceAuthorizer::unsetsigningEnable()
{
    signingEnableIsSet_ = false;
}

std::string UpdateDeviceAuthorizer::getSigningToken() const
{
    return signingToken_;
}

void UpdateDeviceAuthorizer::setSigningToken(const std::string& value)
{
    signingToken_ = value;
    signingTokenIsSet_ = true;
}

bool UpdateDeviceAuthorizer::signingTokenIsSet() const
{
    return signingTokenIsSet_;
}

void UpdateDeviceAuthorizer::unsetsigningToken()
{
    signingTokenIsSet_ = false;
}

std::string UpdateDeviceAuthorizer::getSigningPublicKey() const
{
    return signingPublicKey_;
}

void UpdateDeviceAuthorizer::setSigningPublicKey(const std::string& value)
{
    signingPublicKey_ = value;
    signingPublicKeyIsSet_ = true;
}

bool UpdateDeviceAuthorizer::signingPublicKeyIsSet() const
{
    return signingPublicKeyIsSet_;
}

void UpdateDeviceAuthorizer::unsetsigningPublicKey()
{
    signingPublicKeyIsSet_ = false;
}

bool UpdateDeviceAuthorizer::isDefaultAuthorizer() const
{
    return defaultAuthorizer_;
}

void UpdateDeviceAuthorizer::setDefaultAuthorizer(bool value)
{
    defaultAuthorizer_ = value;
    defaultAuthorizerIsSet_ = true;
}

bool UpdateDeviceAuthorizer::defaultAuthorizerIsSet() const
{
    return defaultAuthorizerIsSet_;
}

void UpdateDeviceAuthorizer::unsetdefaultAuthorizer()
{
    defaultAuthorizerIsSet_ = false;
}

std::string UpdateDeviceAuthorizer::getStatus() const
{
    return status_;
}

void UpdateDeviceAuthorizer::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceAuthorizer::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceAuthorizer::unsetstatus()
{
    statusIsSet_ = false;
}

bool UpdateDeviceAuthorizer::isCacheEnable() const
{
    return cacheEnable_;
}

void UpdateDeviceAuthorizer::setCacheEnable(bool value)
{
    cacheEnable_ = value;
    cacheEnableIsSet_ = true;
}

bool UpdateDeviceAuthorizer::cacheEnableIsSet() const
{
    return cacheEnableIsSet_;
}

void UpdateDeviceAuthorizer::unsetcacheEnable()
{
    cacheEnableIsSet_ = false;
}

}
}
}
}
}


