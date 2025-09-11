

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchReplicaRequest::SwitchReplicaRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchReplicaRequest::~SwitchReplicaRequest() = default;

void SwitchReplicaRequest::validate()
{
}

web::json::value SwitchReplicaRequest::toJson() const
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
bool SwitchReplicaRequest::fromJson(const web::json::value& val)
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
            SwitchReplicaRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SwitchReplicaRequest::getXLanguage() const
{
    return xLanguage_;
}

void SwitchReplicaRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SwitchReplicaRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SwitchReplicaRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SwitchReplicaRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchReplicaRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchReplicaRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchReplicaRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchReplicaRequestBody SwitchReplicaRequest::getBody() const
{
    return body_;
}

void SwitchReplicaRequest::setBody(const SwitchReplicaRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchReplicaRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchReplicaRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


