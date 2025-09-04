

#include "huaweicloud/iotdm/v5/model/UpdateInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UpdateInstanceRequest::UpdateInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceRequest::~UpdateInstanceRequest() = default;

void UpdateInstanceRequest::validate()
{
}

web::json::value UpdateInstanceRequest::toJson() const
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
bool UpdateInstanceRequest::fromJson(const web::json::value& val)
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
            UpdateInstance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstance UpdateInstanceRequest::getBody() const
{
    return body_;
}

void UpdateInstanceRequest::setBody(const UpdateInstance& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


