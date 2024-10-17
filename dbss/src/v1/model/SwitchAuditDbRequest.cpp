

#include "huaweicloud/dbss/v1/model/SwitchAuditDbRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAuditDbRequest::SwitchAuditDbRequest()
{
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    ltsAuditSwitch_ = 0;
    ltsAuditSwitchIsSet_ = false;
}

SwitchAuditDbRequest::~SwitchAuditDbRequest() = default;

void SwitchAuditDbRequest::validate()
{
}

web::json::value SwitchAuditDbRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ltsAuditSwitchIsSet_) {
        val[utility::conversions::to_string_t("lts_audit_switch")] = ModelBase::toJson(ltsAuditSwitch_);
    }

    return val;
}
bool SwitchAuditDbRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_audit_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_audit_switch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsAuditSwitch(refVal);
        }
    }
    return ok;
}


std::string SwitchAuditDbRequest::getId() const
{
    return id_;
}

void SwitchAuditDbRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SwitchAuditDbRequest::idIsSet() const
{
    return idIsSet_;
}

void SwitchAuditDbRequest::unsetid()
{
    idIsSet_ = false;
}

std::string SwitchAuditDbRequest::getStatus() const
{
    return status_;
}

void SwitchAuditDbRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchAuditDbRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchAuditDbRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t SwitchAuditDbRequest::getLtsAuditSwitch() const
{
    return ltsAuditSwitch_;
}

void SwitchAuditDbRequest::setLtsAuditSwitch(int32_t value)
{
    ltsAuditSwitch_ = value;
    ltsAuditSwitchIsSet_ = true;
}

bool SwitchAuditDbRequest::ltsAuditSwitchIsSet() const
{
    return ltsAuditSwitchIsSet_;
}

void SwitchAuditDbRequest::unsetltsAuditSwitch()
{
    ltsAuditSwitchIsSet_ = false;
}

}
}
}
}
}


