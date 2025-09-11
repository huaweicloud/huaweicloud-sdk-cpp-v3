

#include "huaweicloud/dbss/v1/model/RiskBackupTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RiskBackupTemplate::RiskBackupTemplate()
{
    cycle_ = "";
    cycleIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

RiskBackupTemplate::~RiskBackupTemplate() = default;

void RiskBackupTemplate::validate()
{
}

web::json::value RiskBackupTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cycleIsSet_) {
        val[utility::conversions::to_string_t("cycle")] = ModelBase::toJson(cycle_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RiskBackupTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cycle"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string RiskBackupTemplate::getCycle() const
{
    return cycle_;
}

void RiskBackupTemplate::setCycle(const std::string& value)
{
    cycle_ = value;
    cycleIsSet_ = true;
}

bool RiskBackupTemplate::cycleIsSet() const
{
    return cycleIsSet_;
}

void RiskBackupTemplate::unsetcycle()
{
    cycleIsSet_ = false;
}

std::string RiskBackupTemplate::getDbId() const
{
    return dbId_;
}

void RiskBackupTemplate::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool RiskBackupTemplate::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void RiskBackupTemplate::unsetdbId()
{
    dbIdIsSet_ = false;
}

int32_t RiskBackupTemplate::getStatus() const
{
    return status_;
}

void RiskBackupTemplate::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RiskBackupTemplate::statusIsSet() const
{
    return statusIsSet_;
}

void RiskBackupTemplate::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


