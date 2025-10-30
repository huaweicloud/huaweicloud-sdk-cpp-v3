

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyAutoNodeExpansionPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyAutoNodeExpansionPolicyRequest::ModifyAutoNodeExpansionPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyAutoNodeExpansionPolicyRequest::~ModifyAutoNodeExpansionPolicyRequest() = default;

void ModifyAutoNodeExpansionPolicyRequest::validate()
{
}

web::json::value ModifyAutoNodeExpansionPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyAutoNodeExpansionPolicyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyAutoNodeExpansionPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyAutoNodeExpansionPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyAutoNodeExpansionPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ModifyAutoNodeExpansionPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyAutoNodeExpansionPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ModifyAutoNodeExpansionPolicyRequestBody ModifyAutoNodeExpansionPolicyRequest::getBody() const
{
    return body_;
}

void ModifyAutoNodeExpansionPolicyRequest::setBody(const ModifyAutoNodeExpansionPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyAutoNodeExpansionPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyAutoNodeExpansionPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


