

#include "huaweicloud/iotda/v5/model/CreateDeviceAuthorizer.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceAuthorizer::CreateDeviceAuthorizer()
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

CreateDeviceAuthorizer::~CreateDeviceAuthorizer() = default;

void CreateDeviceAuthorizer::validate()
{
}

web::json::value CreateDeviceAuthorizer::toJson() const
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
bool CreateDeviceAuthorizer::fromJson(const web::json::value& val)
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


std::string CreateDeviceAuthorizer::getAuthorizerName() const
{
    return authorizerName_;
}

void CreateDeviceAuthorizer::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool CreateDeviceAuthorizer::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void CreateDeviceAuthorizer::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

std::string CreateDeviceAuthorizer::getFuncUrn() const
{
    return funcUrn_;
}

void CreateDeviceAuthorizer::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool CreateDeviceAuthorizer::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void CreateDeviceAuthorizer::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

bool CreateDeviceAuthorizer::isSigningEnable() const
{
    return signingEnable_;
}

void CreateDeviceAuthorizer::setSigningEnable(bool value)
{
    signingEnable_ = value;
    signingEnableIsSet_ = true;
}

bool CreateDeviceAuthorizer::signingEnableIsSet() const
{
    return signingEnableIsSet_;
}

void CreateDeviceAuthorizer::unsetsigningEnable()
{
    signingEnableIsSet_ = false;
}

std::string CreateDeviceAuthorizer::getSigningToken() const
{
    return signingToken_;
}

void CreateDeviceAuthorizer::setSigningToken(const std::string& value)
{
    signingToken_ = value;
    signingTokenIsSet_ = true;
}

bool CreateDeviceAuthorizer::signingTokenIsSet() const
{
    return signingTokenIsSet_;
}

void CreateDeviceAuthorizer::unsetsigningToken()
{
    signingTokenIsSet_ = false;
}

std::string CreateDeviceAuthorizer::getSigningPublicKey() const
{
    return signingPublicKey_;
}

void CreateDeviceAuthorizer::setSigningPublicKey(const std::string& value)
{
    signingPublicKey_ = value;
    signingPublicKeyIsSet_ = true;
}

bool CreateDeviceAuthorizer::signingPublicKeyIsSet() const
{
    return signingPublicKeyIsSet_;
}

void CreateDeviceAuthorizer::unsetsigningPublicKey()
{
    signingPublicKeyIsSet_ = false;
}

bool CreateDeviceAuthorizer::isDefaultAuthorizer() const
{
    return defaultAuthorizer_;
}

void CreateDeviceAuthorizer::setDefaultAuthorizer(bool value)
{
    defaultAuthorizer_ = value;
    defaultAuthorizerIsSet_ = true;
}

bool CreateDeviceAuthorizer::defaultAuthorizerIsSet() const
{
    return defaultAuthorizerIsSet_;
}

void CreateDeviceAuthorizer::unsetdefaultAuthorizer()
{
    defaultAuthorizerIsSet_ = false;
}

std::string CreateDeviceAuthorizer::getStatus() const
{
    return status_;
}

void CreateDeviceAuthorizer::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDeviceAuthorizer::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDeviceAuthorizer::unsetstatus()
{
    statusIsSet_ = false;
}

bool CreateDeviceAuthorizer::isCacheEnable() const
{
    return cacheEnable_;
}

void CreateDeviceAuthorizer::setCacheEnable(bool value)
{
    cacheEnable_ = value;
    cacheEnableIsSet_ = true;
}

bool CreateDeviceAuthorizer::cacheEnableIsSet() const
{
    return cacheEnableIsSet_;
}

void CreateDeviceAuthorizer::unsetcacheEnable()
{
    cacheEnableIsSet_ = false;
}

}
}
}
}
}


