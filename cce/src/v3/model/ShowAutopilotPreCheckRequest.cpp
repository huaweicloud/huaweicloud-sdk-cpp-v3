

#include "huaweicloud/cce/v3/model/ShowAutopilotPreCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotPreCheckRequest::ShowAutopilotPreCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowAutopilotPreCheckRequest::~ShowAutopilotPreCheckRequest() = default;

void ShowAutopilotPreCheckRequest::validate()
{
}

web::json::value ShowAutopilotPreCheckRequest::toJson() const
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
bool ShowAutopilotPreCheckRequest::fromJson(const web::json::value& val)
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


std::string ShowAutopilotPreCheckRequest::getClusterId() const
{
    return clusterId_;
}

void ShowAutopilotPreCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowAutopilotPreCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowAutopilotPreCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowAutopilotPreCheckRequest::getTaskId() const
{
    return taskId_;
}

void ShowAutopilotPreCheckRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowAutopilotPreCheckRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowAutopilotPreCheckRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


