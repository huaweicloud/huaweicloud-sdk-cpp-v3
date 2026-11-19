

#include "huaweicloud/gaussdbforopengauss/v3/model/ComputeFlavorGroupDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ComputeFlavorGroupDetail::ComputeFlavorGroupDetail()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    computeFlavorsIsSet_ = false;
}

ComputeFlavorGroupDetail::~ComputeFlavorGroupDetail() = default;

void ComputeFlavorGroupDetail::validate()
{
}

web::json::value ComputeFlavorGroupDetail::toJson() const
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
bool ComputeFlavorGroupDetail::fromJson(const web::json::value& val)
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
            std::vector<ComputeFlavorItemDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavors(refVal);
        }
    }
    return ok;
}


std::string ComputeFlavorGroupDetail::getGroupType() const
{
    return groupType_;
}

void ComputeFlavorGroupDetail::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ComputeFlavorGroupDetail::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ComputeFlavorGroupDetail::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<ComputeFlavorItemDetail>& ComputeFlavorGroupDetail::getComputeFlavors()
{
    return computeFlavors_;
}

void ComputeFlavorGroupDetail::setComputeFlavors(const std::vector<ComputeFlavorItemDetail>& value)
{
    computeFlavors_ = value;
    computeFlavorsIsSet_ = true;
}

bool ComputeFlavorGroupDetail::computeFlavorsIsSet() const
{
    return computeFlavorsIsSet_;
}

void ComputeFlavorGroupDetail::unsetcomputeFlavors()
{
    computeFlavorsIsSet_ = false;
}

}
}
}
}
}


