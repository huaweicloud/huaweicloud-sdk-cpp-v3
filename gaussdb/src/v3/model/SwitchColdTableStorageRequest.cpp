

#include "huaweicloud/gaussdb/v3/model/SwitchColdTableStorageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchColdTableStorageRequest::SwitchColdTableStorageRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchColdTableStorageRequest::~SwitchColdTableStorageRequest() = default;

void SwitchColdTableStorageRequest::validate()
{
}

web::json::value SwitchColdTableStorageRequest::toJson() const
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
bool SwitchColdTableStorageRequest::fromJson(const web::json::value& val)
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
            SwitchColdTableStorageReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchColdTableStorageRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchColdTableStorageRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchColdTableStorageRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchColdTableStorageRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchColdTableStorageRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchColdTableStorageRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchColdTableStorageRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchColdTableStorageRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchColdTableStorageReq SwitchColdTableStorageRequest::getBody() const
{
    return body_;
}

void SwitchColdTableStorageRequest::setBody(const SwitchColdTableStorageReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchColdTableStorageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchColdTableStorageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


