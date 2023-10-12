

#include "huaweicloud/codeartsdeploy/v2/model/CreateDeployTaskByTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateDeployTaskByTemplateResponse::CreateDeployTaskByTemplateResponse()
{
    taskName_ = "";
    taskNameIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

CreateDeployTaskByTemplateResponse::~CreateDeployTaskByTemplateResponse() = default;

void CreateDeployTaskByTemplateResponse::validate()
{
}

web::json::value CreateDeployTaskByTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool CreateDeployTaskByTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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


std::string CreateDeployTaskByTemplateResponse::getTaskName() const
{
    return taskName_;
}

void CreateDeployTaskByTemplateResponse::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool CreateDeployTaskByTemplateResponse::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void CreateDeployTaskByTemplateResponse::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string CreateDeployTaskByTemplateResponse::getTaskId() const
{
    return taskId_;
}

void CreateDeployTaskByTemplateResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool CreateDeployTaskByTemplateResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void CreateDeployTaskByTemplateResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


