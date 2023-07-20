

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyPortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyPortRequest::ModifyPortRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyPortRequest::~ModifyPortRequest() = default;

void ModifyPortRequest::validate()
{
}

web::json::value ModifyPortRequest::toJson() const
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

bool ModifyPortRequest::fromJson(const web::json::value& val)
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
            ModifyPortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyPortRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyPortRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyPortRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyPortRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyPortRequestBody ModifyPortRequest::getBody() const
{
    return body_;
}

void ModifyPortRequest::setBody(const ModifyPortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyPortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyPortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


