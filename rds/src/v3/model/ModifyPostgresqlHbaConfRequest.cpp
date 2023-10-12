

#include "huaweicloud/rds/v3/model/ModifyPostgresqlHbaConfRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyPostgresqlHbaConfRequest::ModifyPostgresqlHbaConfRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyPostgresqlHbaConfRequest::~ModifyPostgresqlHbaConfRequest() = default;

void ModifyPostgresqlHbaConfRequest::validate()
{
}

web::json::value ModifyPostgresqlHbaConfRequest::toJson() const
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
bool ModifyPostgresqlHbaConfRequest::fromJson(const web::json::value& val)
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
            std::vector<PostgresqlHbaConf> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyPostgresqlHbaConfRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyPostgresqlHbaConfRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyPostgresqlHbaConfRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyPostgresqlHbaConfRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<PostgresqlHbaConf>& ModifyPostgresqlHbaConfRequest::getBody()
{
    return body_;
}

void ModifyPostgresqlHbaConfRequest::setBody(const std::vector<PostgresqlHbaConf>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyPostgresqlHbaConfRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyPostgresqlHbaConfRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


