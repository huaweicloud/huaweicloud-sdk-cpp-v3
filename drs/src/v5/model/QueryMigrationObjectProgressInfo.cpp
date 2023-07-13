

#include "huaweicloud/drs/v5/model/QueryMigrationObjectProgressInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryMigrationObjectProgressInfo::QueryMigrationObjectProgressInfo()
{
    migrationObjectOverviewIsSet_ = false;
    createTimeIsSet_ = false;
    fullStartTimeIsSet_ = false;
    fullCompleteTimeIsSet_ = false;
    incrStartTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

QueryMigrationObjectProgressInfo::~QueryMigrationObjectProgressInfo() = default;

void QueryMigrationObjectProgressInfo::validate()
{
}

web::json::value QueryMigrationObjectProgressInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(migrationObjectOverviewIsSet_) {
        val[utility::conversions::to_string_t("migration_object_overview")] = ModelBase::toJson(migrationObjectOverview_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fullStartTimeIsSet_) {
        val[utility::conversions::to_string_t("full_start_time")] = ModelBase::toJson(fullStartTime_);
    }
    if(fullCompleteTimeIsSet_) {
        val[utility::conversions::to_string_t("full_complete_time")] = ModelBase::toJson(fullCompleteTime_);
    }
    if(incrStartTimeIsSet_) {
        val[utility::conversions::to_string_t("incr_start_time")] = ModelBase::toJson(incrStartTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool QueryMigrationObjectProgressInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("migration_object_overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migration_object_overview"));
        if(!fieldValue.is_null())
        {
            std::vector<MigrationObjectOverviewInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrationObjectOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_complete_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_complete_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullCompleteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incr_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incr_start_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncrStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

std::vector<MigrationObjectOverviewInfo>& QueryMigrationObjectProgressInfo::getMigrationObjectOverview()
{
    return migrationObjectOverview_;
}

void QueryMigrationObjectProgressInfo::setMigrationObjectOverview(const std::vector<MigrationObjectOverviewInfo>& value)
{
    migrationObjectOverview_ = value;
    migrationObjectOverviewIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::migrationObjectOverviewIsSet() const
{
    return migrationObjectOverviewIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetmigrationObjectOverview()
{
    migrationObjectOverviewIsSet_ = false;
}

utility::datetime QueryMigrationObjectProgressInfo::getCreateTime() const
{
    return createTime_;
}

void QueryMigrationObjectProgressInfo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime QueryMigrationObjectProgressInfo::getFullStartTime() const
{
    return fullStartTime_;
}

void QueryMigrationObjectProgressInfo::setFullStartTime(const utility::datetime& value)
{
    fullStartTime_ = value;
    fullStartTimeIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::fullStartTimeIsSet() const
{
    return fullStartTimeIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetfullStartTime()
{
    fullStartTimeIsSet_ = false;
}

utility::datetime QueryMigrationObjectProgressInfo::getFullCompleteTime() const
{
    return fullCompleteTime_;
}

void QueryMigrationObjectProgressInfo::setFullCompleteTime(const utility::datetime& value)
{
    fullCompleteTime_ = value;
    fullCompleteTimeIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::fullCompleteTimeIsSet() const
{
    return fullCompleteTimeIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetfullCompleteTime()
{
    fullCompleteTimeIsSet_ = false;
}

utility::datetime QueryMigrationObjectProgressInfo::getIncrStartTime() const
{
    return incrStartTime_;
}

void QueryMigrationObjectProgressInfo::setIncrStartTime(const utility::datetime& value)
{
    incrStartTime_ = value;
    incrStartTimeIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::incrStartTimeIsSet() const
{
    return incrStartTimeIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetincrStartTime()
{
    incrStartTimeIsSet_ = false;
}

std::string QueryMigrationObjectProgressInfo::getEndTime() const
{
    return endTime_;
}

void QueryMigrationObjectProgressInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryMigrationObjectProgressInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryMigrationObjectProgressInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


