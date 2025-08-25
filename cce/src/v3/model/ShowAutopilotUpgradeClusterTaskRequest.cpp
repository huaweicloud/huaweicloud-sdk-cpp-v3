

#include "huaweicloud/cce/v3/model/ShowAutopilotUpgradeClusterTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotUpgradeClusterTaskRequest::ShowAutopilotUpgradeClusterTaskRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowAutopilotUpgradeClusterTaskRequest::~ShowAutopilotUpgradeClusterTaskRequest() = default;

void ShowAutopilotUpgradeClusterTaskRequest::validate()
{
}

web::json::value ShowAutopilotUpgradeClusterTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowAutopilotUpgradeClusterTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ShowAutopilotUpgradeClusterTaskRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotUpgradeClusterTaskRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotUpgradeClusterTaskRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAutopilotUpgradeClusterTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowAutopilotUpgradeClusterTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowAutopilotUpgradeClusterTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowAutopilotUpgradeClusterTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


