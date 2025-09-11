

#include "huaweicloud/dbss/v1/model/SetRiskRuleRankRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetRiskRuleRankRequest::SetRiskRuleRankRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetRiskRuleRankRequest::~SetRiskRuleRankRequest() = default;

void SetRiskRuleRankRequest::validate()
{
}

web::json::value SetRiskRuleRankRequest::toJson() const
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
bool SetRiskRuleRankRequest::fromJson(const web::json::value& val)
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
            RankRiskRuleNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetRiskRuleRankRequest::getInstanceId() const
{
    return instanceId_;
}

void SetRiskRuleRankRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetRiskRuleRankRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetRiskRuleRankRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RankRiskRuleNew SetRiskRuleRankRequest::getBody() const
{
    return body_;
}

void SetRiskRuleRankRequest::setBody(const RankRiskRuleNew& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetRiskRuleRankRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetRiskRuleRankRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


