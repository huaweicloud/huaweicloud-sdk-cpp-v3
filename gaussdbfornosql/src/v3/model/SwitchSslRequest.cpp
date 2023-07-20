

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchSslRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchSslRequest::SwitchSslRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SwitchSslRequest::~SwitchSslRequest() = default;

void SwitchSslRequest::validate()
{
}

web::json::value SwitchSslRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool SwitchSslRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SwitchSslRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SwitchSslRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchSslRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchSslRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchSslRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SwitchSslRequestBody SwitchSslRequest::getBody() const
{
    return body_;
}

void SwitchSslRequest::setBody(const SwitchSslRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SwitchSslRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SwitchSslRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


