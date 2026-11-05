

#include "huaweicloud/modelarts/v1/model/ServiceOpenItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceOpenItem::ServiceOpenItem()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
}

ServiceOpenItem::~ServiceOpenItem() = default;

void ServiceOpenItem::validate()
{
}

web::json::value ServiceOpenItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }

    return val;
}
bool ServiceOpenItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    return ok;
}


std::string ServiceOpenItem::getServiceName() const
{
    return serviceName_;
}

void ServiceOpenItem::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ServiceOpenItem::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ServiceOpenItem::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

}
}
}
}
}


