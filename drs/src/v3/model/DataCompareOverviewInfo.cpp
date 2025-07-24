

#include "huaweicloud/drs/v3/model/DataCompareOverviewInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DataCompareOverviewInfo::DataCompareOverviewInfo()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    compareNum_ = 0;
    compareNumIsSet_ = false;
    compareEndNum_ = 0;
    compareEndNumIsSet_ = false;
    dataInconsistentNum_ = 0;
    dataInconsistentNumIsSet_ = false;
    uncomparableNum_ = 0;
    uncomparableNumIsSet_ = false;
}

DataCompareOverviewInfo::~DataCompareOverviewInfo() = default;

void DataCompareOverviewInfo::validate()
{
}

web::json::value DataCompareOverviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(compareNumIsSet_) {
        val[utility::conversions::to_string_t("compare_num")] = ModelBase::toJson(compareNum_);
    }
    if(compareEndNumIsSet_) {
        val[utility::conversions::to_string_t("compare_end_num")] = ModelBase::toJson(compareEndNum_);
    }
    if(dataInconsistentNumIsSet_) {
        val[utility::conversions::to_string_t("data_inconsistent_num")] = ModelBase::toJson(dataInconsistentNum_);
    }
    if(uncomparableNumIsSet_) {
        val[utility::conversions::to_string_t("uncomparable_num")] = ModelBase::toJson(uncomparableNum_);
    }

    return val;
}
bool DataCompareOverviewInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("compare_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_end_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_end_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareEndNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_inconsistent_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_inconsistent_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataInconsistentNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uncomparable_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uncomparable_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUncomparableNum(refVal);
        }
    }
    return ok;
}


std::string DataCompareOverviewInfo::getSourceDbName() const
{
    return sourceDbName_;
}

void DataCompareOverviewInfo::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool DataCompareOverviewInfo::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void DataCompareOverviewInfo::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string DataCompareOverviewInfo::getTargetDbName() const
{
    return targetDbName_;
}

void DataCompareOverviewInfo::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool DataCompareOverviewInfo::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void DataCompareOverviewInfo::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

int32_t DataCompareOverviewInfo::getStatus() const
{
    return status_;
}

void DataCompareOverviewInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DataCompareOverviewInfo::statusIsSet() const
{
    return statusIsSet_;
}

void DataCompareOverviewInfo::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t DataCompareOverviewInfo::getCompareNum() const
{
    return compareNum_;
}

void DataCompareOverviewInfo::setCompareNum(int32_t value)
{
    compareNum_ = value;
    compareNumIsSet_ = true;
}

bool DataCompareOverviewInfo::compareNumIsSet() const
{
    return compareNumIsSet_;
}

void DataCompareOverviewInfo::unsetcompareNum()
{
    compareNumIsSet_ = false;
}

int32_t DataCompareOverviewInfo::getCompareEndNum() const
{
    return compareEndNum_;
}

void DataCompareOverviewInfo::setCompareEndNum(int32_t value)
{
    compareEndNum_ = value;
    compareEndNumIsSet_ = true;
}

bool DataCompareOverviewInfo::compareEndNumIsSet() const
{
    return compareEndNumIsSet_;
}

void DataCompareOverviewInfo::unsetcompareEndNum()
{
    compareEndNumIsSet_ = false;
}

int32_t DataCompareOverviewInfo::getDataInconsistentNum() const
{
    return dataInconsistentNum_;
}

void DataCompareOverviewInfo::setDataInconsistentNum(int32_t value)
{
    dataInconsistentNum_ = value;
    dataInconsistentNumIsSet_ = true;
}

bool DataCompareOverviewInfo::dataInconsistentNumIsSet() const
{
    return dataInconsistentNumIsSet_;
}

void DataCompareOverviewInfo::unsetdataInconsistentNum()
{
    dataInconsistentNumIsSet_ = false;
}

int32_t DataCompareOverviewInfo::getUncomparableNum() const
{
    return uncomparableNum_;
}

void DataCompareOverviewInfo::setUncomparableNum(int32_t value)
{
    uncomparableNum_ = value;
    uncomparableNumIsSet_ = true;
}

bool DataCompareOverviewInfo::uncomparableNumIsSet() const
{
    return uncomparableNumIsSet_;
}

void DataCompareOverviewInfo::unsetuncomparableNum()
{
    uncomparableNumIsSet_ = false;
}

}
}
}
}
}


