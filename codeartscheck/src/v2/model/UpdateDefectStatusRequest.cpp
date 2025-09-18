

#include "huaweicloud/codeartscheck/v2/model/UpdateDefectStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateDefectStatusRequest::UpdateDefectStatusRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDefectStatusRequest::~UpdateDefectStatusRequest() = default;

void UpdateDefectStatusRequest::validate()
{
}

web::json::value UpdateDefectStatusRequest::toJson() const
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
bool UpdateDefectStatusRequest::fromJson(const web::json::value& val)
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
            UpdateDefectRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDefectStatusRequest::getTaskId() const
{
    return taskId_;
}

void UpdateDefectStatusRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateDefectStatusRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateDefectStatusRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

UpdateDefectRequestBody UpdateDefectStatusRequest::getBody() const
{
    return body_;
}

void UpdateDefectStatusRequest::setBody(const UpdateDefectRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDefectStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDefectStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


