

#include "huaweicloud/iotda/v5/model/DeleteBridgeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBridgeRequest::DeleteBridgeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bridgeId_ = "";
    bridgeIdIsSet_ = false;
}

DeleteBridgeRequest::~DeleteBridgeRequest() = default;

void DeleteBridgeRequest::validate()
{
}

web::json::value DeleteBridgeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bridgeIdIsSet_) {
        val[utility::conversions::to_string_t("bridge_id")] = ModelBase::toJson(bridgeId_);
    }

    return val;
}
bool DeleteBridgeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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


std::string DeleteBridgeRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteBridgeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteBridgeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteBridgeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteBridgeRequest::getBridgeId() const
{
    return bridgeId_;
}

void DeleteBridgeRequest::setBridgeId(const std::string& value)
{
    bridgeId_ = value;
    bridgeIdIsSet_ = true;
}

bool DeleteBridgeRequest::bridgeIdIsSet() const
{
    return bridgeIdIsSet_;
}

void DeleteBridgeRequest::unsetbridgeId()
{
    bridgeIdIsSet_ = false;
}

}
}
}
}
}


