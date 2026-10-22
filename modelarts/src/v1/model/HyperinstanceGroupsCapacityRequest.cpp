

#include "huaweicloud/modelarts/v1/model/HyperinstanceGroupsCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperinstanceGroupsCapacityRequest::HyperinstanceGroupsCapacityRequest()
{
    hyperinstanceGroupIdsIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

HyperinstanceGroupsCapacityRequest::~HyperinstanceGroupsCapacityRequest() = default;

void HyperinstanceGroupsCapacityRequest::validate()
{
}

web::json::value HyperinstanceGroupsCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hyperinstanceGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_group_ids")] = ModelBase::toJson(hyperinstanceGroupIds_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }

    return val;
}
bool HyperinstanceGroupsCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceFlavor(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& HyperinstanceGroupsCapacityRequest::getHyperinstanceGroupIds()
{
    return hyperinstanceGroupIds_;
}

void HyperinstanceGroupsCapacityRequest::setHyperinstanceGroupIds(const std::vector<std::string>& value)
{
    hyperinstanceGroupIds_ = value;
    hyperinstanceGroupIdsIsSet_ = true;
}

bool HyperinstanceGroupsCapacityRequest::hyperinstanceGroupIdsIsSet() const
{
    return hyperinstanceGroupIdsIsSet_;
}

void HyperinstanceGroupsCapacityRequest::unsethyperinstanceGroupIds()
{
    hyperinstanceGroupIdsIsSet_ = false;
}

std::string HyperinstanceGroupsCapacityRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void HyperinstanceGroupsCapacityRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool HyperinstanceGroupsCapacityRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void HyperinstanceGroupsCapacityRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string HyperinstanceGroupsCapacityRequest::getResourceFlavor() const
{
    return resourceFlavor_;
}

void HyperinstanceGroupsCapacityRequest::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool HyperinstanceGroupsCapacityRequest::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void HyperinstanceGroupsCapacityRequest::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


