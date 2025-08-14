

#include "huaweicloud/iotda/v5/model/AddBridge.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AddBridge::AddBridge()
{
    bridgeName_ = "";
    bridgeNameIsSet_ = false;
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
}

AddBridge::~AddBridge() = default;

void AddBridge::validate()
{
}

web::json::value AddBridge::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bridgeNameIsSet_) {
        val[utility::conversions::to_string_t("bridge_name")] = ModelBase::toJson(bridgeName_);
    }
    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }

    return val;
}
bool AddBridge::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bridge_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bridge_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bridge_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBridgeId(refVal);
        }
    }
    return ok;
}


std::string AddBridge::getBridgeName() const
{
    return bridgeName_;
}

void AddBridge::setBridgeName(const std::string& value)
{
    bridgeName_ = value;
    bridgeNameIsSet_ = true;
}

bool AddBridge::bridgeNameIsSet() const
{
    return bridgeNameIsSet_;
}

void AddBridge::unsetbridgeName()
{
    bridgeNameIsSet_ = false;
}

std::string AddBridge::getBridgeId() const
{
    return bridgeId_;
}

void AddBridge::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool AddBridge::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void AddBridge::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

}
}
}
}
}


