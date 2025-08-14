

#include "huaweicloud/iotda/v5/model/UntagDeviceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UntagDeviceRequest::UntagDeviceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UntagDeviceRequest::~UntagDeviceRequest() = default;

void UntagDeviceRequest::validate()
{
}

web::json::value UntagDeviceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UntagDeviceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
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
            UnbindTagsDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UntagDeviceRequest::getInstanceId() const
{
    return instanceId_;
}

void UntagDeviceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UntagDeviceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UntagDeviceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UnbindTagsDTO UntagDeviceRequest::getBody() const
{
    return body_;
}

void UntagDeviceRequest::setBody(const UnbindTagsDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UntagDeviceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UntagDeviceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


