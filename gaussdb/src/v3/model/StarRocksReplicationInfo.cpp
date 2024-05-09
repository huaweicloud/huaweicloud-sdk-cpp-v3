

#include "huaweicloud/gaussdb/v3/model/StarRocksReplicationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksReplicationInfo::StarRocksReplicationInfo()
{
    sourceDatabase_ = "";
    sourceDatabaseIsSet_ = false;
    targetDatabase_ = "";
    targetDatabaseIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    percentage_ = "";
    percentageIsSet_ = false;
    catchupStage_ = "";
    catchupStageIsSet_ = false;
    catchupPercentage_ = "";
    catchupPercentageIsSet_ = false;
}

StarRocksReplicationInfo::~StarRocksReplicationInfo() = default;

void StarRocksReplicationInfo::validate()
{
}

web::json::value StarRocksReplicationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseIsSet_) {
        val[utility::conversions::to_string_t("source_database")] = ModelBase::toJson(sourceDatabase_);
    }
    if(targetDatabaseIsSet_) {
        val[utility::conversions::to_string_t("target_database")] = ModelBase::toJson(targetDatabase_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(percentageIsSet_) {
        val[utility::conversions::to_string_t("percentage")] = ModelBase::toJson(percentage_);
    }
    if(catchupStageIsSet_) {
        val[utility::conversions::to_string_t("catchup_stage")] = ModelBase::toJson(catchupStage_);
    }
    if(catchupPercentageIsSet_) {
        val[utility::conversions::to_string_t("catchup_percentage")] = ModelBase::toJson(catchupPercentage_);
    }

    return val;
}
bool StarRocksReplicationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catchup_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchup_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCatchupStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("catchup_percentage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("catchup_percentage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCatchupPercentage(refVal);
        }
    }
    return ok;
}


std::string StarRocksReplicationInfo::getSourceDatabase() const
{
    return sourceDatabase_;
}

void StarRocksReplicationInfo::setSourceDatabase(const std::string& value)
{
    sourceDatabase_ = value;
    sourceDatabaseIsSet_ = true;
}

bool StarRocksReplicationInfo::sourceDatabaseIsSet() const
{
    return sourceDatabaseIsSet_;
}

void StarRocksReplicationInfo::unsetsourceDatabase()
{
    sourceDatabaseIsSet_ = false;
}

std::string StarRocksReplicationInfo::getTargetDatabase() const
{
    return targetDatabase_;
}

void StarRocksReplicationInfo::setTargetDatabase(const std::string& value)
{
    targetDatabase_ = value;
    targetDatabaseIsSet_ = true;
}

bool StarRocksReplicationInfo::targetDatabaseIsSet() const
{
    return targetDatabaseIsSet_;
}

void StarRocksReplicationInfo::unsettargetDatabase()
{
    targetDatabaseIsSet_ = false;
}

std::string StarRocksReplicationInfo::getTaskName() const
{
    return taskName_;
}

void StarRocksReplicationInfo::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool StarRocksReplicationInfo::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void StarRocksReplicationInfo::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string StarRocksReplicationInfo::getStatus() const
{
    return status_;
}

void StarRocksReplicationInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StarRocksReplicationInfo::statusIsSet() const
{
    return statusIsSet_;
}

void StarRocksReplicationInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StarRocksReplicationInfo::getStage() const
{
    return stage_;
}

void StarRocksReplicationInfo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool StarRocksReplicationInfo::stageIsSet() const
{
    return stageIsSet_;
}

void StarRocksReplicationInfo::unsetstage()
{
    stageIsSet_ = false;
}

std::string StarRocksReplicationInfo::getPercentage() const
{
    return percentage_;
}

void StarRocksReplicationInfo::setPercentage(const std::string& value)
{
    percentage_ = value;
    percentageIsSet_ = true;
}

bool StarRocksReplicationInfo::percentageIsSet() const
{
    return percentageIsSet_;
}

void StarRocksReplicationInfo::unsetpercentage()
{
    percentageIsSet_ = false;
}

std::string StarRocksReplicationInfo::getCatchupStage() const
{
    return catchupStage_;
}

void StarRocksReplicationInfo::setCatchupStage(const std::string& value)
{
    catchupStage_ = value;
    catchupStageIsSet_ = true;
}

bool StarRocksReplicationInfo::catchupStageIsSet() const
{
    return catchupStageIsSet_;
}

void StarRocksReplicationInfo::unsetcatchupStage()
{
    catchupStageIsSet_ = false;
}

std::string StarRocksReplicationInfo::getCatchupPercentage() const
{
    return catchupPercentage_;
}

void StarRocksReplicationInfo::setCatchupPercentage(const std::string& value)
{
    catchupPercentage_ = value;
    catchupPercentageIsSet_ = true;
}

bool StarRocksReplicationInfo::catchupPercentageIsSet() const
{
    return catchupPercentageIsSet_;
}

void StarRocksReplicationInfo::unsetcatchupPercentage()
{
    catchupPercentageIsSet_ = false;
}

}
}
}
}
}


