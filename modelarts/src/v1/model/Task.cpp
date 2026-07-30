

#include "huaweicloud/modelarts/v1/model/Task.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Task::Task()
{
    role_ = "";
    roleIsSet_ = false;
    algorithmIsSet_ = false;
    taskResourceIsSet_ = false;
    logExportPathIsSet_ = false;
}

Task::~Task() = default;

void Task::validate()
{
}

web::json::value Task::toJson() const
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
bool Task::fromJson(const web::json::value& val)
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
            Task_algorithm refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_resource"));
        if(!fieldValue.is_null())
        {
            Task_task_resource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_export_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_export_path"));
        if(!fieldValue.is_null())
        {
            Task_log_export_path refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogExportPath(refVal);
        }
    }
    return ok;
}


std::string Task::getRole() const
{
    return role_;
}

void Task::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool Task::roleIsSet() const
{
    return roleIsSet_;
}

void Task::unsetrole()
{
    roleIsSet_ = false;
}

Task_algorithm Task::getAlgorithm() const
{
    return algorithm_;
}

void Task::setAlgorithm(const Task_algorithm& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool Task::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void Task::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

Task_task_resource Task::getTaskResource() const
{
    return taskResource_;
}

void Task::setTaskResource(const Task_task_resource& value)
{
    taskResource_ = value;
    taskResourceIsSet_ = true;
}

bool Task::taskResourceIsSet() const
{
    return taskResourceIsSet_;
}

void Task::unsettaskResource()
{
    taskResourceIsSet_ = false;
}

Task_log_export_path Task::getLogExportPath() const
{
    return logExportPath_;
}

void Task::setLogExportPath(const Task_log_export_path& value)
{
    logExportPath_ = value;
    logExportPathIsSet_ = true;
}

bool Task::logExportPathIsSet() const
{
    return logExportPathIsSet_;
}

void Task::unsetlogExportPath()
{
    logExportPathIsSet_ = false;
}

}
}
}
}
}


