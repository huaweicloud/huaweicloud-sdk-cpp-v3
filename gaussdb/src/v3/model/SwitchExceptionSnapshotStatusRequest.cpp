

#include "huaweicloud/gaussdb/v3/model/SwitchExceptionSnapshotStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SwitchExceptionSnapshotStatusRequest::SwitchExceptionSnapshotStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchExceptionSnapshotStatusRequest::~SwitchExceptionSnapshotStatusRequest() = default;

void SwitchExceptionSnapshotStatusRequest::validate()
{
}

web::json::value SwitchExceptionSnapshotStatusRequest::toJson() const
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
bool SwitchExceptionSnapshotStatusRequest::fromJson(const web::json::value& val)
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
            SwitchExceptionSnapshotStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchExceptionSnapshotStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchExceptionSnapshotStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchExceptionSnapshotStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchExceptionSnapshotStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchExceptionSnapshotStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchExceptionSnapshotStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchExceptionSnapshotStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchExceptionSnapshotStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchExceptionSnapshotStatusRequestBody SwitchExceptionSnapshotStatusRequest::getBody() const
{
    return body_;
}

void SwitchExceptionSnapshotStatusRequest::setBody(const SwitchExceptionSnapshotStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchExceptionSnapshotStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchExceptionSnapshotStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


