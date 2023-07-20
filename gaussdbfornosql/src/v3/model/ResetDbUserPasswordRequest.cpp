

#include "huaweicloud/gaussdbfornosql/v3/model/ResetDbUserPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResetDbUserPasswordRequest::ResetDbUserPasswordRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetDbUserPasswordRequest::~ResetDbUserPasswordRequest() = default;

void ResetDbUserPasswordRequest::validate()
{
}

web::json::value ResetDbUserPasswordRequest::toJson() const
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

bool ResetDbUserPasswordRequest::fromJson(const web::json::value& val)
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
            RedisResetDbUserPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ResetDbUserPasswordRequest::getInstanceId() const
{
    return instanceId_;
}

void ResetDbUserPasswordRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ResetDbUserPasswordRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ResetDbUserPasswordRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RedisResetDbUserPasswordRequestBody ResetDbUserPasswordRequest::getBody() const
{
    return body_;
}

void ResetDbUserPasswordRequest::setBody(const RedisResetDbUserPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetDbUserPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetDbUserPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


