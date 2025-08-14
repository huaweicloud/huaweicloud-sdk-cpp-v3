

#include "huaweicloud/iotda/v5/model/UpdateDeviceAuthorizerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceAuthorizerResponse::UpdateDeviceAuthorizerResponse()
{
    authorizerId_ = "";
    authorizerIdIsSet_ = false;
    authorizerName_ = "";
    authorizerNameIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
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
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

UpdateDeviceAuthorizerResponse::~UpdateDeviceAuthorizerResponse() = default;

void UpdateDeviceAuthorizerResponse::validate()
{
}

web::json::value UpdateDeviceAuthorizerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizerIdIsSet_) {
        val[utility::conversions::to_string_t("authorizer_id")] = ModelBase::toJson(authorizerId_);
    }
    if(authorizerNameIsSet_) {
        val[utility::conversions::to_string_t("authorizer_name")] = ModelBase::toJson(authorizerName_);
    }
    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool UpdateDeviceAuthorizerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorizer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorizer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorizer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceAuthorizerResponse::getAuthorizerId() const
{
    return authorizerId_;
}

void UpdateDeviceAuthorizerResponse::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getAuthorizerName() const
{
    return authorizerName_;
}

void UpdateDeviceAuthorizerResponse::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getFuncName() const
{
    return funcName_;
}

void UpdateDeviceAuthorizerResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getFuncUrn() const
{
    return funcUrn_;
}

void UpdateDeviceAuthorizerResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

bool UpdateDeviceAuthorizerResponse::isSigningEnable() const
{
    return signingEnable_;
}

void UpdateDeviceAuthorizerResponse::setSigningEnable(bool value)
{
    signingEnable_ = value;
    signingEnableIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::signingEnableIsSet() const
{
    return signingEnableIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetsigningEnable()
{
    signingEnableIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getSigningToken() const
{
    return signingToken_;
}

void UpdateDeviceAuthorizerResponse::setSigningToken(const std::string& value)
{
    signingToken_ = value;
    signingTokenIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::signingTokenIsSet() const
{
    return signingTokenIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetsigningToken()
{
    signingTokenIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getSigningPublicKey() const
{
    return signingPublicKey_;
}

void UpdateDeviceAuthorizerResponse::setSigningPublicKey(const std::string& value)
{
    signingPublicKey_ = value;
    signingPublicKeyIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::signingPublicKeyIsSet() const
{
    return signingPublicKeyIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetsigningPublicKey()
{
    signingPublicKeyIsSet_ = false;
}

bool UpdateDeviceAuthorizerResponse::isDefaultAuthorizer() const
{
    return defaultAuthorizer_;
}

void UpdateDeviceAuthorizerResponse::setDefaultAuthorizer(bool value)
{
    defaultAuthorizer_ = value;
    defaultAuthorizerIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::defaultAuthorizerIsSet() const
{
    return defaultAuthorizerIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetdefaultAuthorizer()
{
    defaultAuthorizerIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getStatus() const
{
    return status_;
}

void UpdateDeviceAuthorizerResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool UpdateDeviceAuthorizerResponse::isCacheEnable() const
{
    return cacheEnable_;
}

void UpdateDeviceAuthorizerResponse::setCacheEnable(bool value)
{
    cacheEnable_ = value;
    cacheEnableIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::cacheEnableIsSet() const
{
    return cacheEnableIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetcacheEnable()
{
    cacheEnableIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateDeviceAuthorizerResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateDeviceAuthorizerResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateDeviceAuthorizerResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateDeviceAuthorizerResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateDeviceAuthorizerResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


