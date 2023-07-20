

#include "huaweicloud/dds/v3/model/UpdateInstancePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateInstancePortRequest::UpdateInstancePortRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstancePortRequest::~UpdateInstancePortRequest() = default;

void UpdateInstancePortRequest::validate()
{
}

web::json::value UpdateInstancePortRequest::toJson() const
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

bool UpdateInstancePortRequest::fromJson(const web::json::value& val)
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
            UpdatePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateInstancePortRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstancePortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstancePortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstancePortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdatePortRequestBody UpdateInstancePortRequest::getBody() const
{
    return body_;
}

void UpdateInstancePortRequest::setBody(const UpdatePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstancePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstancePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


