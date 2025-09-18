

#include "huaweicloud/codeartscheck/v2/model/UpdateTaskRulesetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateTaskRulesetRequest::UpdateTaskRulesetRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTaskRulesetRequest::~UpdateTaskRulesetRequest() = default;

void UpdateTaskRulesetRequest::validate()
{
}

web::json::value UpdateTaskRulesetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTaskRulesetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateTaskRulesetItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTaskRulesetRequest::getTaskId() const
{
    return taskId_;
}

void UpdateTaskRulesetRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateTaskRulesetRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateTaskRulesetRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::vector<UpdateTaskRulesetItem>& UpdateTaskRulesetRequest::getBody()
{
    return body_;
}

void UpdateTaskRulesetRequest::setBody(const std::vector<UpdateTaskRulesetItem>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTaskRulesetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTaskRulesetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


