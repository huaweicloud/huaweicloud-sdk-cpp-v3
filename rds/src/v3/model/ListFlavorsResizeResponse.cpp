

#include "huaweicloud/rds/v3/model/ListFlavorsResizeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListFlavorsResizeResponse::ListFlavorsResizeResponse()
{
    flavorGroupsIsSet_ = false;
}

ListFlavorsResizeResponse::~ListFlavorsResizeResponse() = default;

void ListFlavorsResizeResponse::validate()
{
}

web::json::value ListFlavorsResizeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("flavor_groups")] = ModelBase::toJson(flavorGroups_);
    }

    return val;
}
bool ListFlavorsResizeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ComputeFlavorGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorGroups(refVal);
        }
    }
    return ok;
}


std::vector<ComputeFlavorGroup>& ListFlavorsResizeResponse::getFlavorGroups()
{
    return flavorGroups_;
}

void ListFlavorsResizeResponse::setFlavorGroups(const std::vector<ComputeFlavorGroup>& value)
{
    flavorGroups_ = value;
    flavorGroupsIsSet_ = true;
}

bool ListFlavorsResizeResponse::flavorGroupsIsSet() const
{
    return flavorGroupsIsSet_;
}

void ListFlavorsResizeResponse::unsetflavorGroups()
{
    flavorGroupsIsSet_ = false;
}

}
}
}
}
}


