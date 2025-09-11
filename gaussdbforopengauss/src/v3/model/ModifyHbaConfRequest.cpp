

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyHbaConfRequest::ModifyHbaConfRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyHbaConfRequest::~ModifyHbaConfRequest() = default;

void ModifyHbaConfRequest::validate()
{
}

web::json::value ModifyHbaConfRequest::toJson() const
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
bool ModifyHbaConfRequest::fromJson(const web::json::value& val)
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
            ModifyHbaConfRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyHbaConfRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyHbaConfRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyHbaConfRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyHbaConfRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyHbaConfRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyHbaConfRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyHbaConfRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyHbaConfRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyHbaConfRequestBody ModifyHbaConfRequest::getBody() const
{
    return body_;
}

void ModifyHbaConfRequest::setBody(const ModifyHbaConfRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyHbaConfRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyHbaConfRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


