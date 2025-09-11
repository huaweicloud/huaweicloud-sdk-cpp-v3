

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchWdrSnapshotStatusRequest::SwitchWdrSnapshotStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchWdrSnapshotStatusRequest::~SwitchWdrSnapshotStatusRequest() = default;

void SwitchWdrSnapshotStatusRequest::validate()
{
}

web::json::value SwitchWdrSnapshotStatusRequest::toJson() const
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
bool SwitchWdrSnapshotStatusRequest::fromJson(const web::json::value& val)
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
            SwitchWdrSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchWdrSnapshotStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchWdrSnapshotStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchWdrSnapshotStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchWdrSnapshotStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchWdrSnapshotStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchWdrSnapshotStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchWdrSnapshotStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchWdrSnapshotStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchWdrSnapshotRequestBody SwitchWdrSnapshotStatusRequest::getBody() const
{
    return body_;
}

void SwitchWdrSnapshotStatusRequest::setBody(const SwitchWdrSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchWdrSnapshotStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchWdrSnapshotStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


