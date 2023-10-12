

#include "huaweicloud/codeartsdeploy/v2/model/DeleteDeployTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeleteDeployTaskResponse::DeleteDeployTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteDeployTaskResponse::~DeleteDeployTaskResponse() = default;

void DeleteDeployTaskResponse::validate()
{
}

web::json::value DeleteDeployTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteDeployTaskResponse::fromJson(const web::json::value& val)
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


std::string DeleteDeployTaskResponse::getTaskId() const
{
    return taskId_;
}

void DeleteDeployTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteDeployTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteDeployTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


