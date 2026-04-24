

#include "huaweicloud/gaussdbforopengauss/v3/model/BindDNatRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindDNatRequest::BindDNatRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindDNatRequest::~BindDNatRequest() = default;

void BindDNatRequest::validate()
{
}

web::json::value BindDNatRequest::toJson() const
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
bool BindDNatRequest::fromJson(const web::json::value& val)
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
            BindDNatRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindDNatRequest::getXLanguage() const
{
    return xLanguage_;
}

void BindDNatRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool BindDNatRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void BindDNatRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string BindDNatRequest::getInstanceId() const
{
    return instanceId_;
}

void BindDNatRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BindDNatRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BindDNatRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BindDNatRequestBody BindDNatRequest::getBody() const
{
    return body_;
}

void BindDNatRequest::setBody(const BindDNatRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindDNatRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindDNatRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


