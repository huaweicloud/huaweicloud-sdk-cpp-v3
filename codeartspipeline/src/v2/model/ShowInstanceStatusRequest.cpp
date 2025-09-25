

#include "huaweicloud/codeartspipeline/v2/model/ShowInstanceStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowInstanceStatusRequest::ShowInstanceStatusRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowInstanceStatusRequest::~ShowInstanceStatusRequest() = default;

void ShowInstanceStatusRequest::validate()
{
}

web::json::value ShowInstanceStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowInstanceStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceStatusRequest::getTaskId() const
{
    return taskId_;
}

void ShowInstanceStatusRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowInstanceStatusRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowInstanceStatusRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


