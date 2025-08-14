

#include "huaweicloud/iotda/v5/model/ListDevicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDevicesResponse::ListDevicesResponse()
{
    devicesIsSet_ = false;
    pageIsSet_ = false;
}

ListDevicesResponse::~ListDevicesResponse() = default;

void ListDevicesResponse::validate()
{
}

web::json::value ListDevicesResponse::toJson() const
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
bool ListDevicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devices"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeviceSimplify> refVal;
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


std::vector<QueryDeviceSimplify>& ListDevicesResponse::getDevices()
{
    return devices_;
}

void ListDevicesResponse::setDevices(const std::vector<QueryDeviceSimplify>& value)
{
    devices_ = value;
    devicesIsSet_ = true;
}

bool ListDevicesResponse::devicesIsSet() const
{
    return devicesIsSet_;
}

void ListDevicesResponse::unsetdevices()
{
    devicesIsSet_ = false;
}

Page ListDevicesResponse::getPage() const
{
    return page_;
}

void ListDevicesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDevicesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDevicesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


