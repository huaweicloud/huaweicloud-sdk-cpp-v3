

#include "huaweicloud/rds/v3/model/SetInstancesNewDbShrinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetInstancesNewDbShrinkRequest::SetInstancesNewDbShrinkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetInstancesNewDbShrinkRequest::~SetInstancesNewDbShrinkRequest() = default;

void SetInstancesNewDbShrinkRequest::validate()
{
}

web::json::value SetInstancesNewDbShrinkRequest::toJson() const
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
bool SetInstancesNewDbShrinkRequest::fromJson(const web::json::value& val)
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
            UpdateDBShrinkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetInstancesNewDbShrinkRequest::getInstanceId() const
{
    return instanceId_;
}

void SetInstancesNewDbShrinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetInstancesNewDbShrinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetInstancesNewDbShrinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDBShrinkRequestBody SetInstancesNewDbShrinkRequest::getBody() const
{
    return body_;
}

void SetInstancesNewDbShrinkRequest::setBody(const UpdateDBShrinkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetInstancesNewDbShrinkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetInstancesNewDbShrinkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


