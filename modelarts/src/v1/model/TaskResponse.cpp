

#include "huaweicloud/modelarts/v1/model/TaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskResponse::TaskResponse()
{
    role_ = "";
    roleIsSet_ = false;
    algorithmIsSet_ = false;
    taskResourceIsSet_ = false;
    logExportPathIsSet_ = false;
}

TaskResponse::~TaskResponse() = default;

void TaskResponse::validate()
{
}

web::json::value TaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(taskResourceIsSet_) {
        val[utility::conversions::to_string_t("task_resource")] = ModelBase::toJson(taskResource_);
    }
    if(logExportPathIsSet_) {
        val[utility::conversions::to_string_t("log_export_path")] = ModelBase::toJson(logExportPath_);
    }

    return val;
}
bool TaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            TaskResponseAlgorithm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_resource"));
        if(!fieldValue.is_null())
        {
            FlavorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_export_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_export_path"));
        if(!fieldValue.is_null())
        {
            TaskResponse_log_export_path refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogExportPath(refVal);
        }
    }
    return ok;
}


std::string TaskResponse::getRole() const
{
    return role_;
}

void TaskResponse::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool TaskResponse::roleIsSet() const
{
    return roleIsSet_;
}

void TaskResponse::unsetrole()
{
    roleIsSet_ = false;
}

TaskResponseAlgorithm TaskResponse::getAlgorithm() const
{
    return algorithm_;
}

void TaskResponse::setAlgorithm(const TaskResponseAlgorithm& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool TaskResponse::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void TaskResponse::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

FlavorResponse TaskResponse::getTaskResource() const
{
    return taskResource_;
}

void TaskResponse::setTaskResource(const FlavorResponse& value)
{
    taskResource_ = value;
    taskResourceIsSet_ = true;
}

bool TaskResponse::taskResourceIsSet() const
{
    return taskResourceIsSet_;
}

void TaskResponse::unsettaskResource()
{
    taskResourceIsSet_ = false;
}

TaskResponse_log_export_path TaskResponse::getLogExportPath() const
{
    return logExportPath_;
}

void TaskResponse::setLogExportPath(const TaskResponse_log_export_path& value)
{
    logExportPath_ = value;
    logExportPathIsSet_ = true;
}

bool TaskResponse::logExportPathIsSet() const
{
    return logExportPathIsSet_;
}

void TaskResponse::unsetlogExportPath()
{
    logExportPathIsSet_ = false;
}

}
}
}
}
}


