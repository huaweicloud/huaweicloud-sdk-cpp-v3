

#include "huaweicloud/iotda/v5/model/CreateDevicePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDevicePolicyRequest::CreateDevicePolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDevicePolicyRequest::~CreateDevicePolicyRequest() = default;

void CreateDevicePolicyRequest::validate()
{
}

web::json::value CreateDevicePolicyRequest::toJson() const
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
bool CreateDevicePolicyRequest::fromJson(const web::json::value& val)
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
            CreateDevicePolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDevicePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDevicePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDevicePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDevicePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDevicePolicy CreateDevicePolicyRequest::getBody() const
{
    return body_;
}

void CreateDevicePolicyRequest::setBody(const CreateDevicePolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDevicePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDevicePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


