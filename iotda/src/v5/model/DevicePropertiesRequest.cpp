

#include "huaweicloud/iotda/v5/model/DevicePropertiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DevicePropertiesRequest::DevicePropertiesRequest()
{
    servicesIsSet_ = false;
}

DevicePropertiesRequest::~DevicePropertiesRequest() = default;

void DevicePropertiesRequest::validate()
{
}

web::json::value DevicePropertiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }

    return val;
}
bool DevicePropertiesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
        }
    }
    return ok;
}


Object DevicePropertiesRequest::getServices() const
{
    return services_;
}

void DevicePropertiesRequest::setServices(const Object& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool DevicePropertiesRequest::servicesIsSet() const
{
    return servicesIsSet_;
}

void DevicePropertiesRequest::unsetservices()
{
    servicesIsSet_ = false;
}

}
}
}
}
}


