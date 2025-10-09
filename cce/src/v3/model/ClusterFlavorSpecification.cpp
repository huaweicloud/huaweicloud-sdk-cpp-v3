

#include "huaweicloud/cce/v3/model/ClusterFlavorSpecification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterFlavorSpecification::ClusterFlavorSpecification()
{
    name_ = "";
    nameIsSet_ = false;
    nodeCapacity_ = 0;
    nodeCapacityIsSet_ = false;
    availableMasterFlavorsIsSet_ = false;
    isSoldOut_ = false;
    isSoldOutIsSet_ = false;
    isSupportMultiAZ_ = false;
    isSupportMultiAZIsSet_ = false;
}

ClusterFlavorSpecification::~ClusterFlavorSpecification() = default;

void ClusterFlavorSpecification::validate()
{
}

web::json::value ClusterFlavorSpecification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nodeCapacityIsSet_) {
        val[utility::conversions::to_string_t("nodeCapacity")] = ModelBase::toJson(nodeCapacity_);
    }
    if(availableMasterFlavorsIsSet_) {
        val[utility::conversions::to_string_t("availableMasterFlavors")] = ModelBase::toJson(availableMasterFlavors_);
    }
    if(isSoldOutIsSet_) {
        val[utility::conversions::to_string_t("isSoldOut")] = ModelBase::toJson(isSoldOut_);
    }
    if(isSupportMultiAZIsSet_) {
        val[utility::conversions::to_string_t("isSupportMultiAZ")] = ModelBase::toJson(isSupportMultiAZ_);
    }

    return val;
}
bool ClusterFlavorSpecification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeCapacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeCapacity"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availableMasterFlavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availableMasterFlavors"));
        if(!fieldValue.is_null())
        {
            std::vector<MasterFlavorSpec> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailableMasterFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSoldOut"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSoldOut"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSoldOut(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSupportMultiAZ"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSupportMultiAZ"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportMultiAZ(refVal);
        }
    }
    return ok;
}


std::string ClusterFlavorSpecification::getName() const
{
    return name_;
}

void ClusterFlavorSpecification::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ClusterFlavorSpecification::nameIsSet() const
{
    return nameIsSet_;
}

void ClusterFlavorSpecification::unsetname()
{
    nameIsSet_ = false;
}

int32_t ClusterFlavorSpecification::getNodeCapacity() const
{
    return nodeCapacity_;
}

void ClusterFlavorSpecification::setNodeCapacity(int32_t value)
{
    nodeCapacity_ = value;
    nodeCapacityIsSet_ = true;
}

bool ClusterFlavorSpecification::nodeCapacityIsSet() const
{
    return nodeCapacityIsSet_;
}

void ClusterFlavorSpecification::unsetnodeCapacity()
{
    nodeCapacityIsSet_ = false;
}

std::vector<MasterFlavorSpec>& ClusterFlavorSpecification::getAvailableMasterFlavors()
{
    return availableMasterFlavors_;
}

void ClusterFlavorSpecification::setAvailableMasterFlavors(const std::vector<MasterFlavorSpec>& value)
{
    availableMasterFlavors_ = value;
    availableMasterFlavorsIsSet_ = true;
}

bool ClusterFlavorSpecification::availableMasterFlavorsIsSet() const
{
    return availableMasterFlavorsIsSet_;
}

void ClusterFlavorSpecification::unsetavailableMasterFlavors()
{
    availableMasterFlavorsIsSet_ = false;
}

bool ClusterFlavorSpecification::isIsSoldOut() const
{
    return isSoldOut_;
}

void ClusterFlavorSpecification::setIsSoldOut(bool value)
{
    isSoldOut_ = value;
    isSoldOutIsSet_ = true;
}

bool ClusterFlavorSpecification::isSoldOutIsSet() const
{
    return isSoldOutIsSet_;
}

void ClusterFlavorSpecification::unsetisSoldOut()
{
    isSoldOutIsSet_ = false;
}

bool ClusterFlavorSpecification::isIsSupportMultiAZ() const
{
    return isSupportMultiAZ_;
}

void ClusterFlavorSpecification::setIsSupportMultiAZ(bool value)
{
    isSupportMultiAZ_ = value;
    isSupportMultiAZIsSet_ = true;
}

bool ClusterFlavorSpecification::isSupportMultiAZIsSet() const
{
    return isSupportMultiAZIsSet_;
}

void ClusterFlavorSpecification::unsetisSupportMultiAZ()
{
    isSupportMultiAZIsSet_ = false;
}

}
}
}
}
}


