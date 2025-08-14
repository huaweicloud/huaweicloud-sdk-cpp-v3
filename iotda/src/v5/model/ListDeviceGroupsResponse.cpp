

#include "huaweicloud/iotda/v5/model/ListDeviceGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceGroupsResponse::ListDeviceGroupsResponse()
{
    deviceGroupsIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceGroupsResponse::~ListDeviceGroupsResponse() = default;

void ListDeviceGroupsResponse::validate()
{
}

web::json::value ListDeviceGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceGroupsIsSet_) {
        val[utility::conversions::to_string_t("device_groups")] = ModelBase::toJson(deviceGroups_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDeviceGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<DeviceGroupResponseSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceGroups(refVal);
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


std::vector<DeviceGroupResponseSummary>& ListDeviceGroupsResponse::getDeviceGroups()
{
    return deviceGroups_;
}

void ListDeviceGroupsResponse::setDeviceGroups(const std::vector<DeviceGroupResponseSummary>& value)
{
    deviceGroups_ = value;
    deviceGroupsIsSet_ = true;
}

bool ListDeviceGroupsResponse::deviceGroupsIsSet() const
{
    return deviceGroupsIsSet_;
}

void ListDeviceGroupsResponse::unsetdeviceGroups()
{
    deviceGroupsIsSet_ = false;
}

Page ListDeviceGroupsResponse::getPage() const
{
    return page_;
}

void ListDeviceGroupsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceGroupsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceGroupsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


