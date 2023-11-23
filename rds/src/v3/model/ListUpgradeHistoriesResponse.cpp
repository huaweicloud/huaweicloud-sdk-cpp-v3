

#include "huaweicloud/rds/v3/model/ListUpgradeHistoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListUpgradeHistoriesResponse::ListUpgradeHistoriesResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    upgradeReportsIsSet_ = false;
}

ListUpgradeHistoriesResponse::~ListUpgradeHistoriesResponse() = default;

void ListUpgradeHistoriesResponse::validate()
{
}

web::json::value ListUpgradeHistoriesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(upgradeReportsIsSet_) {
        val[utility::conversions::to_string_t("upgrade_reports")] = ModelBase::toJson(upgradeReports_);
    }

    return val;
}
bool ListUpgradeHistoriesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_reports"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_reports"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeReports> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeReports(refVal);
        }
    }
    return ok;
}


int32_t ListUpgradeHistoriesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListUpgradeHistoriesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListUpgradeHistoriesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListUpgradeHistoriesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<UpgradeReports>& ListUpgradeHistoriesResponse::getUpgradeReports()
{
    return upgradeReports_;
}

void ListUpgradeHistoriesResponse::setUpgradeReports(const std::vector<UpgradeReports>& value)
{
    upgradeReports_ = value;
    upgradeReportsIsSet_ = true;
}

bool ListUpgradeHistoriesResponse::upgradeReportsIsSet() const
{
    return upgradeReportsIsSet_;
}

void ListUpgradeHistoriesResponse::unsetupgradeReports()
{
    upgradeReportsIsSet_ = false;
}

}
}
}
}
}


