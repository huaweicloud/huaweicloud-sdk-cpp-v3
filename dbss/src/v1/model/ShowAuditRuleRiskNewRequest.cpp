

#include "huaweicloud/dbss/v1/model/ShowAuditRuleRiskNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditRuleRiskNewRequest::ShowAuditRuleRiskNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ShowAuditRuleRiskNewRequest::~ShowAuditRuleRiskNewRequest() = default;

void ShowAuditRuleRiskNewRequest::validate()
{
}

web::json::value ShowAuditRuleRiskNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowAuditRuleRiskNewRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ShowAuditRuleRiskNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditRuleRiskNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditRuleRiskNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditRuleRiskNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAuditRuleRiskNewRequest::getId() const
{
    return id_;
}

void ShowAuditRuleRiskNewRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAuditRuleRiskNewRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowAuditRuleRiskNewRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


