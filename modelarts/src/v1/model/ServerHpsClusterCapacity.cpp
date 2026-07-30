

#include "huaweicloud/modelarts/v1/model/ServerHpsClusterCapacity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerHpsClusterCapacity::ServerHpsClusterCapacity()
{
    flavor_ = "";
    flavorIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    hyperinstanceClusterId_ = "";
    hyperinstanceClusterIdIsSet_ = false;
    hyperinstanceClusterName_ = "";
    hyperinstanceClusterNameIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
    isSoldOut_ = false;
    isSoldOutIsSet_ = false;
}

ServerHpsClusterCapacity::~ServerHpsClusterCapacity() = default;

void ServerHpsClusterCapacity::validate()
{
}

web::json::value ServerHpsClusterCapacity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(hyperinstanceClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_id")] = ModelBase::toJson(hyperinstanceClusterId_);
    }
    if(hyperinstanceClusterNameIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_name")] = ModelBase::toJson(hyperinstanceClusterName_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }
    if(isSoldOutIsSet_) {
        val[utility::conversions::to_string_t("is_sold_out")] = ModelBase::toJson(isSoldOut_);
    }

    return val;
}
bool ServerHpsClusterCapacity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceClusterName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_sold_out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sold_out"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSoldOut(refVal);
        }
    }
    return ok;
}


std::string ServerHpsClusterCapacity::getFlavor() const
{
    return flavor_;
}

void ServerHpsClusterCapacity::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ServerHpsClusterCapacity::flavorIsSet() const
{
    return flavorIsSet_;
}

void ServerHpsClusterCapacity::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ServerHpsClusterCapacity::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ServerHpsClusterCapacity::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ServerHpsClusterCapacity::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ServerHpsClusterCapacity::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ServerHpsClusterCapacity::getHyperinstanceClusterId() const
{
    return hyperinstanceClusterId_;
}

void ServerHpsClusterCapacity::setHyperinstanceClusterId(const std::string& value)
{
    hyperinstanceClusterId_ = value;
    hyperinstanceClusterIdIsSet_ = true;
}

bool ServerHpsClusterCapacity::hyperinstanceClusterIdIsSet() const
{
    return hyperinstanceClusterIdIsSet_;
}

void ServerHpsClusterCapacity::unsethyperinstanceClusterId()
{
    hyperinstanceClusterIdIsSet_ = false;
}

std::string ServerHpsClusterCapacity::getHyperinstanceClusterName() const
{
    return hyperinstanceClusterName_;
}

void ServerHpsClusterCapacity::setHyperinstanceClusterName(const std::string& value)
{
    hyperinstanceClusterName_ = value;
    hyperinstanceClusterNameIsSet_ = true;
}

bool ServerHpsClusterCapacity::hyperinstanceClusterNameIsSet() const
{
    return hyperinstanceClusterNameIsSet_;
}

void ServerHpsClusterCapacity::unsethyperinstanceClusterName()
{
    hyperinstanceClusterNameIsSet_ = false;
}

std::string ServerHpsClusterCapacity::getResourceFlavor() const
{
    return resourceFlavor_;
}

void ServerHpsClusterCapacity::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool ServerHpsClusterCapacity::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void ServerHpsClusterCapacity::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

bool ServerHpsClusterCapacity::isIsSoldOut() const
{
    return isSoldOut_;
}

void ServerHpsClusterCapacity::setIsSoldOut(bool value)
{
    isSoldOut_ = value;
    isSoldOutIsSet_ = true;
}

bool ServerHpsClusterCapacity::isSoldOutIsSet() const
{
    return isSoldOutIsSet_;
}

void ServerHpsClusterCapacity::unsetisSoldOut()
{
    isSoldOutIsSet_ = false;
}

}
}
}
}
}


