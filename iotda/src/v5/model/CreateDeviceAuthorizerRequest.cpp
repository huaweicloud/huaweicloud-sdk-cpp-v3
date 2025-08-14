

#include "huaweicloud/iotda/v5/model/CreateDeviceAuthorizerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDeviceAuthorizerRequest::CreateDeviceAuthorizerRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDeviceAuthorizerRequest::~CreateDeviceAuthorizerRequest() = default;

void CreateDeviceAuthorizerRequest::validate()
{
}

web::json::value CreateDeviceAuthorizerRequest::toJson() const
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
bool CreateDeviceAuthorizerRequest::fromJson(const web::json::value& val)
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
            CreateDeviceAuthorizer refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDeviceAuthorizerRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDeviceAuthorizerRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDeviceAuthorizerRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDeviceAuthorizerRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDeviceAuthorizer CreateDeviceAuthorizerRequest::getBody() const
{
    return body_;
}

void CreateDeviceAuthorizerRequest::setBody(const CreateDeviceAuthorizer& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDeviceAuthorizerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDeviceAuthorizerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


