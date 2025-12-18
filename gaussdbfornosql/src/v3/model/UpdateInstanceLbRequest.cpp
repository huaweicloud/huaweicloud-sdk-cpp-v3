

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceLbRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceLbRequest::UpdateInstanceLbRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateInstanceLbRequest::~UpdateInstanceLbRequest() = default;

void UpdateInstanceLbRequest::validate()
{
}

web::json::value UpdateInstanceLbRequest::toJson() const
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
bool UpdateInstanceLbRequest::fromJson(const web::json::value& val)
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
            UpdateInstanceLBRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateInstanceLbRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateInstanceLbRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateInstanceLbRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateInstanceLbRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateInstanceLBRequestBody UpdateInstanceLbRequest::getBody() const
{
    return body_;
}

void UpdateInstanceLbRequest::setBody(const UpdateInstanceLBRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateInstanceLbRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateInstanceLbRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


