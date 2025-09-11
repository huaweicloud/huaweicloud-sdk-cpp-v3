

#include "huaweicloud/dbss/v1/model/ChangeDbEncryptSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeDbEncryptSecurityGroupRequest::ChangeDbEncryptSecurityGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeDbEncryptSecurityGroupRequest::~ChangeDbEncryptSecurityGroupRequest() = default;

void ChangeDbEncryptSecurityGroupRequest::validate()
{
}

web::json::value ChangeDbEncryptSecurityGroupRequest::toJson() const
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
bool ChangeDbEncryptSecurityGroupRequest::fromJson(const web::json::value& val)
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
            ChangeSecurityGroupRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeDbEncryptSecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeDbEncryptSecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeDbEncryptSecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeSecurityGroupRequest ChangeDbEncryptSecurityGroupRequest::getBody() const
{
    return body_;
}

void ChangeDbEncryptSecurityGroupRequest::setBody(const ChangeSecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeDbEncryptSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeDbEncryptSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


