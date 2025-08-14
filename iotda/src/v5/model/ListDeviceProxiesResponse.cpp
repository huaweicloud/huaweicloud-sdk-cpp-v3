

#include "huaweicloud/iotda/v5/model/ListDeviceProxiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceProxiesResponse::ListDeviceProxiesResponse()
{
    deviceProxiesIsSet_ = false;
    pageIsSet_ = false;
}

ListDeviceProxiesResponse::~ListDeviceProxiesResponse() = default;

void ListDeviceProxiesResponse::validate()
{
}

web::json::value ListDeviceProxiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceProxiesIsSet_) {
        val[utility::conversions::to_string_t("device_proxies")] = ModelBase::toJson(deviceProxies_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListDeviceProxiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_proxies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_proxies"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDeviceProxySimplify> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceProxies(refVal);
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


std::vector<QueryDeviceProxySimplify>& ListDeviceProxiesResponse::getDeviceProxies()
{
    return deviceProxies_;
}

void ListDeviceProxiesResponse::setDeviceProxies(const std::vector<QueryDeviceProxySimplify>& value)
{
    deviceProxies_ = value;
    deviceProxiesIsSet_ = true;
}

bool ListDeviceProxiesResponse::deviceProxiesIsSet() const
{
    return deviceProxiesIsSet_;
}

void ListDeviceProxiesResponse::unsetdeviceProxies()
{
    deviceProxiesIsSet_ = false;
}

Page ListDeviceProxiesResponse::getPage() const
{
    return page_;
}

void ListDeviceProxiesResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListDeviceProxiesResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListDeviceProxiesResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


