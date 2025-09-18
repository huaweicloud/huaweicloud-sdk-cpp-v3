

#include "huaweicloud/ga/v1/model/CreateEndpointOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateEndpointOption::CreateEndpointOption()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceTypeIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

CreateEndpointOption::~CreateEndpointOption() = default;

void CreateEndpointOption::validate()
{
}

web::json::value CreateEndpointOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}
bool CreateEndpointOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            EndpointType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}


std::string CreateEndpointOption::getResourceId() const
{
    return resourceId_;
}

void CreateEndpointOption::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateEndpointOption::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateEndpointOption::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

EndpointType CreateEndpointOption::getResourceType() const
{
    return resourceType_;
}

void CreateEndpointOption::setResourceType(const EndpointType& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool CreateEndpointOption::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void CreateEndpointOption::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

int32_t CreateEndpointOption::getWeight() const
{
    return weight_;
}

void CreateEndpointOption::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool CreateEndpointOption::weightIsSet() const
{
    return weightIsSet_;
}

void CreateEndpointOption::unsetweight()
{
    weightIsSet_ = false;
}

std::string CreateEndpointOption::getIpAddress() const
{
    return ipAddress_;
}

void CreateEndpointOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CreateEndpointOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CreateEndpointOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


