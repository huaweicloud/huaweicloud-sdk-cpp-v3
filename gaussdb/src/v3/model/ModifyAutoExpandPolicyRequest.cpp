

#include "huaweicloud/gaussdb/v3/model/ModifyAutoExpandPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyAutoExpandPolicyRequest::ModifyAutoExpandPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyAutoExpandPolicyRequest::~ModifyAutoExpandPolicyRequest() = default;

void ModifyAutoExpandPolicyRequest::validate()
{
}

web::json::value ModifyAutoExpandPolicyRequest::toJson() const
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
bool ModifyAutoExpandPolicyRequest::fromJson(const web::json::value& val)
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
            ModifyAutoExpandPolicyReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyAutoExpandPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyAutoExpandPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyAutoExpandPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyAutoExpandPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyAutoExpandPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyAutoExpandPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyAutoExpandPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyAutoExpandPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyAutoExpandPolicyReq ModifyAutoExpandPolicyRequest::getBody() const
{
    return body_;
}

void ModifyAutoExpandPolicyRequest::setBody(const ModifyAutoExpandPolicyReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyAutoExpandPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyAutoExpandPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


