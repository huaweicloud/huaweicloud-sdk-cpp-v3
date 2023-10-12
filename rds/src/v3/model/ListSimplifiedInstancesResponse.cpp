

#include "huaweicloud/rds/v3/model/ListSimplifiedInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSimplifiedInstancesResponse::ListSimplifiedInstancesResponse()
{
    instancesIsSet_ = false;
}

ListSimplifiedInstancesResponse::~ListSimplifiedInstancesResponse() = default;

void ListSimplifiedInstancesResponse::validate()
{
}

web::json::value ListSimplifiedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListSimplifiedInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<SimplifiedInstanceEntry> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<SimplifiedInstanceEntry>& ListSimplifiedInstancesResponse::getInstances()
{
    return instances_;
}

void ListSimplifiedInstancesResponse::setInstances(const std::vector<SimplifiedInstanceEntry>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListSimplifiedInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListSimplifiedInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


