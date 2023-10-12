

#include "huaweicloud/cts/v3/model/ListOperationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListOperationsRequest::ListOperationsRequest()
{
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ListOperationsRequest::~ListOperationsRequest() = default;

void ListOperationsRequest::validate()
{
}

web::json::value ListOperationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ListOperationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}


std::string ListOperationsRequest::getServiceType() const
{
    return serviceType_;
}

void ListOperationsRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListOperationsRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListOperationsRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListOperationsRequest::getResourceType() const
{
    return resourceType_;
}

void ListOperationsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListOperationsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListOperationsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


