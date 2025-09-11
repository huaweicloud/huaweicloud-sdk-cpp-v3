

#include "huaweicloud/dbss/v1/model/DeleteAuditRuleSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditRuleSqlRequest::DeleteAuditRuleSqlRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAuditRuleSqlRequest::~DeleteAuditRuleSqlRequest() = default;

void DeleteAuditRuleSqlRequest::validate()
{
}

web::json::value DeleteAuditRuleSqlRequest::toJson() const
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
bool DeleteAuditRuleSqlRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditRuleSqlRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditRuleSqlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditRuleSqlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditRuleSqlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditRuleSqlRequest::getId() const
{
    return id_;
}

void DeleteAuditRuleSqlRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAuditRuleSqlRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAuditRuleSqlRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


