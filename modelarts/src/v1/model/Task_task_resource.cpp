

#include "huaweicloud/modelarts/v1/model/Task_task_resource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task_task_resource::Task_task_resource()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    nodeCount_ = 0;
    nodeCountIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
}

Task_task_resource::~Task_task_resource() = default;

void Task_task_resource::validate()
{
}

web::json::value Task_task_resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(nodeCountIsSet_) {
        val[utility::conversions::to_string_t("node_count")] = ModelBase::toJson(nodeCount_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }

    return val;
}
bool Task_task_resource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    return ok;
}


std::string Task_task_resource::getFlavorId() const
{
    return flavorId_;
}

void Task_task_resource::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool Task_task_resource::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void Task_task_resource::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

int32_t Task_task_resource::getNodeCount() const
{
    return nodeCount_;
}

void Task_task_resource::setNodeCount(int32_t value)
{
    nodeCount_ = value;
    nodeCountIsSet_ = true;
}

bool Task_task_resource::nodeCountIsSet() const
{
    return nodeCountIsSet_;
}

void Task_task_resource::unsetnodeCount()
{
    nodeCountIsSet_ = false;
}

std::string Task_task_resource::getPoolId() const
{
    return poolId_;
}

void Task_task_resource::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool Task_task_resource::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void Task_task_resource::unsetpoolId()
{
    poolIdIsSet_ = false;
}

}
}
}
}
}


