

#include "huaweicloud/iotda/v5/model/BridgeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BridgeResponse::BridgeResponse()
{
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
    bridgeName_ = "";
    bridgeNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

BridgeResponse::~BridgeResponse() = default;

void BridgeResponse::validate()
{
}

web::json::value BridgeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }
    if(bridgeNameIsSet_) {
        val[utility::conversions::to_string_t("bridge_name")] = ModelBase::toJson(bridgeName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool BridgeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string BridgeResponse::getBridgeId() const
{
    return bridgeId_;
}

void BridgeResponse::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool BridgeResponse::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void BridgeResponse::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

std::string BridgeResponse::getBridgeName() const
{
    return bridgeName_;
}

void BridgeResponse::setBridgeName(const std::string& value)
{
    bridgeName_ = value;
    bridgeNameIsSet_ = true;
}

bool BridgeResponse::bridgeNameIsSet() const
{
    return bridgeNameIsSet_;
}

void BridgeResponse::unsetbridgeName()
{
    bridgeNameIsSet_ = false;
}

std::string BridgeResponse::getStatus() const
{
    return status_;
}

void BridgeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BridgeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BridgeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


