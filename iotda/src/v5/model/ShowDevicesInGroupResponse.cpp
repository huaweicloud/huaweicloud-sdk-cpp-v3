

#include "huaweicloud/iotda/v5/model/ShowDevicesInGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDevicesInGroupResponse::ShowDevicesInGroupResponse()
{
    devicesIsSet_ = false;
    pageIsSet_ = false;
}

ShowDevicesInGroupResponse::~ShowDevicesInGroupResponse() = default;

void ShowDevicesInGroupResponse::validate()
{
}

web::json::value ShowDevicesInGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devicesIsSet_) {
        val[utility::conversions::to_string_t("devices")] = ModelBase::toJson(devices_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ShowDevicesInGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devices"));
        if(!fieldValue.is_null())
        {
            std::vector<SimplifyDevice> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<SimplifyDevice>& ShowDevicesInGroupResponse::getDevices()
{
    return devices_;
}

void ShowDevicesInGroupResponse::setDevices(const std::vector<SimplifyDevice>& value)
{
    devices_ = value;
    devicesIsSet_ = true;
}

bool ShowDevicesInGroupResponse::devicesIsSet() const
{
    return devicesIsSet_;
}

void ShowDevicesInGroupResponse::unsetdevices()
{
    devicesIsSet_ = false;
}

Page ShowDevicesInGroupResponse::getPage() const
{
    return page_;
}

void ShowDevicesInGroupResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ShowDevicesInGroupResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ShowDevicesInGroupResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


