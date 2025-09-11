

#include "huaweicloud/dbss/v1/model/DeleteAuditDatabaseNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditDatabaseNewRequest::DeleteAuditDatabaseNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAuditDatabaseNewRequest::~DeleteAuditDatabaseNewRequest() = default;

void DeleteAuditDatabaseNewRequest::validate()
{
}

web::json::value DeleteAuditDatabaseNewRequest::toJson() const
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
bool DeleteAuditDatabaseNewRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditDatabaseNewRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditDatabaseNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditDatabaseNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditDatabaseNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditDatabaseNewRequest::getId() const
{
    return id_;
}

void DeleteAuditDatabaseNewRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAuditDatabaseNewRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAuditDatabaseNewRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


