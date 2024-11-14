

#include "huaweicloud/dds/v3/model/BatchUpgradeDatabaseVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




BatchUpgradeDatabaseVersionResponse::BatchUpgradeDatabaseVersionResponse()
{
    upgradeResultsIsSet_ = false;
}

BatchUpgradeDatabaseVersionResponse::~BatchUpgradeDatabaseVersionResponse() = default;

void BatchUpgradeDatabaseVersionResponse::validate()
{
}

web::json::value BatchUpgradeDatabaseVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeResultsIsSet_) {
        val[utility::conversions::to_string_t("upgrade_results")] = ModelBase::toJson(upgradeResults_);
    }

    return val;
}
bool BatchUpgradeDatabaseVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_results"));
        if(!fieldValue.is_null())
        {
            std::vector<UpgradeResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeResults(refVal);
        }
    }
    return ok;
}


std::vector<UpgradeResult>& BatchUpgradeDatabaseVersionResponse::getUpgradeResults()
{
    return upgradeResults_;
}

void BatchUpgradeDatabaseVersionResponse::setUpgradeResults(const std::vector<UpgradeResult>& value)
{
    upgradeResults_ = value;
    upgradeResultsIsSet_ = true;
}

bool BatchUpgradeDatabaseVersionResponse::upgradeResultsIsSet() const
{
    return upgradeResultsIsSet_;
}

void BatchUpgradeDatabaseVersionResponse::unsetupgradeResults()
{
    upgradeResultsIsSet_ = false;
}

}
}
}
}
}


