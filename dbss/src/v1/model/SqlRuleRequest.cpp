

#include "huaweicloud/dbss/v1/model/SqlRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SqlRuleRequest::SqlRuleRequest()
{
    riskLevels_ = "";
    riskLevelsIsSet_ = false;
}

SqlRuleRequest::~SqlRuleRequest() = default;

void SqlRuleRequest::validate()
{
}

web::json::value SqlRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(riskLevelsIsSet_) {
        val[utility::conversions::to_string_t("risk_levels")] = ModelBase::toJson(riskLevels_);
    }

    return val;
}
bool SqlRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("risk_levels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_levels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevels(refVal);
        }
    }
    return ok;
}


std::string SqlRuleRequest::getRiskLevels() const
{
    return riskLevels_;
}

void SqlRuleRequest::setRiskLevels(const std::string& value)
{
    riskLevels_ = value;
    riskLevelsIsSet_ = true;
}

bool SqlRuleRequest::riskLevelsIsSet() const
{
    return riskLevelsIsSet_;
}

void SqlRuleRequest::unsetriskLevels()
{
    riskLevelsIsSet_ = false;
}

}
}
}
}
}


