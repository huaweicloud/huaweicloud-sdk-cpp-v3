

#include "huaweicloud/dbss/v1/model/ShowInstanceMonitorInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowInstanceMonitorInfoRequest::ShowInstanceMonitorInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowInstanceMonitorInfoRequest::~ShowInstanceMonitorInfoRequest() = default;

void ShowInstanceMonitorInfoRequest::validate()
{
}

web::json::value ShowInstanceMonitorInfoRequest::toJson() const
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
bool ShowInstanceMonitorInfoRequest::fromJson(const web::json::value& val)
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
            MonitorInfoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowInstanceMonitorInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceMonitorInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceMonitorInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceMonitorInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MonitorInfoRequest ShowInstanceMonitorInfoRequest::getBody() const
{
    return body_;
}

void ShowInstanceMonitorInfoRequest::setBody(const MonitorInfoRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowInstanceMonitorInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowInstanceMonitorInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


