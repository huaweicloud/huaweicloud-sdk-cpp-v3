

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreExistingInstanceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreExistingInstanceRequest::RestoreExistingInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RestoreExistingInstanceRequest::~RestoreExistingInstanceRequest() = default;

void RestoreExistingInstanceRequest::validate()
{
}

web::json::value RestoreExistingInstanceRequest::toJson() const
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

bool RestoreExistingInstanceRequest::fromJson(const web::json::value& val)
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
            RestoreRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string RestoreExistingInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void RestoreExistingInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreExistingInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreExistingInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RestoreRequestBody RestoreExistingInstanceRequest::getBody() const
{
    return body_;
}

void RestoreExistingInstanceRequest::setBody(const RestoreRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RestoreExistingInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RestoreExistingInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


