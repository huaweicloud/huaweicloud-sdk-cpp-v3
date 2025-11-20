

#include "huaweicloud/cce/v3/model/ListAddonPrecheckTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonPrecheckTasksRequest::ListAddonPrecheckTasksRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    addonInstanceId_ = "";
    addonInstanceIdIsSet_ = false;
}

ListAddonPrecheckTasksRequest::~ListAddonPrecheckTasksRequest() = default;

void ListAddonPrecheckTasksRequest::validate()
{
}

web::json::value ListAddonPrecheckTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(addonInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("addon_instance_id")] = ModelBase::toJson(addonInstanceId_);
    }

    return val;
}
bool ListAddonPrecheckTasksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("addon_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addon_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListAddonPrecheckTasksRequest::getClusterId() const
{
    return clusterId_;
}

void ListAddonPrecheckTasksRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAddonPrecheckTasksRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAddonPrecheckTasksRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListAddonPrecheckTasksRequest::getType() const
{
    return type_;
}

void ListAddonPrecheckTasksRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAddonPrecheckTasksRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAddonPrecheckTasksRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAddonPrecheckTasksRequest::getTaskId() const
{
    return taskId_;
}

void ListAddonPrecheckTasksRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListAddonPrecheckTasksRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListAddonPrecheckTasksRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ListAddonPrecheckTasksRequest::getAddonInstanceId() const
{
    return addonInstanceId_;
}

void ListAddonPrecheckTasksRequest::setAddonInstanceId(const std::string& value)
{
    addonInstanceId_ = value;
    addonInstanceIdIsSet_ = true;
}

bool ListAddonPrecheckTasksRequest::addonInstanceIdIsSet() const
{
    return addonInstanceIdIsSet_;
}

void ListAddonPrecheckTasksRequest::unsetaddonInstanceId()
{
    addonInstanceIdIsSet_ = false;
}

}
}
}
}
}


