

#include "huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokePostgresqlDbPrivilegeRequest::RevokePostgresqlDbPrivilegeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

RevokePostgresqlDbPrivilegeRequest::~RevokePostgresqlDbPrivilegeRequest() = default;

void RevokePostgresqlDbPrivilegeRequest::validate()
{
}

web::json::value RevokePostgresqlDbPrivilegeRequest::toJson() const
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
bool RevokePostgresqlDbPrivilegeRequest::fromJson(const web::json::value& val)
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
            RevokePostgresqlDbPrivilegeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RevokePostgresqlDbPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void RevokePostgresqlDbPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RevokePostgresqlDbPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RevokePostgresqlDbPrivilegeRequestBody RevokePostgresqlDbPrivilegeRequest::getBody() const
{
    return body_;
}

void RevokePostgresqlDbPrivilegeRequest::setBody(const RevokePostgresqlDbPrivilegeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RevokePostgresqlDbPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


