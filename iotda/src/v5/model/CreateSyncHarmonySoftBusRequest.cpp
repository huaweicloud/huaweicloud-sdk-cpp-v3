

#include "huaweicloud/iotda/v5/model/CreateSyncHarmonySoftBusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateSyncHarmonySoftBusRequest::CreateSyncHarmonySoftBusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    busId_ = "";
    busIdIsSet_ = false;
}

CreateSyncHarmonySoftBusRequest::~CreateSyncHarmonySoftBusRequest() = default;

void CreateSyncHarmonySoftBusRequest::validate()
{
}

web::json::value CreateSyncHarmonySoftBusRequest::toJson() const
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
bool CreateSyncHarmonySoftBusRequest::fromJson(const web::json::value& val)
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


std::string CreateSyncHarmonySoftBusRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSyncHarmonySoftBusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSyncHarmonySoftBusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSyncHarmonySoftBusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateSyncHarmonySoftBusRequest::getBusId() const
{
    return busId_;
}

void CreateSyncHarmonySoftBusRequest::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool CreateSyncHarmonySoftBusRequest::busIdIsSet() const
{
    return busIdIsSet_;
}

void CreateSyncHarmonySoftBusRequest::unsetbusId()
{
    busIdIsSet_ = false;
}

}
}
}
}
}


