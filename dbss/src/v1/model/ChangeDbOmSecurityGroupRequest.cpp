

#include "huaweicloud/dbss/v1/model/ChangeDbOmSecurityGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ChangeDbOmSecurityGroupRequest::ChangeDbOmSecurityGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeDbOmSecurityGroupRequest::~ChangeDbOmSecurityGroupRequest() = default;

void ChangeDbOmSecurityGroupRequest::validate()
{
}

web::json::value ChangeDbOmSecurityGroupRequest::toJson() const
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
bool ChangeDbOmSecurityGroupRequest::fromJson(const web::json::value& val)
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


std::string ChangeDbOmSecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeDbOmSecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeDbOmSecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeDbOmSecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ChangeSecurityGroupRequest ChangeDbOmSecurityGroupRequest::getBody() const
{
    return body_;
}

void ChangeDbOmSecurityGroupRequest::setBody(const ChangeSecurityGroupRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeDbOmSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeDbOmSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


