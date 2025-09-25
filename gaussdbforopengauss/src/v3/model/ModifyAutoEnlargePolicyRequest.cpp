

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyAutoEnlargePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyAutoEnlargePolicyRequest::ModifyAutoEnlargePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyAutoEnlargePolicyRequest::~ModifyAutoEnlargePolicyRequest() = default;

void ModifyAutoEnlargePolicyRequest::validate()
{
}

web::json::value ModifyAutoEnlargePolicyRequest::toJson() const
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
bool ModifyAutoEnlargePolicyRequest::fromJson(const web::json::value& val)
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
            ModifyAutoEnlargePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyAutoEnlargePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyAutoEnlargePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyAutoEnlargePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyAutoEnlargePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyAutoEnlargePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyAutoEnlargePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyAutoEnlargePolicyRequestBody ModifyAutoEnlargePolicyRequest::getBody() const
{
    return body_;
}

void ModifyAutoEnlargePolicyRequest::setBody(const ModifyAutoEnlargePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyAutoEnlargePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyAutoEnlargePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


