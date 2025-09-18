

#include "huaweicloud/projectman/v4/model/WorkitemStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkitemStatus::WorkitemStatus()
{
    id_ = "";
    idIsSet_ = false;
    statusIsSet_ = false;
}

WorkitemStatus::~WorkitemStatus() = default;

void WorkitemStatus::validate()
{
}

web::json::value WorkitemStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool WorkitemStatus::fromJson(const web::json::value& val)
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
            WorkitemStatus_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string WorkitemStatus::getId() const
{
    return id_;
}

void WorkitemStatus::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WorkitemStatus::idIsSet() const
{
    return idIsSet_;
}

void WorkitemStatus::unsetid()
{
    idIsSet_ = false;
}

WorkitemStatus_status WorkitemStatus::getStatus() const
{
    return status_;
}

void WorkitemStatus::setStatus(const WorkitemStatus_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WorkitemStatus::statusIsSet() const
{
    return statusIsSet_;
}

void WorkitemStatus::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


