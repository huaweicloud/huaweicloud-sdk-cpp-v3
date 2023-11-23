

#include "huaweicloud/rds/v3/model/UpgradeReports.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpgradeReports::UpgradeReports()
{
    id_ = "";
    idIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    srcInstanceId_ = "";
    srcInstanceIdIsSet_ = false;
    srcDatabaseVersion_ = "";
    srcDatabaseVersionIsSet_ = false;
    dstInstanceId_ = "";
    dstInstanceIdIsSet_ = false;
    dstDatabaseVersion_ = "";
    dstDatabaseVersionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    isPrivateIpChanged_ = false;
    isPrivateIpChangedIsSet_ = false;
    privateIpChangeTime_ = "";
    privateIpChangeTimeIsSet_ = false;
    statisticsCollectionMode_ = "";
    statisticsCollectionModeIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

UpgradeReports::~UpgradeReports() = default;

void UpgradeReports::validate()
{
}

web::json::value UpgradeReports::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(srcInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("src_instance_id")] = ModelBase::toJson(srcInstanceId_);
    }
    if(srcDatabaseVersionIsSet_) {
        val[utility::conversions::to_string_t("src_database_version")] = ModelBase::toJson(srcDatabaseVersion_);
    }
    if(dstInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("dst_instance_id")] = ModelBase::toJson(dstInstanceId_);
    }
    if(dstDatabaseVersionIsSet_) {
        val[utility::conversions::to_string_t("dst_database_version")] = ModelBase::toJson(dstDatabaseVersion_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(isPrivateIpChangedIsSet_) {
        val[utility::conversions::to_string_t("is_private_ip_changed")] = ModelBase::toJson(isPrivateIpChanged_);
    }
    if(privateIpChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("private_ip_change_time")] = ModelBase::toJson(privateIpChangeTime_);
    }
    if(statisticsCollectionModeIsSet_) {
        val[utility::conversions::to_string_t("statistics_collection_mode")] = ModelBase::toJson(statisticsCollectionMode_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool UpgradeReports::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("src_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("src_database_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("src_database_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSrcDatabaseVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dst_database_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dst_database_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDstDatabaseVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_private_ip_changed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_private_ip_changed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrivateIpChanged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip_change_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIpChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("statistics_collection_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statistics_collection_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatisticsCollectionMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string UpgradeReports::getId() const
{
    return id_;
}

void UpgradeReports::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpgradeReports::idIsSet() const
{
    return idIsSet_;
}

void UpgradeReports::unsetid()
{
    idIsSet_ = false;
}

std::string UpgradeReports::getStartTime() const
{
    return startTime_;
}

void UpgradeReports::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool UpgradeReports::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void UpgradeReports::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string UpgradeReports::getEndTime() const
{
    return endTime_;
}

void UpgradeReports::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool UpgradeReports::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void UpgradeReports::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string UpgradeReports::getSrcInstanceId() const
{
    return srcInstanceId_;
}

void UpgradeReports::setSrcInstanceId(const std::string& value)
{
    srcInstanceId_ = value;
    srcInstanceIdIsSet_ = true;
}

bool UpgradeReports::srcInstanceIdIsSet() const
{
    return srcInstanceIdIsSet_;
}

void UpgradeReports::unsetsrcInstanceId()
{
    srcInstanceIdIsSet_ = false;
}

std::string UpgradeReports::getSrcDatabaseVersion() const
{
    return srcDatabaseVersion_;
}

void UpgradeReports::setSrcDatabaseVersion(const std::string& value)
{
    srcDatabaseVersion_ = value;
    srcDatabaseVersionIsSet_ = true;
}

bool UpgradeReports::srcDatabaseVersionIsSet() const
{
    return srcDatabaseVersionIsSet_;
}

void UpgradeReports::unsetsrcDatabaseVersion()
{
    srcDatabaseVersionIsSet_ = false;
}

std::string UpgradeReports::getDstInstanceId() const
{
    return dstInstanceId_;
}

void UpgradeReports::setDstInstanceId(const std::string& value)
{
    dstInstanceId_ = value;
    dstInstanceIdIsSet_ = true;
}

bool UpgradeReports::dstInstanceIdIsSet() const
{
    return dstInstanceIdIsSet_;
}

void UpgradeReports::unsetdstInstanceId()
{
    dstInstanceIdIsSet_ = false;
}

std::string UpgradeReports::getDstDatabaseVersion() const
{
    return dstDatabaseVersion_;
}

void UpgradeReports::setDstDatabaseVersion(const std::string& value)
{
    dstDatabaseVersion_ = value;
    dstDatabaseVersionIsSet_ = true;
}

bool UpgradeReports::dstDatabaseVersionIsSet() const
{
    return dstDatabaseVersionIsSet_;
}

void UpgradeReports::unsetdstDatabaseVersion()
{
    dstDatabaseVersionIsSet_ = false;
}

std::string UpgradeReports::getResult() const
{
    return result_;
}

void UpgradeReports::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpgradeReports::resultIsSet() const
{
    return resultIsSet_;
}

void UpgradeReports::unsetresult()
{
    resultIsSet_ = false;
}

bool UpgradeReports::isIsPrivateIpChanged() const
{
    return isPrivateIpChanged_;
}

void UpgradeReports::setIsPrivateIpChanged(bool value)
{
    isPrivateIpChanged_ = value;
    isPrivateIpChangedIsSet_ = true;
}

bool UpgradeReports::isPrivateIpChangedIsSet() const
{
    return isPrivateIpChangedIsSet_;
}

void UpgradeReports::unsetisPrivateIpChanged()
{
    isPrivateIpChangedIsSet_ = false;
}

std::string UpgradeReports::getPrivateIpChangeTime() const
{
    return privateIpChangeTime_;
}

void UpgradeReports::setPrivateIpChangeTime(const std::string& value)
{
    privateIpChangeTime_ = value;
    privateIpChangeTimeIsSet_ = true;
}

bool UpgradeReports::privateIpChangeTimeIsSet() const
{
    return privateIpChangeTimeIsSet_;
}

void UpgradeReports::unsetprivateIpChangeTime()
{
    privateIpChangeTimeIsSet_ = false;
}

std::string UpgradeReports::getStatisticsCollectionMode() const
{
    return statisticsCollectionMode_;
}

void UpgradeReports::setStatisticsCollectionMode(const std::string& value)
{
    statisticsCollectionMode_ = value;
    statisticsCollectionModeIsSet_ = true;
}

bool UpgradeReports::statisticsCollectionModeIsSet() const
{
    return statisticsCollectionModeIsSet_;
}

void UpgradeReports::unsetstatisticsCollectionMode()
{
    statisticsCollectionModeIsSet_ = false;
}

std::string UpgradeReports::getDetail() const
{
    return detail_;
}

void UpgradeReports::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool UpgradeReports::detailIsSet() const
{
    return detailIsSet_;
}

void UpgradeReports::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


