

#include "huaweicloud/dds/v3/model/ListAppliedInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAppliedInstancesResponse::ListAppliedInstancesResponse()
{
    instancesIsSet_ = false;
}

ListAppliedInstancesResponse::~ListAppliedInstancesResponse() = default;

void ListAppliedInstancesResponse::validate()
{
}

web::json::value ListAppliedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListAppliedInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicableInstancesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::vector<ApplicableInstancesInfo>& ListAppliedInstancesResponse::getInstances()
{
    return instances_;
}

void ListAppliedInstancesResponse::setInstances(const std::vector<ApplicableInstancesInfo>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListAppliedInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListAppliedInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


