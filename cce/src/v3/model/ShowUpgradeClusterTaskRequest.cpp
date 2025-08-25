

#include "huaweicloud/cce/v3/model/ShowUpgradeClusterTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowUpgradeClusterTaskRequest::ShowUpgradeClusterTaskRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowUpgradeClusterTaskRequest::~ShowUpgradeClusterTaskRequest() = default;

void ShowUpgradeClusterTaskRequest::validate()
{
}

web::json::value ShowUpgradeClusterTaskRequest::toJson() const
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
bool ShowUpgradeClusterTaskRequest::fromJson(const web::json::value& val)
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


std::string ShowUpgradeClusterTaskRequest::getClusterId() const
{
    return clusterId_;
}

void ShowUpgradeClusterTaskRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowUpgradeClusterTaskRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowUpgradeClusterTaskRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowUpgradeClusterTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowUpgradeClusterTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowUpgradeClusterTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowUpgradeClusterTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


