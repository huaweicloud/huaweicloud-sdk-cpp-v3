

#include "huaweicloud/modelarts/v1/model/ServerHpsGroupCapacity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServerHpsGroupCapacity::ServerHpsGroupCapacity()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    hyperinstanceGroupId_ = "";
    hyperinstanceGroupIdIsSet_ = false;
    hyperinstanceGroupName_ = "";
    hyperinstanceGroupNameIsSet_ = false;
    hyperinstanceClusterId_ = "";
    hyperinstanceClusterIdIsSet_ = false;
    resourceFlavor_ = "";
    resourceFlavorIsSet_ = false;
    isSoldOut_ = false;
    isSoldOutIsSet_ = false;
}

ServerHpsGroupCapacity::~ServerHpsGroupCapacity() = default;

void ServerHpsGroupCapacity::validate()
{
}

web::json::value ServerHpsGroupCapacity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(hyperinstanceGroupIdIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_group_id")] = ModelBase::toJson(hyperinstanceGroupId_);
    }
    if(hyperinstanceGroupNameIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_group_name")] = ModelBase::toJson(hyperinstanceGroupName_);
    }
    if(hyperinstanceClusterIdIsSet_) {
        val[utility::conversions::to_string_t("hyperinstance_cluster_id")] = ModelBase::toJson(hyperinstanceClusterId_);
    }
    if(resourceFlavorIsSet_) {
        val[utility::conversions::to_string_t("resource_flavor")] = ModelBase::toJson(resourceFlavor_);
    }
    if(isSoldOutIsSet_) {
        val[utility::conversions::to_string_t("is_sold_out")] = ModelBase::toJson(isSoldOut_);
    }

    return val;
}
bool ServerHpsGroupCapacity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hyperinstance_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hyperinstance_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHyperinstanceGroupName(refVal);
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


std::string ServerHpsGroupCapacity::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ServerHpsGroupCapacity::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ServerHpsGroupCapacity::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ServerHpsGroupCapacity::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ServerHpsGroupCapacity::getHyperinstanceGroupId() const
{
    return hyperinstanceGroupId_;
}

void ServerHpsGroupCapacity::setHyperinstanceGroupId(const std::string& value)
{
    hyperinstanceGroupId_ = value;
    hyperinstanceGroupIdIsSet_ = true;
}

bool ServerHpsGroupCapacity::hyperinstanceGroupIdIsSet() const
{
    return hyperinstanceGroupIdIsSet_;
}

void ServerHpsGroupCapacity::unsethyperinstanceGroupId()
{
    hyperinstanceGroupIdIsSet_ = false;
}

std::string ServerHpsGroupCapacity::getHyperinstanceGroupName() const
{
    return hyperinstanceGroupName_;
}

void ServerHpsGroupCapacity::setHyperinstanceGroupName(const std::string& value)
{
    hyperinstanceGroupName_ = value;
    hyperinstanceGroupNameIsSet_ = true;
}

bool ServerHpsGroupCapacity::hyperinstanceGroupNameIsSet() const
{
    return hyperinstanceGroupNameIsSet_;
}

void ServerHpsGroupCapacity::unsethyperinstanceGroupName()
{
    hyperinstanceGroupNameIsSet_ = false;
}

std::string ServerHpsGroupCapacity::getHyperinstanceClusterId() const
{
    return hyperinstanceClusterId_;
}

void ServerHpsGroupCapacity::setHyperinstanceClusterId(const std::string& value)
{
    hyperinstanceClusterId_ = value;
    hyperinstanceClusterIdIsSet_ = true;
}

bool ServerHpsGroupCapacity::hyperinstanceClusterIdIsSet() const
{
    return hyperinstanceClusterIdIsSet_;
}

void ServerHpsGroupCapacity::unsethyperinstanceClusterId()
{
    hyperinstanceClusterIdIsSet_ = false;
}

std::string ServerHpsGroupCapacity::getResourceFlavor() const
{
    return resourceFlavor_;
}

void ServerHpsGroupCapacity::setResourceFlavor(const std::string& value)
{
    resourceFlavor_ = value;
    resourceFlavorIsSet_ = true;
}

bool ServerHpsGroupCapacity::resourceFlavorIsSet() const
{
    return resourceFlavorIsSet_;
}

void ServerHpsGroupCapacity::unsetresourceFlavor()
{
    resourceFlavorIsSet_ = false;
}

bool ServerHpsGroupCapacity::isIsSoldOut() const
{
    return isSoldOut_;
}

void ServerHpsGroupCapacity::setIsSoldOut(bool value)
{
    isSoldOut_ = value;
    isSoldOutIsSet_ = true;
}

bool ServerHpsGroupCapacity::isSoldOutIsSet() const
{
    return isSoldOutIsSet_;
}

void ServerHpsGroupCapacity::unsetisSoldOut()
{
    isSoldOutIsSet_ = false;
}

}
}
}
}
}


