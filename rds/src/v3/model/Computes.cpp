

#include "huaweicloud/rds/v3/model/Computes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Computes::Computes()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    computeFlavorsIsSet_ = false;
}

Computes::~Computes() = default;

void Computes::validate()
{
}

web::json::value Computes::toJson() const
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
bool Computes::fromJson(const web::json::value& val)
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
            std::vector<ScaleFlavors> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavors(refVal);
        }
    }
    return ok;
}


std::string Computes::getGroupType() const
{
    return groupType_;
}

void Computes::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool Computes::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void Computes::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<ScaleFlavors>& Computes::getComputeFlavors()
{
    return computeFlavors_;
}

void Computes::setComputeFlavors(const std::vector<ScaleFlavors>& value)
{
    computeFlavors_ = value;
    computeFlavorsIsSet_ = true;
}

bool Computes::computeFlavorsIsSet() const
{
    return computeFlavorsIsSet_;
}

void Computes::unsetcomputeFlavors()
{
    computeFlavorsIsSet_ = false;
}

}
}
}
}
}


