

#include "huaweicloud/dbss/v1/model/SetSqlRuleRankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetSqlRuleRankRequest::SetSqlRuleRankRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetSqlRuleRankRequest::~SetSqlRuleRankRequest() = default;

void SetSqlRuleRankRequest::validate()
{
}

web::json::value SetSqlRuleRankRequest::toJson() const
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
bool SetSqlRuleRankRequest::fromJson(const web::json::value& val)
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
            RuleSqlIdsRequestNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetSqlRuleRankRequest::getInstanceId() const
{
    return instanceId_;
}

void SetSqlRuleRankRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetSqlRuleRankRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetSqlRuleRankRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RuleSqlIdsRequestNew SetSqlRuleRankRequest::getBody() const
{
    return body_;
}

void SetSqlRuleRankRequest::setBody(const RuleSqlIdsRequestNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetSqlRuleRankRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetSqlRuleRankRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


