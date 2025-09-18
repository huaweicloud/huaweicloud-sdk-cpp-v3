

#include "huaweicloud/codeartscheck/v2/model/ShowTaskDefectsStatisticRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskDefectsStatisticRequest::ShowTaskDefectsStatisticRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTaskDefectsStatisticRequest::~ShowTaskDefectsStatisticRequest() = default;

void ShowTaskDefectsStatisticRequest::validate()
{
}

web::json::value ShowTaskDefectsStatisticRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowTaskDefectsStatisticRequest::fromJson(const web::json::value& val)
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


std::string ShowTaskDefectsStatisticRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskDefectsStatisticRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskDefectsStatisticRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskDefectsStatisticRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


