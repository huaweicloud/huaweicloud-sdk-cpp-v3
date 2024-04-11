

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

}
}
}
}
}


