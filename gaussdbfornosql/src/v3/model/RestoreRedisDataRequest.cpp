

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisDataRequest::RestoreRedisDataRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreRedisDataRequest::~RestoreRedisDataRequest() = default;

void RestoreRedisDataRequest::validate()
{
}

web::json::value RestoreRedisDataRequest::toJson() const
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
bool RestoreRedisDataRequest::fromJson(const web::json::value& val)
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
            RestoreRedisDataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreRedisDataRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreRedisDataRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreRedisDataRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreRedisDataRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreRedisDataRequestBody RestoreRedisDataRequest::getBody() const
{
    return body_;
}

void RestoreRedisDataRequest::setBody(const RestoreRedisDataRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreRedisDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreRedisDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


