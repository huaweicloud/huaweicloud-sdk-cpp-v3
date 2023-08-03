

#include "huaweicloud/rds/v3/model/SetReadOnlySwitchRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetReadOnlySwitchRequest::SetReadOnlySwitchRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetReadOnlySwitchRequest::~SetReadOnlySwitchRequest() = default;

void SetReadOnlySwitchRequest::validate()
{
}

web::json::value SetReadOnlySwitchRequest::toJson() const
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

bool SetReadOnlySwitchRequest::fromJson(const web::json::value& val)
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
            MysqlReadOnlySwitch refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetReadOnlySwitchRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetReadOnlySwitchRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetReadOnlySwitchRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetReadOnlySwitchRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetReadOnlySwitchRequest::getInstanceId() const
{
    return instanceId_;
}

void SetReadOnlySwitchRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetReadOnlySwitchRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetReadOnlySwitchRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MysqlReadOnlySwitch SetReadOnlySwitchRequest::getBody() const
{
    return body_;
}

void SetReadOnlySwitchRequest::setBody(const MysqlReadOnlySwitch& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetReadOnlySwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetReadOnlySwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


