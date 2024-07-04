

#include "huaweicloud/rds/v3/model/ComputeFlavorGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ComputeFlavorGroup::ComputeFlavorGroup()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    computeFlavorsIsSet_ = false;
}

ComputeFlavorGroup::~ComputeFlavorGroup() = default;

void ComputeFlavorGroup::validate()
{
}

web::json::value ComputeFlavorGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(computeFlavorsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavors")] = ModelBase::toJson(computeFlavors_);
    }

    return val;
}
bool ComputeFlavorGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compute_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_flavors"));
        if(!fieldValue.is_null())
        {
            ComputeFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavors(refVal);
        }
    }
    return ok;
}


std::string ComputeFlavorGroup::getGroupType() const
{
    return groupType_;
}

void ComputeFlavorGroup::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ComputeFlavorGroup::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ComputeFlavorGroup::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

ComputeFlavor ComputeFlavorGroup::getComputeFlavors() const
{
    return computeFlavors_;
}

void ComputeFlavorGroup::setComputeFlavors(const ComputeFlavor& value)
{
    computeFlavors_ = value;
    computeFlavorsIsSet_ = true;
}

bool ComputeFlavorGroup::computeFlavorsIsSet() const
{
    return computeFlavorsIsSet_;
}

void ComputeFlavorGroup::unsetcomputeFlavors()
{
    computeFlavorsIsSet_ = false;
}

}
}
}
}
}


