

#include "huaweicloud/rds/v3/model/FailoverStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




FailoverStrategyRequest::FailoverStrategyRequest()
{
    repairStrategy_ = "";
    repairStrategyIsSet_ = false;
}

FailoverStrategyRequest::~FailoverStrategyRequest() = default;

void FailoverStrategyRequest::validate()
{
}

web::json::value FailoverStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repairStrategyIsSet_) {
        val[utility::conversions::to_string_t("repairStrategy")] = ModelBase::toJson(repairStrategy_);
    }

    return val;
}
bool FailoverStrategyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repairStrategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repairStrategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepairStrategy(refVal);
        }
    }
    return ok;
}


std::string FailoverStrategyRequest::getRepairStrategy() const
{
    return repairStrategy_;
}

void FailoverStrategyRequest::setRepairStrategy(const std::string& value)
{
    repairStrategy_ = value;
    repairStrategyIsSet_ = true;
}

bool FailoverStrategyRequest::repairStrategyIsSet() const
{
    return repairStrategyIsSet_;
}

void FailoverStrategyRequest::unsetrepairStrategy()
{
    repairStrategyIsSet_ = false;
}

}
}
}
}
}


