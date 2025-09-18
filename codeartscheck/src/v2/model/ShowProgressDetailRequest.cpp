

#include "huaweicloud/codeartscheck/v2/model/ShowProgressDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowProgressDetailRequest::ShowProgressDetailRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowProgressDetailRequest::~ShowProgressDetailRequest() = default;

void ShowProgressDetailRequest::validate()
{
}

web::json::value ShowProgressDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowProgressDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowProgressDetailRequest::getTaskId() const
{
    return taskId_;
}

void ShowProgressDetailRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowProgressDetailRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowProgressDetailRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


