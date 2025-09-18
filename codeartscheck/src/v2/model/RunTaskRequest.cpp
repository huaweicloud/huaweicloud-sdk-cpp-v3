

#include "huaweicloud/codeartscheck/v2/model/RunTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RunTaskRequest::RunTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

RunTaskRequest::~RunTaskRequest() = default;

void RunTaskRequest::validate()
{
}

web::json::value RunTaskRequest::toJson() const
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
bool RunTaskRequest::fromJson(const web::json::value& val)
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
            RunRequestV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RunTaskRequest::getTaskId() const
{
    return taskId_;
}

void RunTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RunTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RunTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

RunRequestV2 RunTaskRequest::getBody() const
{
    return body_;
}

void RunTaskRequest::setBody(const RunRequestV2& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RunTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RunTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


