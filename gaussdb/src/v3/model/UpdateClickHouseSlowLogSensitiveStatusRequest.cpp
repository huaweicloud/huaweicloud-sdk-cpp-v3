

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseSlowLogSensitiveStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseSlowLogSensitiveStatusRequest::UpdateClickHouseSlowLogSensitiveStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateClickHouseSlowLogSensitiveStatusRequest::~UpdateClickHouseSlowLogSensitiveStatusRequest() = default;

void UpdateClickHouseSlowLogSensitiveStatusRequest::validate()
{
}

web::json::value UpdateClickHouseSlowLogSensitiveStatusRequest::toJson() const
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
bool UpdateClickHouseSlowLogSensitiveStatusRequest::fromJson(const web::json::value& val)
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
            ChSlowlogSensitiveResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateClickHouseSlowLogSensitiveStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateClickHouseSlowLogSensitiveStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateClickHouseSlowLogSensitiveStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateClickHouseSlowLogSensitiveStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ChSlowlogSensitiveResponse UpdateClickHouseSlowLogSensitiveStatusRequest::getBody() const
{
    return body_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::setBody(const ChSlowlogSensitiveResponse& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateClickHouseSlowLogSensitiveStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateClickHouseSlowLogSensitiveStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


