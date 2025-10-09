

#include "huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ModifyInstancePortRequest::ModifyInstancePortRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyInstancePortRequest::~ModifyInstancePortRequest() = default;

void ModifyInstancePortRequest::validate()
{
}

web::json::value ModifyInstancePortRequest::toJson() const
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
bool ModifyInstancePortRequest::fromJson(const web::json::value& val)
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
            ModifyInstancePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyInstancePortRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyInstancePortRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyInstancePortRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyInstancePortRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyInstancePortRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyInstancePortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyInstancePortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyInstancePortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyInstancePortRequestBody ModifyInstancePortRequest::getBody() const
{
    return body_;
}

void ModifyInstancePortRequest::setBody(const ModifyInstancePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyInstancePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyInstancePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


