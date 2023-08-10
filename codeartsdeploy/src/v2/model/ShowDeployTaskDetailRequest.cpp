

#include "huaweicloud/codeartsdeploy/v2/model/ShowDeployTaskDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowDeployTaskDetailRequest::ShowDeployTaskDetailRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowDeployTaskDetailRequest::~ShowDeployTaskDetailRequest() = default;

void ShowDeployTaskDetailRequest::validate()
{
}

web::json::value ShowDeployTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}

bool ShowDeployTaskDetailRequest::fromJson(const web::json::value& val)
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

std::string ShowDeployTaskDetailRequest::getTaskId() const
{
    return taskId_;
}

void ShowDeployTaskDetailRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowDeployTaskDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowDeployTaskDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


