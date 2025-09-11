

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseVolumeSummaryResponse::ListDatabaseVolumeSummaryResponse()
{
    dataDiskCapacity_ = "";
    dataDiskCapacityIsSet_ = false;
    dataDiskUsage_ = "";
    dataDiskUsageIsSet_ = false;
    spaceUsageGrowthPerDay_ = "";
    spaceUsageGrowthPerDayIsSet_ = false;
    estimatedRemainingDays_ = "";
    estimatedRemainingDaysIsSet_ = false;
    cnComponentsIsSet_ = false;
    dnComponentsIsSet_ = false;
}

ListDatabaseVolumeSummaryResponse::~ListDatabaseVolumeSummaryResponse() = default;

void ListDatabaseVolumeSummaryResponse::validate()
{
}

web::json::value ListDatabaseVolumeSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataDiskCapacityIsSet_) {
        val[utility::conversions::to_string_t("data_disk_capacity")] = ModelBase::toJson(dataDiskCapacity_);
    }
    if(dataDiskUsageIsSet_) {
        val[utility::conversions::to_string_t("data_disk_usage")] = ModelBase::toJson(dataDiskUsage_);
    }
    if(spaceUsageGrowthPerDayIsSet_) {
        val[utility::conversions::to_string_t("space_usage_growth_per_day")] = ModelBase::toJson(spaceUsageGrowthPerDay_);
    }
    if(estimatedRemainingDaysIsSet_) {
        val[utility::conversions::to_string_t("estimated_remaining_days")] = ModelBase::toJson(estimatedRemainingDays_);
    }
    if(cnComponentsIsSet_) {
        val[utility::conversions::to_string_t("cn_components")] = ModelBase::toJson(cnComponents_);
    }
    if(dnComponentsIsSet_) {
        val[utility::conversions::to_string_t("dn_components")] = ModelBase::toJson(dnComponents_);
    }

    return val;
}
bool ListDatabaseVolumeSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_disk_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_disk_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataDiskCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_disk_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_disk_usage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataDiskUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("space_usage_growth_per_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("space_usage_growth_per_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpaceUsageGrowthPerDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estimated_remaining_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estimated_remaining_days"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstimatedRemainingDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cn_components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_components"));
        if(!fieldValue.is_null())
        {
            std::vector<ComponentInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnComponents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dn_components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dn_components"));
        if(!fieldValue.is_null())
        {
            std::vector<ComponentInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnComponents(refVal);
        }
    }
    return ok;
}


std::string ListDatabaseVolumeSummaryResponse::getDataDiskCapacity() const
{
    return dataDiskCapacity_;
}

void ListDatabaseVolumeSummaryResponse::setDataDiskCapacity(const std::string& value)
{
    dataDiskCapacity_ = value;
    dataDiskCapacityIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::dataDiskCapacityIsSet() const
{
    return dataDiskCapacityIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetdataDiskCapacity()
{
    dataDiskCapacityIsSet_ = false;
}

std::string ListDatabaseVolumeSummaryResponse::getDataDiskUsage() const
{
    return dataDiskUsage_;
}

void ListDatabaseVolumeSummaryResponse::setDataDiskUsage(const std::string& value)
{
    dataDiskUsage_ = value;
    dataDiskUsageIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::dataDiskUsageIsSet() const
{
    return dataDiskUsageIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetdataDiskUsage()
{
    dataDiskUsageIsSet_ = false;
}

std::string ListDatabaseVolumeSummaryResponse::getSpaceUsageGrowthPerDay() const
{
    return spaceUsageGrowthPerDay_;
}

void ListDatabaseVolumeSummaryResponse::setSpaceUsageGrowthPerDay(const std::string& value)
{
    spaceUsageGrowthPerDay_ = value;
    spaceUsageGrowthPerDayIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::spaceUsageGrowthPerDayIsSet() const
{
    return spaceUsageGrowthPerDayIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetspaceUsageGrowthPerDay()
{
    spaceUsageGrowthPerDayIsSet_ = false;
}

std::string ListDatabaseVolumeSummaryResponse::getEstimatedRemainingDays() const
{
    return estimatedRemainingDays_;
}

void ListDatabaseVolumeSummaryResponse::setEstimatedRemainingDays(const std::string& value)
{
    estimatedRemainingDays_ = value;
    estimatedRemainingDaysIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::estimatedRemainingDaysIsSet() const
{
    return estimatedRemainingDaysIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetestimatedRemainingDays()
{
    estimatedRemainingDaysIsSet_ = false;
}

std::vector<ComponentInfoResult>& ListDatabaseVolumeSummaryResponse::getCnComponents()
{
    return cnComponents_;
}

void ListDatabaseVolumeSummaryResponse::setCnComponents(const std::vector<ComponentInfoResult>& value)
{
    cnComponents_ = value;
    cnComponentsIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::cnComponentsIsSet() const
{
    return cnComponentsIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetcnComponents()
{
    cnComponentsIsSet_ = false;
}

std::vector<ComponentInfoResult>& ListDatabaseVolumeSummaryResponse::getDnComponents()
{
    return dnComponents_;
}

void ListDatabaseVolumeSummaryResponse::setDnComponents(const std::vector<ComponentInfoResult>& value)
{
    dnComponents_ = value;
    dnComponentsIsSet_ = true;
}

bool ListDatabaseVolumeSummaryResponse::dnComponentsIsSet() const
{
    return dnComponentsIsSet_;
}

void ListDatabaseVolumeSummaryResponse::unsetdnComponents()
{
    dnComponentsIsSet_ = false;
}

}
}
}
}
}


