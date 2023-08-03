

#include "huaweicloud/rds/v3/model/UpdateDnsNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDnsNameRequest::UpdateDnsNameRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDnsNameRequest::~UpdateDnsNameRequest() = default;

void UpdateDnsNameRequest::validate()
{
}

web::json::value UpdateDnsNameRequest::toJson() const
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

bool UpdateDnsNameRequest::fromJson(const web::json::value& val)
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
            ModifyDnsNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateDnsNameRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateDnsNameRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateDnsNameRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateDnsNameRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateDnsNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDnsNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDnsNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDnsNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyDnsNameRequestBody UpdateDnsNameRequest::getBody() const
{
    return body_;
}

void UpdateDnsNameRequest::setBody(const ModifyDnsNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDnsNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDnsNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


