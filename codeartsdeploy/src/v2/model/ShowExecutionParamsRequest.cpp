

#include "huaweicloud/codeartsdeploy/v2/model/ShowExecutionParamsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ShowExecutionParamsRequest::ShowExecutionParamsRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
}

ShowExecutionParamsRequest::~ShowExecutionParamsRequest() = default;

void ShowExecutionParamsRequest::validate()
{
}

web::json::value ShowExecutionParamsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }

    return val;
}
bool ShowExecutionParamsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    return ok;
}


std::string ShowExecutionParamsRequest::getTaskId() const
{
    return taskId_;
}

void ShowExecutionParamsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowExecutionParamsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowExecutionParamsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowExecutionParamsRequest::getRecordId() const
{
    return recordId_;
}

void ShowExecutionParamsRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool ShowExecutionParamsRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void ShowExecutionParamsRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

}
}
}
}
}


