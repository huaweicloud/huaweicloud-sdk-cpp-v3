

#include "huaweicloud/gaussdb/v3/model/UpdateServerlessComputeAbilityPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateServerlessComputeAbilityPolicyRequest::UpdateServerlessComputeAbilityPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerlessComputeAbilityPolicyRequest::~UpdateServerlessComputeAbilityPolicyRequest() = default;

void UpdateServerlessComputeAbilityPolicyRequest::validate()
{
}

web::json::value UpdateServerlessComputeAbilityPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateServerlessComputeAbilityPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            UpdateServerlessComputeAbilityPolicy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerlessComputeAbilityPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateServerlessComputeAbilityPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateServerlessComputeAbilityPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateServerlessComputeAbilityPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateServerlessComputeAbilityPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateServerlessComputeAbilityPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateServerlessComputeAbilityPolicy UpdateServerlessComputeAbilityPolicyRequest::getBody() const
{
    return body_;
}

void UpdateServerlessComputeAbilityPolicyRequest::setBody(const UpdateServerlessComputeAbilityPolicy& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerlessComputeAbilityPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerlessComputeAbilityPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


