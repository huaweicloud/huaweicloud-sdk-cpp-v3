

#include "huaweicloud/iotda/v5/model/CreateDeviceAuthorizerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceAuthorizerResponse::CreateDeviceAuthorizerResponse()
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

CreateDeviceAuthorizerResponse::~CreateDeviceAuthorizerResponse() = default;

void CreateDeviceAuthorizerResponse::validate()
{
}

web::json::value CreateDeviceAuthorizerResponse::toJson() const
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
bool CreateDeviceAuthorizerResponse::fromJson(const web::json::value& val)
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


std::string CreateDeviceAuthorizerResponse::getAuthorizerId() const
{
    return authorizerId_;
}

void CreateDeviceAuthorizerResponse::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getAuthorizerName() const
{
    return authorizerName_;
}

void CreateDeviceAuthorizerResponse::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getFuncName() const
{
    return funcName_;
}

void CreateDeviceAuthorizerResponse::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getFuncUrn() const
{
    return funcUrn_;
}

void CreateDeviceAuthorizerResponse::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

bool CreateDeviceAuthorizerResponse::isSigningEnable() const
{
    return signingEnable_;
}

void CreateDeviceAuthorizerResponse::setSigningEnable(bool value)
{
    signingEnable_ = value;
    signingEnableIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::signingEnableIsSet() const
{
    return signingEnableIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetsigningEnable()
{
    signingEnableIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getSigningToken() const
{
    return signingToken_;
}

void CreateDeviceAuthorizerResponse::setSigningToken(const std::string& value)
{
    signingToken_ = value;
    signingTokenIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::signingTokenIsSet() const
{
    return signingTokenIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetsigningToken()
{
    signingTokenIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getSigningPublicKey() const
{
    return signingPublicKey_;
}

void CreateDeviceAuthorizerResponse::setSigningPublicKey(const std::string& value)
{
    signingPublicKey_ = value;
    signingPublicKeyIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::signingPublicKeyIsSet() const
{
    return signingPublicKeyIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetsigningPublicKey()
{
    signingPublicKeyIsSet_ = false;
}

bool CreateDeviceAuthorizerResponse::isDefaultAuthorizer() const
{
    return defaultAuthorizer_;
}

void CreateDeviceAuthorizerResponse::setDefaultAuthorizer(bool value)
{
    defaultAuthorizer_ = value;
    defaultAuthorizerIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::defaultAuthorizerIsSet() const
{
    return defaultAuthorizerIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetdefaultAuthorizer()
{
    defaultAuthorizerIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getStatus() const
{
    return status_;
}

void CreateDeviceAuthorizerResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetstatus()
{
    statusIsSet_ = false;
}

bool CreateDeviceAuthorizerResponse::isCacheEnable() const
{
    return cacheEnable_;
}

void CreateDeviceAuthorizerResponse::setCacheEnable(bool value)
{
    cacheEnable_ = value;
    cacheEnableIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::cacheEnableIsSet() const
{
    return cacheEnableIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetcacheEnable()
{
    cacheEnableIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getCreateTime() const
{
    return createTime_;
}

void CreateDeviceAuthorizerResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateDeviceAuthorizerResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateDeviceAuthorizerResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateDeviceAuthorizerResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateDeviceAuthorizerResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


