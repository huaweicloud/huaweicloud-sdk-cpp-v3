

#include "huaweicloud/iotda/v5/model/SearchDevicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SearchDevicesResponse::SearchDevicesResponse()
{
    devicesIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

SearchDevicesResponse::~SearchDevicesResponse() = default;

void SearchDevicesResponse::validate()
{
}

web::json::value SearchDevicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devicesIsSet_) {
        val[utility::conversions::to_string_t("devices")] = ModelBase::toJson(devices_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool SearchDevicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("devices"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devices"));
        if(!fieldValue.is_null())
        {
            std::vector<SearchDevice> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevices(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<SearchDevice>& SearchDevicesResponse::getDevices()
{
    return devices_;
}

void SearchDevicesResponse::setDevices(const std::vector<SearchDevice>& value)
{
    devices_ = value;
    devicesIsSet_ = true;
}

bool SearchDevicesResponse::devicesIsSet() const
{
    return devicesIsSet_;
}

void SearchDevicesResponse::unsetdevices()
{
    devicesIsSet_ = false;
}

int64_t SearchDevicesResponse::getCount() const
{
    return count_;
}

void SearchDevicesResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool SearchDevicesResponse::countIsSet() const
{
    return countIsSet_;
}

void SearchDevicesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


