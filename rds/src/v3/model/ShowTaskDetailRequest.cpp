

#include "huaweicloud/rds/v3/model/ShowTaskDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTaskDetailRequest::ShowTaskDetailRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowTaskDetailRequest::~ShowTaskDetailRequest() = default;

void ShowTaskDetailRequest::validate()
{
}

web::json::value ShowTaskDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowTaskDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TaskDetailRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowTaskDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTaskDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaskDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaskDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

TaskDetailRequest ShowTaskDetailRequest::getBody() const
{
    return body_;
}

void ShowTaskDetailRequest::setBody(const TaskDetailRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowTaskDetailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowTaskDetailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


