

#include "huaweicloud/iotda/v5/model/CreateDeviceAuthenticationTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceAuthenticationTemplateRequest::CreateDeviceAuthenticationTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDeviceAuthenticationTemplateRequest::~CreateDeviceAuthenticationTemplateRequest() = default;

void CreateDeviceAuthenticationTemplateRequest::validate()
{
}

web::json::value CreateDeviceAuthenticationTemplateRequest::toJson() const
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
bool CreateDeviceAuthenticationTemplateRequest::fromJson(const web::json::value& val)
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
            CreateAuthenticationTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDeviceAuthenticationTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDeviceAuthenticationTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDeviceAuthenticationTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateAuthenticationTemplate CreateDeviceAuthenticationTemplateRequest::getBody() const
{
    return body_;
}

void CreateDeviceAuthenticationTemplateRequest::setBody(const CreateAuthenticationTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeviceAuthenticationTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeviceAuthenticationTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


