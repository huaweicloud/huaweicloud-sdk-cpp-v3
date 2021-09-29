

#include "huaweicloud/ecs/v2/model/BatchAttachSharableVolumesOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAttachSharableVolumesOption::BatchAttachSharableVolumesOption()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    device_ = "";
    deviceIsSet_ = false;
}

BatchAttachSharableVolumesOption::~BatchAttachSharableVolumesOption() = default;

void BatchAttachSharableVolumesOption::validate()
{
}

web::json::value BatchAttachSharableVolumesOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }

    return val;
}

bool BatchAttachSharableVolumesOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    return ok;
}


std::string BatchAttachSharableVolumesOption::getServerId() const
{
    return serverId_;
}

void BatchAttachSharableVolumesOption::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool BatchAttachSharableVolumesOption::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void BatchAttachSharableVolumesOption::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string BatchAttachSharableVolumesOption::getDevice() const
{
    return device_;
}

void BatchAttachSharableVolumesOption::setDevice(const std::string& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool BatchAttachSharableVolumesOption::deviceIsSet() const
{
    return deviceIsSet_;
}

void BatchAttachSharableVolumesOption::unsetdevice()
{
    deviceIsSet_ = false;
}

}
}
}
}
}


