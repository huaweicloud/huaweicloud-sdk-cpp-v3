

#include "huaweicloud/modelarts/v1/model/ServiceStatusItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceStatusItem::ServiceStatusItem()
{
    serviceName_ = "";
    serviceNameIsSet_ = false;
    status_ = false;
    statusIsSet_ = false;
}

ServiceStatusItem::~ServiceStatusItem() = default;

void ServiceStatusItem::validate()
{
}

web::json::value ServiceStatusItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ServiceStatusItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ServiceStatusItem::getServiceName() const
{
    return serviceName_;
}

void ServiceStatusItem::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ServiceStatusItem::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ServiceStatusItem::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

bool ServiceStatusItem::isStatus() const
{
    return status_;
}

void ServiceStatusItem::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ServiceStatusItem::statusIsSet() const
{
    return statusIsSet_;
}

void ServiceStatusItem::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


