

#include "huaweicloud/gaussdbfornosql/v3/model/UpdatePasswordlessConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdatePasswordlessConfigRequest::UpdatePasswordlessConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePasswordlessConfigRequest::~UpdatePasswordlessConfigRequest() = default;

void UpdatePasswordlessConfigRequest::validate()
{
}

web::json::value UpdatePasswordlessConfigRequest::toJson() const
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
bool UpdatePasswordlessConfigRequest::fromJson(const web::json::value& val)
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
            UpdatePasswordlessConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePasswordlessConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdatePasswordlessConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdatePasswordlessConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdatePasswordlessConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdatePasswordlessConfigRequestBody UpdatePasswordlessConfigRequest::getBody() const
{
    return body_;
}

void UpdatePasswordlessConfigRequest::setBody(const UpdatePasswordlessConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePasswordlessConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePasswordlessConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


