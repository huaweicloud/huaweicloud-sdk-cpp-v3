

#include "huaweicloud/dds/v3/model/ShowUpgradeDurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowUpgradeDurationResponse::ShowUpgradeDurationResponse()
{
    strategiesIsSet_ = false;
}

ShowUpgradeDurationResponse::~ShowUpgradeDurationResponse() = default;

void ShowUpgradeDurationResponse::validate()
{
}

web::json::value ShowUpgradeDurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(strategiesIsSet_) {
        val[utility::conversions::to_string_t("strategies")] = ModelBase::toJson(strategies_);
    }

    return val;
}
bool ShowUpgradeDurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("strategies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategies"));
        if(!fieldValue.is_null())
        {
            std::vector<DurationStrategies> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategies(refVal);
        }
    }
    return ok;
}


std::vector<DurationStrategies>& ShowUpgradeDurationResponse::getStrategies()
{
    return strategies_;
}

void ShowUpgradeDurationResponse::setStrategies(const std::vector<DurationStrategies>& value)
{
    strategies_ = value;
    strategiesIsSet_ = true;
}

bool ShowUpgradeDurationResponse::strategiesIsSet() const
{
    return strategiesIsSet_;
}

void ShowUpgradeDurationResponse::unsetstrategies()
{
    strategiesIsSet_ = false;
}

}
}
}
}
}


