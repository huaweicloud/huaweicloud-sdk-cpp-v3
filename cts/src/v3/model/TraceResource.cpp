

#include "huaweicloud/cts/v3/model/TraceResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




TraceResource::TraceResource()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceIsSet_ = false;
}

TraceResource::~TraceResource() = default;

void TraceResource::validate()
{
}

web::json::value TraceResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }

    return val;
}
bool TraceResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    return ok;
}


std::string TraceResource::getServiceType() const
{
    return serviceType_;
}

void TraceResource::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TraceResource::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TraceResource::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<std::string>& TraceResource::getResource()
{
    return resource_;
}

void TraceResource::setResource(const std::vector<std::string>& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool TraceResource::resourceIsSet() const
{
    return resourceIsSet_;
}

void TraceResource::unsetresource()
{
    resourceIsSet_ = false;
}

}
}
}
}
}


