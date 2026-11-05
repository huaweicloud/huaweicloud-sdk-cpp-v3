

#include "huaweicloud/rds/v3/model/SupabaseManagedInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseManagedInstanceInfo::SupabaseManagedInstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SupabaseManagedInstanceInfo::~SupabaseManagedInstanceInfo() = default;

void SupabaseManagedInstanceInfo::validate()
{
}

web::json::value SupabaseManagedInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SupabaseManagedInstanceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SupabaseManagedInstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void SupabaseManagedInstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SupabaseManagedInstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SupabaseManagedInstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string SupabaseManagedInstanceInfo::getStatus() const
{
    return status_;
}

void SupabaseManagedInstanceInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SupabaseManagedInstanceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void SupabaseManagedInstanceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


