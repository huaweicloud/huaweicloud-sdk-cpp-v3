

#include "huaweicloud/gaussdbfornosql/v3/model/SaveRedisDisabledCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SaveRedisDisabledCommandsRequest::SaveRedisDisabledCommandsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SaveRedisDisabledCommandsRequest::~SaveRedisDisabledCommandsRequest() = default;

void SaveRedisDisabledCommandsRequest::validate()
{
}

web::json::value SaveRedisDisabledCommandsRequest::toJson() const
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
bool SaveRedisDisabledCommandsRequest::fromJson(const web::json::value& val)
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
            SaveRedisDisabledCommandsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveRedisDisabledCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void SaveRedisDisabledCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SaveRedisDisabledCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SaveRedisDisabledCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SaveRedisDisabledCommandsRequestBody SaveRedisDisabledCommandsRequest::getBody() const
{
    return body_;
}

void SaveRedisDisabledCommandsRequest::setBody(const SaveRedisDisabledCommandsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveRedisDisabledCommandsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveRedisDisabledCommandsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


