

#include "huaweicloud/rds/v3/model/SearchQueryScaleFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SearchQueryScaleFlavorsResponse::SearchQueryScaleFlavorsResponse()
{
    computeFlavorGroupsIsSet_ = false;
}

SearchQueryScaleFlavorsResponse::~SearchQueryScaleFlavorsResponse() = default;

void SearchQueryScaleFlavorsResponse::validate()
{
}

web::json::value SearchQueryScaleFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(computeFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("compute_flavor_groups")] = ModelBase::toJson(computeFlavorGroups_);
    }

    return val;
}

bool SearchQueryScaleFlavorsResponse::fromJson(const web::json::value& val)
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

std::vector<Computes>& SearchQueryScaleFlavorsResponse::getComputeFlavorGroups()
{
    return computeFlavorGroups_;
}

void SearchQueryScaleFlavorsResponse::setComputeFlavorGroups(const std::vector<Computes>& value)
{
    computeFlavorGroups_ = value;
    computeFlavorGroupsIsSet_ = true;
}

bool SearchQueryScaleFlavorsResponse::computeFlavorGroupsIsSet() const
{
    return computeFlavorGroupsIsSet_;
}

void SearchQueryScaleFlavorsResponse::unsetcomputeFlavorGroups()
{
    computeFlavorGroupsIsSet_ = false;
}

}
}
}
}
}


