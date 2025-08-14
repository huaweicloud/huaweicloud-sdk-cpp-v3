

#include "huaweicloud/iotda/v5/model/ListDeviceGroupsByDeviceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceGroupsByDeviceResponse::ListDeviceGroupsByDeviceResponse()
{
    deviceGroupsIsSet_ = false;
}

ListDeviceGroupsByDeviceResponse::~ListDeviceGroupsByDeviceResponse() = default;

void ListDeviceGroupsByDeviceResponse::validate()
{
}

web::json::value ListDeviceGroupsByDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceGroupsIsSet_) {
        val[utility::conversions::to_string_t("device_groups")] = ModelBase::toJson(deviceGroups_);
    }

    return val;
}
bool ListDeviceGroupsByDeviceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDeviceGroupSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceGroups(refVal);
        }
    }
    return ok;
}


std::vector<ListDeviceGroupSummary>& ListDeviceGroupsByDeviceResponse::getDeviceGroups()
{
    return deviceGroups_;
}

void ListDeviceGroupsByDeviceResponse::setDeviceGroups(const std::vector<ListDeviceGroupSummary>& value)
{
    deviceGroups_ = value;
    deviceGroupsIsSet_ = true;
}

bool ListDeviceGroupsByDeviceResponse::deviceGroupsIsSet() const
{
    return deviceGroupsIsSet_;
}

void ListDeviceGroupsByDeviceResponse::unsetdeviceGroups()
{
    deviceGroupsIsSet_ = false;
}

}
}
}
}
}


