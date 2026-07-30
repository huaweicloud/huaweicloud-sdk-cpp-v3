

#include "huaweicloud/modelarts/v1/model/ListHyperinstanceClustersCapacityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListHyperinstanceClustersCapacityResponse::ListHyperinstanceClustersCapacityResponse()
{
    capacitiesIsSet_ = false;
}

ListHyperinstanceClustersCapacityResponse::~ListHyperinstanceClustersCapacityResponse() = default;

void ListHyperinstanceClustersCapacityResponse::validate()
{
}

web::json::value ListHyperinstanceClustersCapacityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(capacitiesIsSet_) {
        val[utility::conversions::to_string_t("capacities")] = ModelBase::toJson(capacities_);
    }

    return val;
}
bool ListHyperinstanceClustersCapacityResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("capacities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacities"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerHpsClusterCapacity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacities(refVal);
        }
    }
    return ok;
}


std::vector<ServerHpsClusterCapacity>& ListHyperinstanceClustersCapacityResponse::getCapacities()
{
    return capacities_;
}

void ListHyperinstanceClustersCapacityResponse::setCapacities(const std::vector<ServerHpsClusterCapacity>& value)
{
    capacities_ = value;
    capacitiesIsSet_ = true;
}

bool ListHyperinstanceClustersCapacityResponse::capacitiesIsSet() const
{
    return capacitiesIsSet_;
}

void ListHyperinstanceClustersCapacityResponse::unsetcapacities()
{
    capacitiesIsSet_ = false;
}

}
}
}
}
}


