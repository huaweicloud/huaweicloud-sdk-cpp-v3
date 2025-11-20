

#include "huaweicloud/iotda/v5/model/CreateDomainConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateDomainConfigurationRequest::CreateDomainConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDomainConfigurationRequest::~CreateDomainConfigurationRequest() = default;

void CreateDomainConfigurationRequest::validate()
{
}

web::json::value CreateDomainConfigurationRequest::toJson() const
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
bool CreateDomainConfigurationRequest::fromJson(const web::json::value& val)
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
            CreateDomainConfigurationDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDomainConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateDomainConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateDomainConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateDomainConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

CreateDomainConfigurationDTO CreateDomainConfigurationRequest::getBody() const
{
    return body_;
}

void CreateDomainConfigurationRequest::setBody(const CreateDomainConfigurationDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDomainConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDomainConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


