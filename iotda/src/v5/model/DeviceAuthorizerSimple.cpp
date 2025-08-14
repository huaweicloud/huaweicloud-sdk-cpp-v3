

#include "huaweicloud/iotda/v5/model/DeviceAuthorizerSimple.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceAuthorizerSimple::DeviceAuthorizerSimple()
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

DeviceAuthorizerSimple::~DeviceAuthorizerSimple() = default;

void DeviceAuthorizerSimple::validate()
{
}

web::json::value DeviceAuthorizerSimple::toJson() const
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
bool DeviceAuthorizerSimple::fromJson(const web::json::value& val)
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


std::string DeviceAuthorizerSimple::getAuthorizerId() const
{
    return authorizerId_;
}

void DeviceAuthorizerSimple::setAuthorizerId(const std::string& value)
{
    authorizerId_ = value;
    authorizerIdIsSet_ = true;
}

bool DeviceAuthorizerSimple::authorizerIdIsSet() const
{
    return authorizerIdIsSet_;
}

void DeviceAuthorizerSimple::unsetauthorizerId()
{
    authorizerIdIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getAuthorizerName() const
{
    return authorizerName_;
}

void DeviceAuthorizerSimple::setAuthorizerName(const std::string& value)
{
    authorizerName_ = value;
    authorizerNameIsSet_ = true;
}

bool DeviceAuthorizerSimple::authorizerNameIsSet() const
{
    return authorizerNameIsSet_;
}

void DeviceAuthorizerSimple::unsetauthorizerName()
{
    authorizerNameIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getFuncName() const
{
    return funcName_;
}

void DeviceAuthorizerSimple::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool DeviceAuthorizerSimple::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void DeviceAuthorizerSimple::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getFuncUrn() const
{
    return funcUrn_;
}

void DeviceAuthorizerSimple::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool DeviceAuthorizerSimple::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void DeviceAuthorizerSimple::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

bool DeviceAuthorizerSimple::isSigningEnable() const
{
    return signingEnable_;
}

void DeviceAuthorizerSimple::setSigningEnable(bool value)
{
    signingEnable_ = value;
    signingEnableIsSet_ = true;
}

bool DeviceAuthorizerSimple::signingEnableIsSet() const
{
    return signingEnableIsSet_;
}

void DeviceAuthorizerSimple::unsetsigningEnable()
{
    signingEnableIsSet_ = false;
}

bool DeviceAuthorizerSimple::isDefaultAuthorizer() const
{
    return defaultAuthorizer_;
}

void DeviceAuthorizerSimple::setDefaultAuthorizer(bool value)
{
    defaultAuthorizer_ = value;
    defaultAuthorizerIsSet_ = true;
}

bool DeviceAuthorizerSimple::defaultAuthorizerIsSet() const
{
    return defaultAuthorizerIsSet_;
}

void DeviceAuthorizerSimple::unsetdefaultAuthorizer()
{
    defaultAuthorizerIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getStatus() const
{
    return status_;
}

void DeviceAuthorizerSimple::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeviceAuthorizerSimple::statusIsSet() const
{
    return statusIsSet_;
}

void DeviceAuthorizerSimple::unsetstatus()
{
    statusIsSet_ = false;
}

bool DeviceAuthorizerSimple::isCacheEnable() const
{
    return cacheEnable_;
}

void DeviceAuthorizerSimple::setCacheEnable(bool value)
{
    cacheEnable_ = value;
    cacheEnableIsSet_ = true;
}

bool DeviceAuthorizerSimple::cacheEnableIsSet() const
{
    return cacheEnableIsSet_;
}

void DeviceAuthorizerSimple::unsetcacheEnable()
{
    cacheEnableIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getCreateTime() const
{
    return createTime_;
}

void DeviceAuthorizerSimple::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DeviceAuthorizerSimple::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DeviceAuthorizerSimple::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DeviceAuthorizerSimple::getUpdateTime() const
{
    return updateTime_;
}

void DeviceAuthorizerSimple::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DeviceAuthorizerSimple::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DeviceAuthorizerSimple::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


