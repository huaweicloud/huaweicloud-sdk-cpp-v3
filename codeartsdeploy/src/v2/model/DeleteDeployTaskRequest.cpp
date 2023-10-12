

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeployTaskRequest::DeleteDeployTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteDeployTaskRequest::~DeleteDeployTaskRequest() = default;

void DeleteDeployTaskRequest::validate()
{
}

web::json::value DeleteDeployTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteDeployTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string DeleteDeployTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteDeployTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteDeployTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteDeployTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


