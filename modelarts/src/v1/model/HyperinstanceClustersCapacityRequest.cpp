

#include "huaweicloud/modelarts/v1/model/HyperinstanceClustersCapacityRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




HyperinstanceClustersCapacityRequest::HyperinstanceClustersCapacityRequest()
{
    hyperinstanceClusterIdsIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
}

HyperinstanceClustersCapacityRequest::~HyperinstanceClustersCapacityRequest() = default;

void HyperinstanceClustersCapacityRequest::validate()
{
}

web::json::value HyperinstanceClustersCapacityRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hyperinstanceClusterIdsIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_ids")] = ModelBase::toJson(hyperinstanceClusterIds_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }

    return val;
}
bool HyperinstanceClustersCapacityRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_cluster_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_cluster_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceClusterIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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


std::vector<std::string>& HyperinstanceClustersCapacityRequest::getHyperinstanceClusterIds()
{
    return hyperinstanceClusterIds_;
}

void HyperinstanceClustersCapacityRequest::setHyperinstanceClusterIds(const std::vector<std::string>& value)
{
    hyperinstanceClusterIds_ = value;
    hyperinstanceClusterIdsIsSet_ = true;
}

bool HyperinstanceClustersCapacityRequest::hyperinstanceClusterIdsIsSet() const
{
    return hyperinstanceClusterIdsIsSet_;
}

void HyperinstanceClustersCapacityRequest::unsethyperinstanceClusterIds()
{
    hyperinstanceClusterIdsIsSet_ = false;
}

std::string HyperinstanceClustersCapacityRequest::getFlavor() const
{
    return flavor_;
}

void HyperinstanceClustersCapacityRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool HyperinstanceClustersCapacityRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void HyperinstanceClustersCapacityRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string HyperinstanceClustersCapacityRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void HyperinstanceClustersCapacityRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool HyperinstanceClustersCapacityRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void HyperinstanceClustersCapacityRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string HyperinstanceClustersCapacityRequest::getResourceFlavor() const
{
    return resourceFlavor_;
}

void HyperinstanceClustersCapacityRequest::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool HyperinstanceClustersCapacityRequest::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void HyperinstanceClustersCapacityRequest::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

}
}
}
}
}


