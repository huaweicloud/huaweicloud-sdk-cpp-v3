

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteRedisDisabledCommandsRequest::DeleteRedisDisabledCommandsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteRedisDisabledCommandsRequest::~DeleteRedisDisabledCommandsRequest() = default;

void DeleteRedisDisabledCommandsRequest::validate()
{
}

web::json::value DeleteRedisDisabledCommandsRequest::toJson() const
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
bool DeleteRedisDisabledCommandsRequest::fromJson(const web::json::value& val)
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
            DeleteRedisDisabledCommandsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteRedisDisabledCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteRedisDisabledCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteRedisDisabledCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteRedisDisabledCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DeleteRedisDisabledCommandsRequestBody DeleteRedisDisabledCommandsRequest::getBody() const
{
    return body_;
}

void DeleteRedisDisabledCommandsRequest::setBody(const DeleteRedisDisabledCommandsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRedisDisabledCommandsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRedisDisabledCommandsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


