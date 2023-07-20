

#include "huaweicloud/gaussdbfornosql/v3/model/ShowApplicableInstancesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApplicableInstancesResponse::ShowApplicableInstancesResponse()
{
    instancesIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ShowApplicableInstancesResponse::~ShowApplicableInstancesResponse() = default;

void ShowApplicableInstancesResponse::validate()
{
}

web::json::value ShowApplicableInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ShowApplicableInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ApplicableInstanceRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<ApplicableInstanceRsp>& ShowApplicableInstancesResponse::getInstances()
{
    return instances_;
}

void ShowApplicableInstancesResponse::setInstances(const std::vector<ApplicableInstanceRsp>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ShowApplicableInstancesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ShowApplicableInstancesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

int32_t ShowApplicableInstancesResponse::getCount() const
{
    return count_;
}

void ShowApplicableInstancesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowApplicableInstancesResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowApplicableInstancesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


