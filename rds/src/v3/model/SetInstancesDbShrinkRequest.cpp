

#include "huaweicloud/rds/v3/model/SetInstancesDbShrinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetInstancesDbShrinkRequest::SetInstancesDbShrinkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetInstancesDbShrinkRequest::~SetInstancesDbShrinkRequest() = default;

void SetInstancesDbShrinkRequest::validate()
{
}

web::json::value SetInstancesDbShrinkRequest::toJson() const
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
bool SetInstancesDbShrinkRequest::fromJson(const web::json::value& val)
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


std::string SetInstancesDbShrinkRequest::getInstanceId() const
{
    return instanceId_;
}

void SetInstancesDbShrinkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetInstancesDbShrinkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetInstancesDbShrinkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateDBShrinkRequestBody SetInstancesDbShrinkRequest::getBody() const
{
    return body_;
}

void SetInstancesDbShrinkRequest::setBody(const UpdateDBShrinkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetInstancesDbShrinkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetInstancesDbShrinkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


