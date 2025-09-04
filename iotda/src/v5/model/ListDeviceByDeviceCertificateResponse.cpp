

#include "huaweicloud/iotda/v5/model/ListDeviceByDeviceCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceByDeviceCertificateResponse::ListDeviceByDeviceCertificateResponse()
{
    devicesIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceByDeviceCertificateResponse::~ListDeviceByDeviceCertificateResponse() = default;

void ListDeviceByDeviceCertificateResponse::validate()
{
}

web::json::value ListDeviceByDeviceCertificateResponse::toJson() const
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
bool ListDeviceByDeviceCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devices"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceSimple> refVal;
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


std::vector<DeviceSimple>& ListDeviceByDeviceCertificateResponse::getDevices()
{
    return devices_;
}

void ListDeviceByDeviceCertificateResponse::setDevices(const std::vector<DeviceSimple>& value)
{
    devices_ = value;
    devicesIsSet_ = true;
}

bool ListDeviceByDeviceCertificateResponse::devicesIsSet() const
{
    return devicesIsSet_;
}

void ListDeviceByDeviceCertificateResponse::unsetdevices()
{
    devicesIsSet_ = false;
}

Page ListDeviceByDeviceCertificateResponse::getPage() const
{
    return page_;
}

void ListDeviceByDeviceCertificateResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceByDeviceCertificateResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceByDeviceCertificateResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


