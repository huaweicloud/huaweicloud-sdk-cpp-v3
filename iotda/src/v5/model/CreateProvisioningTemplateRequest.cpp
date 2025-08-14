

#include "huaweicloud/iotda/v5/model/CreateProvisioningTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateProvisioningTemplateRequest::CreateProvisioningTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProvisioningTemplateRequest::~CreateProvisioningTemplateRequest() = default;

void CreateProvisioningTemplateRequest::validate()
{
}

web::json::value CreateProvisioningTemplateRequest::toJson() const
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
bool CreateProvisioningTemplateRequest::fromJson(const web::json::value& val)
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
            CreateProvisioningTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProvisioningTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateProvisioningTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateProvisioningTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateProvisioningTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateProvisioningTemplate CreateProvisioningTemplateRequest::getBody() const
{
    return body_;
}

void CreateProvisioningTemplateRequest::setBody(const CreateProvisioningTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProvisioningTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProvisioningTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


