

#include "huaweicloud/gaussdb/v3/model/ShowMigrateInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowMigrateInfoResponse::ShowMigrateInfoResponse()
{
    rdsInstanceId_ = "";
    rdsInstanceIdIsSet_ = false;
    rdsStatus_ = "";
    rdsStatusIsSet_ = false;
    rdsInstanceName_ = "";
    rdsInstanceNameIsSet_ = false;
    drsJobId_ = "";
    drsJobIdIsSet_ = false;
    drsStatus_ = "";
    drsStatusIsSet_ = false;
    rdsReadwriteMode_ = "";
    rdsReadwriteModeIsSet_ = false;
    taurusReadwriteMode_ = "";
    taurusReadwriteModeIsSet_ = false;
    migrationDirection_ = "";
    migrationDirectionIsSet_ = false;
}

ShowMigrateInfoResponse::~ShowMigrateInfoResponse() = default;

void ShowMigrateInfoResponse::validate()
{
}

web::json::value ShowMigrateInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rdsInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("rds_instance_id")] = ModelBase::toJson(rdsInstanceId_);
    }
    if(rdsStatusIsSet_) {
        val[utility::conversions::to_string_t("rds_status")] = ModelBase::toJson(rdsStatus_);
    }
    if(rdsInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("rds_instance_name")] = ModelBase::toJson(rdsInstanceName_);
    }
    if(drsJobIdIsSet_) {
        val[utility::conversions::to_string_t("drs_job_id")] = ModelBase::toJson(drsJobId_);
    }
    if(drsStatusIsSet_) {
        val[utility::conversions::to_string_t("drs_status")] = ModelBase::toJson(drsStatus_);
    }
    if(rdsReadwriteModeIsSet_) {
        val[utility::conversions::to_string_t("rds_readwrite_mode")] = ModelBase::toJson(rdsReadwriteMode_);
    }
    if(taurusReadwriteModeIsSet_) {
        val[utility::conversions::to_string_t("taurus_readwrite_mode")] = ModelBase::toJson(taurusReadwriteMode_);
    }
    if(migrationDirectionIsSet_) {
        val[utility::conversions::to_string_t("migration_direction")] = ModelBase::toJson(migrationDirection_);
    }

    return val;
}
bool ShowMigrateInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rds_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drs_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drs_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrsJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drs_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drs_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rds_readwrite_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rds_readwrite_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRdsReadwriteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taurus_readwrite_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taurus_readwrite_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaurusReadwriteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migration_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migration_direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigrationDirection(refVal);
        }
    }
    return ok;
}


std::string ShowMigrateInfoResponse::getRdsInstanceId() const
{
    return rdsInstanceId_;
}

void ShowMigrateInfoResponse::setRdsInstanceId(const std::string& value)
{
    rdsInstanceId_ = value;
    rdsInstanceIdIsSet_ = true;
}

bool ShowMigrateInfoResponse::rdsInstanceIdIsSet() const
{
    return rdsInstanceIdIsSet_;
}

void ShowMigrateInfoResponse::unsetrdsInstanceId()
{
    rdsInstanceIdIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getRdsStatus() const
{
    return rdsStatus_;
}

void ShowMigrateInfoResponse::setRdsStatus(const std::string& value)
{
    rdsStatus_ = value;
    rdsStatusIsSet_ = true;
}

bool ShowMigrateInfoResponse::rdsStatusIsSet() const
{
    return rdsStatusIsSet_;
}

void ShowMigrateInfoResponse::unsetrdsStatus()
{
    rdsStatusIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getRdsInstanceName() const
{
    return rdsInstanceName_;
}

void ShowMigrateInfoResponse::setRdsInstanceName(const std::string& value)
{
    rdsInstanceName_ = value;
    rdsInstanceNameIsSet_ = true;
}

bool ShowMigrateInfoResponse::rdsInstanceNameIsSet() const
{
    return rdsInstanceNameIsSet_;
}

void ShowMigrateInfoResponse::unsetrdsInstanceName()
{
    rdsInstanceNameIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getDrsJobId() const
{
    return drsJobId_;
}

void ShowMigrateInfoResponse::setDrsJobId(const std::string& value)
{
    drsJobId_ = value;
    drsJobIdIsSet_ = true;
}

bool ShowMigrateInfoResponse::drsJobIdIsSet() const
{
    return drsJobIdIsSet_;
}

void ShowMigrateInfoResponse::unsetdrsJobId()
{
    drsJobIdIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getDrsStatus() const
{
    return drsStatus_;
}

void ShowMigrateInfoResponse::setDrsStatus(const std::string& value)
{
    drsStatus_ = value;
    drsStatusIsSet_ = true;
}

bool ShowMigrateInfoResponse::drsStatusIsSet() const
{
    return drsStatusIsSet_;
}

void ShowMigrateInfoResponse::unsetdrsStatus()
{
    drsStatusIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getRdsReadwriteMode() const
{
    return rdsReadwriteMode_;
}

void ShowMigrateInfoResponse::setRdsReadwriteMode(const std::string& value)
{
    rdsReadwriteMode_ = value;
    rdsReadwriteModeIsSet_ = true;
}

bool ShowMigrateInfoResponse::rdsReadwriteModeIsSet() const
{
    return rdsReadwriteModeIsSet_;
}

void ShowMigrateInfoResponse::unsetrdsReadwriteMode()
{
    rdsReadwriteModeIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getTaurusReadwriteMode() const
{
    return taurusReadwriteMode_;
}

void ShowMigrateInfoResponse::setTaurusReadwriteMode(const std::string& value)
{
    taurusReadwriteMode_ = value;
    taurusReadwriteModeIsSet_ = true;
}

bool ShowMigrateInfoResponse::taurusReadwriteModeIsSet() const
{
    return taurusReadwriteModeIsSet_;
}

void ShowMigrateInfoResponse::unsettaurusReadwriteMode()
{
    taurusReadwriteModeIsSet_ = false;
}

std::string ShowMigrateInfoResponse::getMigrationDirection() const
{
    return migrationDirection_;
}

void ShowMigrateInfoResponse::setMigrationDirection(const std::string& value)
{
    migrationDirection_ = value;
    migrationDirectionIsSet_ = true;
}

bool ShowMigrateInfoResponse::migrationDirectionIsSet() const
{
    return migrationDirectionIsSet_;
}

void ShowMigrateInfoResponse::unsetmigrationDirection()
{
    migrationDirectionIsSet_ = false;
}

}
}
}
}
}


