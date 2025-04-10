

#include "huaweicloud/gaussdbforopengauss/v3/model/ResetDrConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ResetDrConfigRequest::ResetDrConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetDrConfigRequest::~ResetDrConfigRequest() = default;

void ResetDrConfigRequest::validate()
{
}

web::json::value ResetDrConfigRequest::toJson() const
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
bool ResetDrConfigRequest::fromJson(const web::json::value& val)
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
            ResetDrConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetDrConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ResetDrConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ResetDrConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ResetDrConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ResetDrConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetDrConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetDrConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetDrConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ResetDrConfigRequestBody ResetDrConfigRequest::getBody() const
{
    return body_;
}

void ResetDrConfigRequest::setBody(const ResetDrConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetDrConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetDrConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


