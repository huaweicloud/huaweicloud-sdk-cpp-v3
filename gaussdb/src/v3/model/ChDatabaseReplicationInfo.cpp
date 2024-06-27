

#include "huaweicloud/gaussdb/v3/model/ChDatabaseReplicationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseReplicationInfo::ChDatabaseReplicationInfo()
{
    sourceDatabase_ = "";
    sourceDatabaseIsSet_ = false;
    targetDatabase_ = "";
    targetDatabaseIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    percentage_ = "";
    percentageIsSet_ = false;
    catchupStage_ = "";
    catchupStageIsSet_ = false;
}

ChDatabaseReplicationInfo::~ChDatabaseReplicationInfo() = default;

void ChDatabaseReplicationInfo::validate()
{
}

web::json::value ChDatabaseReplicationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDatabaseIsSet_) {
        val[utility::conversions::to_string_t("source_database")] = ModelBase::toJson(sourceDatabase_);
    }
    if(targetDatabaseIsSet_) {
        val[utility::conversions::to_string_t("target_database")] = ModelBase::toJson(targetDatabase_);
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

    return val;
}
bool ChDatabaseReplicationInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ChDatabaseReplicationInfo::getSourceDatabase() const
{
    return sourceDatabase_;
}

void ChDatabaseReplicationInfo::setSourceDatabase(const std::string& value)
{
    sourceDatabase_ = value;
    sourceDatabaseIsSet_ = true;
}

bool ChDatabaseReplicationInfo::sourceDatabaseIsSet() const
{
    return sourceDatabaseIsSet_;
}

void ChDatabaseReplicationInfo::unsetsourceDatabase()
{
    sourceDatabaseIsSet_ = false;
}

std::string ChDatabaseReplicationInfo::getTargetDatabase() const
{
    return targetDatabase_;
}

void ChDatabaseReplicationInfo::setTargetDatabase(const std::string& value)
{
    targetDatabase_ = value;
    targetDatabaseIsSet_ = true;
}

bool ChDatabaseReplicationInfo::targetDatabaseIsSet() const
{
    return targetDatabaseIsSet_;
}

void ChDatabaseReplicationInfo::unsettargetDatabase()
{
    targetDatabaseIsSet_ = false;
}

std::string ChDatabaseReplicationInfo::getStatus() const
{
    return status_;
}

void ChDatabaseReplicationInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ChDatabaseReplicationInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ChDatabaseReplicationInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ChDatabaseReplicationInfo::getStage() const
{
    return stage_;
}

void ChDatabaseReplicationInfo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool ChDatabaseReplicationInfo::stageIsSet() const
{
    return stageIsSet_;
}

void ChDatabaseReplicationInfo::unsetstage()
{
    stageIsSet_ = false;
}

std::string ChDatabaseReplicationInfo::getPercentage() const
{
    return percentage_;
}

void ChDatabaseReplicationInfo::setPercentage(const std::string& value)
{
    percentage_ = value;
    percentageIsSet_ = true;
}

bool ChDatabaseReplicationInfo::percentageIsSet() const
{
    return percentageIsSet_;
}

void ChDatabaseReplicationInfo::unsetpercentage()
{
    percentageIsSet_ = false;
}

std::string ChDatabaseReplicationInfo::getCatchupStage() const
{
    return catchupStage_;
}

void ChDatabaseReplicationInfo::setCatchupStage(const std::string& value)
{
    catchupStage_ = value;
    catchupStageIsSet_ = true;
}

bool ChDatabaseReplicationInfo::catchupStageIsSet() const
{
    return catchupStageIsSet_;
}

void ChDatabaseReplicationInfo::unsetcatchupStage()
{
    catchupStageIsSet_ = false;
}

}
}
}
}
}


