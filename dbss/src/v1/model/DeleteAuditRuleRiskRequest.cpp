

#include "huaweicloud/dbss/v1/model/DeleteAuditRuleRiskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditRuleRiskRequest::DeleteAuditRuleRiskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAuditRuleRiskRequest::~DeleteAuditRuleRiskRequest() = default;

void DeleteAuditRuleRiskRequest::validate()
{
}

web::json::value DeleteAuditRuleRiskRequest::toJson() const
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
bool DeleteAuditRuleRiskRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditRuleRiskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditRuleRiskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditRuleRiskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditRuleRiskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditRuleRiskRequest::getId() const
{
    return id_;
}

void DeleteAuditRuleRiskRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAuditRuleRiskRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAuditRuleRiskRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


