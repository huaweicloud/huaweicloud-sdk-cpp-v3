

#include "huaweicloud/rds/v3/model/SearchQueryScaleComputeFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SearchQueryScaleComputeFlavorsResponse::SearchQueryScaleComputeFlavorsResponse()
{
    computeFlavorGroupsIsSet_ = false;
}

SearchQueryScaleComputeFlavorsResponse::~SearchQueryScaleComputeFlavorsResponse() = default;

void SearchQueryScaleComputeFlavorsResponse::validate()
{
}

web::json::value SearchQueryScaleComputeFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(computeFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavor_groups")] = ModelBase::toJson(computeFlavorGroups_);
    }

    return val;
}
bool SearchQueryScaleComputeFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compute_flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compute_flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<Computes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComputeFlavorGroups(refVal);
        }
    }
    return ok;
}


std::vector<Computes>& SearchQueryScaleComputeFlavorsResponse::getComputeFlavorGroups()
{
    return computeFlavorGroups_;
}

void SearchQueryScaleComputeFlavorsResponse::setComputeFlavorGroups(const std::vector<Computes>& value)
{
    computeFlavorGroups_ = value;
    computeFlavorGroupsIsSet_ = true;
}

bool SearchQueryScaleComputeFlavorsResponse::computeFlavorGroupsIsSet() const
{
    return computeFlavorGroupsIsSet_;
}

void SearchQueryScaleComputeFlavorsResponse::unsetcomputeFlavorGroups()
{
    computeFlavorGroupsIsSet_ = false;
}

}
}
}
}
}


