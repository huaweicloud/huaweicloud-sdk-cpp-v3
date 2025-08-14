

#include "huaweicloud/iotda/v5/model/CreateDeviceProxyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceProxyRequest::CreateDeviceProxyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDeviceProxyRequest::~CreateDeviceProxyRequest() = default;

void CreateDeviceProxyRequest::validate()
{
}

web::json::value CreateDeviceProxyRequest::toJson() const
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
bool CreateDeviceProxyRequest::fromJson(const web::json::value& val)
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
            AddDeviceProxy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDeviceProxyRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDeviceProxyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDeviceProxyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDeviceProxyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddDeviceProxy CreateDeviceProxyRequest::getBody() const
{
    return body_;
}

void CreateDeviceProxyRequest::setBody(const AddDeviceProxy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeviceProxyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeviceProxyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


