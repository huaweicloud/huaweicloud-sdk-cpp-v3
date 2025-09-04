

#include "huaweicloud/iotda/v5/model/DeleteHarmonySoftBusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteHarmonySoftBusRequest::DeleteHarmonySoftBusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    busId_ = "";
    busIdIsSet_ = false;
}

DeleteHarmonySoftBusRequest::~DeleteHarmonySoftBusRequest() = default;

void DeleteHarmonySoftBusRequest::validate()
{
}

web::json::value DeleteHarmonySoftBusRequest::toJson() const
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
bool DeleteHarmonySoftBusRequest::fromJson(const web::json::value& val)
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


std::string DeleteHarmonySoftBusRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteHarmonySoftBusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteHarmonySoftBusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteHarmonySoftBusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteHarmonySoftBusRequest::getBusId() const
{
    return busId_;
}

void DeleteHarmonySoftBusRequest::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool DeleteHarmonySoftBusRequest::busIdIsSet() const
{
    return busIdIsSet_;
}

void DeleteHarmonySoftBusRequest::unsetbusId()
{
    busIdIsSet_ = false;
}

}
}
}
}
}


