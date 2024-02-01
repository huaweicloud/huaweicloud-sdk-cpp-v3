

#include "huaweicloud/rds/v3/model/InstancesWeight.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstancesWeight::InstancesWeight()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
}

InstancesWeight::~InstancesWeight() = default;

void InstancesWeight::validate()
{
}

web::json::value InstancesWeight::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }

    return val;
}
bool InstancesWeight::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    return ok;
}


std::string InstancesWeight::getInstanceId() const
{
    return instanceId_;
}

void InstancesWeight::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstancesWeight::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstancesWeight::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t InstancesWeight::getWeight() const
{
    return weight_;
}

void InstancesWeight::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool InstancesWeight::weightIsSet() const
{
    return weightIsSet_;
}

void InstancesWeight::unsetweight()
{
    weightIsSet_ = false;
}

}
}
}
}
}


