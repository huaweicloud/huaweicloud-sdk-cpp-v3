

#include "huaweicloud/gaussdbforopengauss/v3/model/InstancesListResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstancesListResult::InstancesListResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
}

InstancesListResult::~InstancesListResult() = default;

void InstancesListResult::validate()
{
}

web::json::value InstancesListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }

    return val;
}

bool InstancesListResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    return ok;
}

std::string InstancesListResult::getInstanceId() const
{
    return instanceId_;
}

void InstancesListResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstancesListResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstancesListResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string InstancesListResult::getInstanceName() const
{
    return instanceName_;
}

void InstancesListResult::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool InstancesListResult::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void InstancesListResult::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

}
}
}
}
}


