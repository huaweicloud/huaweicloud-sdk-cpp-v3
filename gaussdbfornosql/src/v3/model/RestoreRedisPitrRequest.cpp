

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisPitrRequest::RestoreRedisPitrRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreRedisPitrRequest::~RestoreRedisPitrRequest() = default;

void RestoreRedisPitrRequest::validate()
{
}

web::json::value RestoreRedisPitrRequest::toJson() const
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
bool RestoreRedisPitrRequest::fromJson(const web::json::value& val)
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
            RestoreRedisPitrRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RestoreRedisPitrRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreRedisPitrRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreRedisPitrRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreRedisPitrRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreRedisPitrRequestBody RestoreRedisPitrRequest::getBody() const
{
    return body_;
}

void RestoreRedisPitrRequest::setBody(const RestoreRedisPitrRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreRedisPitrRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreRedisPitrRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


