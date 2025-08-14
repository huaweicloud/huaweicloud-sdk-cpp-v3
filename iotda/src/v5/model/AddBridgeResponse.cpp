

#include "huaweicloud/iotda/v5/model/AddBridgeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddBridgeResponse::AddBridgeResponse()
{
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
    bridgeName_ = "";
    bridgeNameIsSet_ = false;
    authInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
}

AddBridgeResponse::~AddBridgeResponse() = default;

void AddBridgeResponse::validate()
{
}

web::json::value AddBridgeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }
    if(bridgeNameIsSet_) {
        val[utility::conversions::to_string_t("bridge_name")] = ModelBase::toJson(bridgeName_);
    }
    if(authInfoIsSet_) {
        val[utility::conversions::to_string_t("auth_info")] = ModelBase::toJson(authInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AddBridgeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bridge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bridge_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_info"));
        if(!fieldValue.is_null())
        {
            BridgeAuthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthInfo(refVal);
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
    return ok;
}


std::string AddBridgeResponse::getBridgeId() const
{
    return bridgeId_;
}

void AddBridgeResponse::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool AddBridgeResponse::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void AddBridgeResponse::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

std::string AddBridgeResponse::getBridgeName() const
{
    return bridgeName_;
}

void AddBridgeResponse::setBridgeName(const std::string& value)
{
    bridgeName_ = value;
    bridgeNameIsSet_ = true;
}

bool AddBridgeResponse::bridgeNameIsSet() const
{
    return bridgeNameIsSet_;
}

void AddBridgeResponse::unsetbridgeName()
{
    bridgeNameIsSet_ = false;
}

BridgeAuthInfo AddBridgeResponse::getAuthInfo() const
{
    return authInfo_;
}

void AddBridgeResponse::setAuthInfo(const BridgeAuthInfo& value)
{
    authInfo_ = value;
    authInfoIsSet_ = true;
}

bool AddBridgeResponse::authInfoIsSet() const
{
    return authInfoIsSet_;
}

void AddBridgeResponse::unsetauthInfo()
{
    authInfoIsSet_ = false;
}

std::string AddBridgeResponse::getCreateTime() const
{
    return createTime_;
}

void AddBridgeResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AddBridgeResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AddBridgeResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


