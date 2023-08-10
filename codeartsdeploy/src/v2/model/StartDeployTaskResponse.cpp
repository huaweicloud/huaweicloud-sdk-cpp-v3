

#include "huaweicloud/codeartsdeploy/v2/model/StartDeployTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StartDeployTaskResponse::StartDeployTaskResponse()
{
    id_ = "";
    idIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    appComponentListIsSet_ = false;
}

StartDeployTaskResponse::~StartDeployTaskResponse() = default;

void StartDeployTaskResponse::validate()
{
}

web::json::value StartDeployTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(appComponentListIsSet_) {
        val[utility::conversions::to_string_t("app_component_list")] = ModelBase::toJson(appComponentList_);
    }

    return val;
}

bool StartDeployTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_component_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_component_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AppComponentDao> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppComponentList(refVal);
        }
    }
    return ok;
}

std::string StartDeployTaskResponse::getId() const
{
    return id_;
}

void StartDeployTaskResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartDeployTaskResponse::idIsSet() const
{
    return idIsSet_;
}

void StartDeployTaskResponse::unsetid()
{
    idIsSet_ = false;
}

std::string StartDeployTaskResponse::getTaskId() const
{
    return taskId_;
}

void StartDeployTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StartDeployTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StartDeployTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string StartDeployTaskResponse::getJobName() const
{
    return jobName_;
}

void StartDeployTaskResponse::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool StartDeployTaskResponse::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void StartDeployTaskResponse::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::vector<AppComponentDao>& StartDeployTaskResponse::getAppComponentList()
{
    return appComponentList_;
}

void StartDeployTaskResponse::setAppComponentList(const std::vector<AppComponentDao>& value)
{
    appComponentList_ = value;
    appComponentListIsSet_ = true;
}

bool StartDeployTaskResponse::appComponentListIsSet() const
{
    return appComponentListIsSet_;
}

void StartDeployTaskResponse::unsetappComponentList()
{
    appComponentListIsSet_ = false;
}

}
}
}
}
}


