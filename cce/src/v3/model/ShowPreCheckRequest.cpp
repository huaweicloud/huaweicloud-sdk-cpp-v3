

#include "huaweicloud/cce/v3/model/ShowPreCheckRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPreCheckRequest::ShowPreCheckRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowPreCheckRequest::~ShowPreCheckRequest() = default;

void ShowPreCheckRequest::validate()
{
}

web::json::value ShowPreCheckRequest::toJson() const
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
bool ShowPreCheckRequest::fromJson(const web::json::value& val)
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


std::string ShowPreCheckRequest::getClusterId() const
{
    return clusterId_;
}

void ShowPreCheckRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowPreCheckRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowPreCheckRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowPreCheckRequest::getTaskId() const
{
    return taskId_;
}

void ShowPreCheckRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowPreCheckRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowPreCheckRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


