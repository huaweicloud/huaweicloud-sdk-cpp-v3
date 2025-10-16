

#include "huaweicloud/cpcs/v1/model/ShowStatusClusterItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowStatusClusterItem::ShowStatusClusterItem()
{
    successRate_ = 0.0;
    successRateIsSet_ = false;
    failRate_ = 0.0;
    failRateIsSet_ = false;
    successCount_ = 0L;
    successCountIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    averageValue_ = 0.0;
    averageValueIsSet_ = false;
    totalValue_ = 0.0;
    totalValueIsSet_ = false;
    limit_ = false;
    limitIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
}

ShowStatusClusterItem::~ShowStatusClusterItem() = default;

void ShowStatusClusterItem::validate()
{
}

web::json::value ShowStatusClusterItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successRateIsSet_) {
        val[utility::conversions::to_string_t("success_rate")] = ModelBase::toJson(successRate_);
    }
    if(failRateIsSet_) {
        val[utility::conversions::to_string_t("fail_rate")] = ModelBase::toJson(failRate_);
    }
    if(successCountIsSet_) {
        val[utility::conversions::to_string_t("success_count")] = ModelBase::toJson(successCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(averageValueIsSet_) {
        val[utility::conversions::to_string_t("average_value")] = ModelBase::toJson(averageValue_);
    }
    if(totalValueIsSet_) {
        val[utility::conversions::to_string_t("total_value")] = ModelBase::toJson(totalValue_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }

    return val;
}
bool ShowStatusClusterItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("success_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccessCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    return ok;
}


double ShowStatusClusterItem::getSuccessRate() const
{
    return successRate_;
}

void ShowStatusClusterItem::setSuccessRate(double value)
{
    successRate_ = value;
    successRateIsSet_ = true;
}

bool ShowStatusClusterItem::successRateIsSet() const
{
    return successRateIsSet_;
}

void ShowStatusClusterItem::unsetsuccessRate()
{
    successRateIsSet_ = false;
}

double ShowStatusClusterItem::getFailRate() const
{
    return failRate_;
}

void ShowStatusClusterItem::setFailRate(double value)
{
    failRate_ = value;
    failRateIsSet_ = true;
}

bool ShowStatusClusterItem::failRateIsSet() const
{
    return failRateIsSet_;
}

void ShowStatusClusterItem::unsetfailRate()
{
    failRateIsSet_ = false;
}

int64_t ShowStatusClusterItem::getSuccessCount() const
{
    return successCount_;
}

void ShowStatusClusterItem::setSuccessCount(int64_t value)
{
    successCount_ = value;
    successCountIsSet_ = true;
}

bool ShowStatusClusterItem::successCountIsSet() const
{
    return successCountIsSet_;
}

void ShowStatusClusterItem::unsetsuccessCount()
{
    successCountIsSet_ = false;
}

int64_t ShowStatusClusterItem::getTotalCount() const
{
    return totalCount_;
}

void ShowStatusClusterItem::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowStatusClusterItem::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowStatusClusterItem::unsettotalCount()
{
    totalCountIsSet_ = false;
}

double ShowStatusClusterItem::getAverageValue() const
{
    return averageValue_;
}

void ShowStatusClusterItem::setAverageValue(double value)
{
    averageValue_ = value;
    averageValueIsSet_ = true;
}

bool ShowStatusClusterItem::averageValueIsSet() const
{
    return averageValueIsSet_;
}

void ShowStatusClusterItem::unsetaverageValue()
{
    averageValueIsSet_ = false;
}

double ShowStatusClusterItem::getTotalValue() const
{
    return totalValue_;
}

void ShowStatusClusterItem::setTotalValue(double value)
{
    totalValue_ = value;
    totalValueIsSet_ = true;
}

bool ShowStatusClusterItem::totalValueIsSet() const
{
    return totalValueIsSet_;
}

void ShowStatusClusterItem::unsettotalValue()
{
    totalValueIsSet_ = false;
}

bool ShowStatusClusterItem::isLimit() const
{
    return limit_;
}

void ShowStatusClusterItem::setLimit(bool value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowStatusClusterItem::limitIsSet() const
{
    return limitIsSet_;
}

void ShowStatusClusterItem::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowStatusClusterItem::getClusterId() const
{
    return clusterId_;
}

void ShowStatusClusterItem::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowStatusClusterItem::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowStatusClusterItem::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowStatusClusterItem::getClusterName() const
{
    return clusterName_;
}

void ShowStatusClusterItem::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool ShowStatusClusterItem::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void ShowStatusClusterItem::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

}
}
}
}
}


