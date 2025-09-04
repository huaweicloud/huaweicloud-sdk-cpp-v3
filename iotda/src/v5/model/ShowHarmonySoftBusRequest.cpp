

#include "huaweicloud/iotda/v5/model/ShowHarmonySoftBusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowHarmonySoftBusRequest::ShowHarmonySoftBusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    busId_ = "";
    busIdIsSet_ = false;
}

ShowHarmonySoftBusRequest::~ShowHarmonySoftBusRequest() = default;

void ShowHarmonySoftBusRequest::validate()
{
}

web::json::value ShowHarmonySoftBusRequest::toJson() const
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
bool ShowHarmonySoftBusRequest::fromJson(const web::json::value& val)
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


std::string ShowHarmonySoftBusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowHarmonySoftBusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowHarmonySoftBusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowHarmonySoftBusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowHarmonySoftBusRequest::getBusId() const
{
    return busId_;
}

void ShowHarmonySoftBusRequest::setBusId(const std::string& value)
{
    busId_ = value;
    busIdIsSet_ = true;
}

bool ShowHarmonySoftBusRequest::busIdIsSet() const
{
    return busIdIsSet_;
}

void ShowHarmonySoftBusRequest::unsetbusId()
{
    busIdIsSet_ = false;
}

}
}
}
}
}


