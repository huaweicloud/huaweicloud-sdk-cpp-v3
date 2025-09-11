

#include "huaweicloud/dbss/v1/model/DeleteAuditAlarmLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DeleteAuditAlarmLogRequest::DeleteAuditAlarmLogRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteAuditAlarmLogRequest::~DeleteAuditAlarmLogRequest() = default;

void DeleteAuditAlarmLogRequest::validate()
{
}

web::json::value DeleteAuditAlarmLogRequest::toJson() const
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
bool DeleteAuditAlarmLogRequest::fromJson(const web::json::value& val)
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


std::string DeleteAuditAlarmLogRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteAuditAlarmLogRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteAuditAlarmLogRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteAuditAlarmLogRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteAuditAlarmLogRequest::getId() const
{
    return id_;
}

void DeleteAuditAlarmLogRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteAuditAlarmLogRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteAuditAlarmLogRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


