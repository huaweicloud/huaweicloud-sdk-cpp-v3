

#include "huaweicloud/antiddos/v1/model/ShowNewTaskStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ShowNewTaskStatusResponse::ShowNewTaskStatusResponse()
{
    taskStatus_ = "";
    taskStatusIsSet_ = false;
    taskMsg_ = "";
    taskMsgIsSet_ = false;
}

ShowNewTaskStatusResponse::~ShowNewTaskStatusResponse() = default;

void ShowNewTaskStatusResponse::validate()
{
}

web::json::value ShowNewTaskStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskStatusIsSet_) {
        val[utility::conversions::to_string_t("task_status")] = ModelBase::toJson(taskStatus_);
    }
    if(taskMsgIsSet_) {
        val[utility::conversions::to_string_t("task_msg")] = ModelBase::toJson(taskMsg_);
    }

    return val;
}
bool ShowNewTaskStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskMsg(refVal);
        }
    }
    return ok;
}


std::string ShowNewTaskStatusResponse::getTaskStatus() const
{
    return taskStatus_;
}

void ShowNewTaskStatusResponse::setTaskStatus(const std::string& value)
{
    taskStatus_ = value;
    taskStatusIsSet_ = true;
}

bool ShowNewTaskStatusResponse::taskStatusIsSet() const
{
    return taskStatusIsSet_;
}

void ShowNewTaskStatusResponse::unsettaskStatus()
{
    taskStatusIsSet_ = false;
}

std::string ShowNewTaskStatusResponse::getTaskMsg() const
{
    return taskMsg_;
}

void ShowNewTaskStatusResponse::setTaskMsg(const std::string& value)
{
    taskMsg_ = value;
    taskMsgIsSet_ = true;
}

bool ShowNewTaskStatusResponse::taskMsgIsSet() const
{
    return taskMsgIsSet_;
}

void ShowNewTaskStatusResponse::unsettaskMsg()
{
    taskMsgIsSet_ = false;
}

}
}
}
}
}


