

#include "huaweicloud/rds/v3/model/AddPostgresqlHbaConfRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddPostgresqlHbaConfRequest::AddPostgresqlHbaConfRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddPostgresqlHbaConfRequest::~AddPostgresqlHbaConfRequest() = default;

void AddPostgresqlHbaConfRequest::validate()
{
}

web::json::value AddPostgresqlHbaConfRequest::toJson() const
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
bool AddPostgresqlHbaConfRequest::fromJson(const web::json::value& val)
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


std::string AddPostgresqlHbaConfRequest::getInstanceId() const
{
    return instanceId_;
}

void AddPostgresqlHbaConfRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool AddPostgresqlHbaConfRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void AddPostgresqlHbaConfRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::vector<PostgresqlHbaConf>& AddPostgresqlHbaConfRequest::getBody()
{
    return body_;
}

void AddPostgresqlHbaConfRequest::setBody(const std::vector<PostgresqlHbaConf>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddPostgresqlHbaConfRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddPostgresqlHbaConfRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


