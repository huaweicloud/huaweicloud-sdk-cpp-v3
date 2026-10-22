

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceGroupsCapacityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceGroupsCapacityResponse::ListHyperinstanceGroupsCapacityResponse()
{
    capacitiesIsSet_ = false;
}

ListHyperinstanceGroupsCapacityResponse::~ListHyperinstanceGroupsCapacityResponse() = default;

void ListHyperinstanceGroupsCapacityResponse::validate()
{
}

web::json::value ListHyperinstanceGroupsCapacityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(capacitiesIsSet_) {
        val[utility::conversions::to_string_t("capacities")] = ModelBase::toJson(capacities_);
    }

    return val;
}
bool ListHyperinstanceGroupsCapacityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("capacities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacities"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerHpsGroupCapacity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacities(refVal);
        }
    }
    return ok;
}


std::vector<ServerHpsGroupCapacity>& ListHyperinstanceGroupsCapacityResponse::getCapacities()
{
    return capacities_;
}

void ListHyperinstanceGroupsCapacityResponse::setCapacities(const std::vector<ServerHpsGroupCapacity>& value)
{
    capacities_ = value;
    capacitiesIsSet_ = true;
}

bool ListHyperinstanceGroupsCapacityResponse::capacitiesIsSet() const
{
    return capacitiesIsSet_;
}

void ListHyperinstanceGroupsCapacityResponse::unsetcapacities()
{
    capacitiesIsSet_ = false;
}

}
}
}
}
}


