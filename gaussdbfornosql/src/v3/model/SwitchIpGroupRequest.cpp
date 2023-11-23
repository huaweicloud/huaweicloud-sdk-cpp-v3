

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchIpGroupRequest::SwitchIpGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchIpGroupRequest::~SwitchIpGroupRequest() = default;

void SwitchIpGroupRequest::validate()
{
}

web::json::value SwitchIpGroupRequest::toJson() const
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
bool SwitchIpGroupRequest::fromJson(const web::json::value& val)
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
            SwitchIpGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchIpGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchIpGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchIpGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchIpGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchIpGroupRequestBody SwitchIpGroupRequest::getBody() const
{
    return body_;
}

void SwitchIpGroupRequest::setBody(const SwitchIpGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchIpGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchIpGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


