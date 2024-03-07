

#include "huaweicloud/rds/v3/model/UpdateSqlLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateSqlLimitRequest::UpdateSqlLimitRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSqlLimitRequest::~UpdateSqlLimitRequest() = default;

void UpdateSqlLimitRequest::validate()
{
}

web::json::value UpdateSqlLimitRequest::toJson() const
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
bool UpdateSqlLimitRequest::fromJson(const web::json::value& val)
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
            UpdateSqlLimitRuleReqV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSqlLimitRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSqlLimitRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSqlLimitRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSqlLimitRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSqlLimitRuleReqV3 UpdateSqlLimitRequest::getBody() const
{
    return body_;
}

void UpdateSqlLimitRequest::setBody(const UpdateSqlLimitRuleReqV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSqlLimitRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSqlLimitRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


