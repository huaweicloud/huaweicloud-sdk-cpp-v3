

#include "huaweicloud/gaussdbforopengauss/v3/model/FlavorCategoryDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FlavorCategoryDetail::FlavorCategoryDetail()
{
    computeFlavorGroupsIsSet_ = false;
    volumeFlavorsIsSet_ = false;
    decServiceFlavorsIsSet_ = false;
}

FlavorCategoryDetail::~FlavorCategoryDetail() = default;

void FlavorCategoryDetail::validate()
{
}

web::json::value FlavorCategoryDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(computeFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavor_groups")] = ModelBase::toJson(computeFlavorGroups_);
    }
    if(volumeFlavorsIsSet_) {
        val[utility::conversions::to_string_t("volume_flavors")] = ModelBase::toJson(volumeFlavors_);
    }
    if(decServiceFlavorsIsSet_) {
        val[utility::conversions::to_string_t("dec_service_flavors")] = ModelBase::toJson(decServiceFlavors_);
    }

    return val;
}
bool FlavorCategoryDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compute_flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ComputeFlavorGroupDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavorGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeFlavorItemDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dec_service_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dec_service_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<DecServiceFlavorItemDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDecServiceFlavors(refVal);
        }
    }
    return ok;
}


std::vector<ComputeFlavorGroupDetail>& FlavorCategoryDetail::getComputeFlavorGroups()
{
    return computeFlavorGroups_;
}

void FlavorCategoryDetail::setComputeFlavorGroups(const std::vector<ComputeFlavorGroupDetail>& value)
{
    computeFlavorGroups_ = value;
    computeFlavorGroupsIsSet_ = true;
}

bool FlavorCategoryDetail::computeFlavorGroupsIsSet() const
{
    return computeFlavorGroupsIsSet_;
}

void FlavorCategoryDetail::unsetcomputeFlavorGroups()
{
    computeFlavorGroupsIsSet_ = false;
}

std::vector<VolumeFlavorItemDetail>& FlavorCategoryDetail::getVolumeFlavors()
{
    return volumeFlavors_;
}

void FlavorCategoryDetail::setVolumeFlavors(const std::vector<VolumeFlavorItemDetail>& value)
{
    volumeFlavors_ = value;
    volumeFlavorsIsSet_ = true;
}

bool FlavorCategoryDetail::volumeFlavorsIsSet() const
{
    return volumeFlavorsIsSet_;
}

void FlavorCategoryDetail::unsetvolumeFlavors()
{
    volumeFlavorsIsSet_ = false;
}

std::vector<DecServiceFlavorItemDetail>& FlavorCategoryDetail::getDecServiceFlavors()
{
    return decServiceFlavors_;
}

void FlavorCategoryDetail::setDecServiceFlavors(const std::vector<DecServiceFlavorItemDetail>& value)
{
    decServiceFlavors_ = value;
    decServiceFlavorsIsSet_ = true;
}

bool FlavorCategoryDetail::decServiceFlavorsIsSet() const
{
    return decServiceFlavorsIsSet_;
}

void FlavorCategoryDetail::unsetdecServiceFlavors()
{
    decServiceFlavorsIsSet_ = false;
}

}
}
}
}
}


