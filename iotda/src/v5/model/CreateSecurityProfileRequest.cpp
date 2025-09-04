

#include "huaweicloud/iotda/v5/model/CreateSecurityProfileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateSecurityProfileRequest::CreateSecurityProfileRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSecurityProfileRequest::~CreateSecurityProfileRequest() = default;

void CreateSecurityProfileRequest::validate()
{
}

web::json::value CreateSecurityProfileRequest::toJson() const
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
bool CreateSecurityProfileRequest::fromJson(const web::json::value& val)
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
            AddSecurityProfileDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSecurityProfileRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateSecurityProfileRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateSecurityProfileRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateSecurityProfileRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

AddSecurityProfileDTO CreateSecurityProfileRequest::getBody() const
{
    return body_;
}

void CreateSecurityProfileRequest::setBody(const AddSecurityProfileDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecurityProfileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecurityProfileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


