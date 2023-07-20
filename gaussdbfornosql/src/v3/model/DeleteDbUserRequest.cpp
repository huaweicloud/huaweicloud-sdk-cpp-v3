

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbUserRequest::DeleteDbUserRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteDbUserRequest::~DeleteDbUserRequest() = default;

void DeleteDbUserRequest::validate()
{
}

web::json::value DeleteDbUserRequest::toJson() const
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

bool DeleteDbUserRequest::fromJson(const web::json::value& val)
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
            RedisDeleteDbUserRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string DeleteDbUserRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteDbUserRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteDbUserRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteDbUserRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RedisDeleteDbUserRequest DeleteDbUserRequest::getBody() const
{
    return body_;
}

void DeleteDbUserRequest::setBody(const RedisDeleteDbUserRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDbUserRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDbUserRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


