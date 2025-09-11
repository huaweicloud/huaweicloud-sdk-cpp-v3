

#include "huaweicloud/dbss/v1/model/SetAuditAlarmLogStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditAlarmLogStatusRequest::SetAuditAlarmLogStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

SetAuditAlarmLogStatusRequest::~SetAuditAlarmLogStatusRequest() = default;

void SetAuditAlarmLogStatusRequest::validate()
{
}

web::json::value SetAuditAlarmLogStatusRequest::toJson() const
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
bool SetAuditAlarmLogStatusRequest::fromJson(const web::json::value& val)
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


std::string SetAuditAlarmLogStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditAlarmLogStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditAlarmLogStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditAlarmLogStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SetAuditAlarmLogStatusRequest::getId() const
{
    return id_;
}

void SetAuditAlarmLogStatusRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SetAuditAlarmLogStatusRequest::idIsSet() const
{
    return idIsSet_;
}

void SetAuditAlarmLogStatusRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


