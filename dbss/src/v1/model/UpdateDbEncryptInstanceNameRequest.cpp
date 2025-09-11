

#include "huaweicloud/dbss/v1/model/UpdateDbEncryptInstanceNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateDbEncryptInstanceNameRequest::UpdateDbEncryptInstanceNameRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDbEncryptInstanceNameRequest::~UpdateDbEncryptInstanceNameRequest() = default;

void UpdateDbEncryptInstanceNameRequest::validate()
{
}

web::json::value UpdateDbEncryptInstanceNameRequest::toJson() const
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
bool UpdateDbEncryptInstanceNameRequest::fromJson(const web::json::value& val)
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
            ChangeNameRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDbEncryptInstanceNameRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDbEncryptInstanceNameRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDbEncryptInstanceNameRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDbEncryptInstanceNameRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeNameRequest UpdateDbEncryptInstanceNameRequest::getBody() const
{
    return body_;
}

void UpdateDbEncryptInstanceNameRequest::setBody(const ChangeNameRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDbEncryptInstanceNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDbEncryptInstanceNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


