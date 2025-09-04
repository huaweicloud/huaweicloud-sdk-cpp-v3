

#include "huaweicloud/iotda/v5/model/ResetHarmonySoftBusKeyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetHarmonySoftBusKeyRequest::ResetHarmonySoftBusKeyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    busId_ = "";
    busIdIsSet_ = false;
}

ResetHarmonySoftBusKeyRequest::~ResetHarmonySoftBusKeyRequest() = default;

void ResetHarmonySoftBusKeyRequest::validate()
{
}

web::json::value ResetHarmonySoftBusKeyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(busIdIsSet_) {
        val[utility::conversions::to_string_t("bus_id")] = ModelBase::toJson(busId_);
    }

    return val;
}
bool ResetHarmonySoftBusKeyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("bus_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bus_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusId(refVal);
        }
    }
    return ok;
}


std::string ResetHarmonySoftBusKeyRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetHarmonySoftBusKeyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetHarmonySoftBusKeyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetHarmonySoftBusKeyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ResetHarmonySoftBusKeyRequest::getBusId() const
{
    return busId_;
}

void ResetHarmonySoftBusKeyRequest::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool ResetHarmonySoftBusKeyRequest::busIdIsSet() const
{
    return busIdIsSet_;
}

void ResetHarmonySoftBusKeyRequest::unsetbusId()
{
    busIdIsSet_ = false;
}

}
}
}
}
}


