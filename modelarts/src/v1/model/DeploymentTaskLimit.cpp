

#include "huaweicloud/modelarts/v1/model/DeploymentTaskLimit.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeploymentTaskLimit::DeploymentTaskLimit()
{
    maxConcurrentTask_ = 0;
    maxConcurrentTaskIsSet_ = false;
}

DeploymentTaskLimit::~DeploymentTaskLimit() = default;

void DeploymentTaskLimit::validate()
{
}

web::json::value DeploymentTaskLimit::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxConcurrentTaskIsSet_) {
        val[utility::conversions::to_string_t("max_concurrent_task")] = ModelBase::toJson(maxConcurrentTask_);
    }

    return val;
}
bool DeploymentTaskLimit::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("max_concurrent_task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrent_task"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrentTask(refVal);
        }
    }
    return ok;
}


int32_t DeploymentTaskLimit::getMaxConcurrentTask() const
{
    return maxConcurrentTask_;
}

void DeploymentTaskLimit::setMaxConcurrentTask(int32_t value)
{
    maxConcurrentTask_ = value;
    maxConcurrentTaskIsSet_ = true;
}

bool DeploymentTaskLimit::maxConcurrentTaskIsSet() const
{
    return maxConcurrentTaskIsSet_;
}

void DeploymentTaskLimit::unsetmaxConcurrentTask()
{
    maxConcurrentTaskIsSet_ = false;
}

}
}
}
}
}


