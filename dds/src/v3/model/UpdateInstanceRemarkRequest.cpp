

#include "huaweicloud/dds/v3/model/UpdateInstanceRemarkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateInstanceRemarkRequest::UpdateInstanceRemarkRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceRemarkRequest::~UpdateInstanceRemarkRequest() = default;

void UpdateInstanceRemarkRequest::validate()
{
}

web::json::value UpdateInstanceRemarkRequest::toJson() const
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
bool UpdateInstanceRemarkRequest::fromJson(const web::json::value& val)
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
            UpdateInstanceRemarkRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceRemarkRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceRemarkRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceRemarkRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceRemarkRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstanceRemarkRequestBody UpdateInstanceRemarkRequest::getBody() const
{
    return body_;
}

void UpdateInstanceRemarkRequest::setBody(const UpdateInstanceRemarkRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceRemarkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceRemarkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


