

#include "huaweicloud/projectman/v4/model/BatchBaselineIpdIssuesParam_attribute.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchBaselineIpdIssuesParam_attribute::BatchBaselineIpdIssuesParam_attribute()
{
    baseline_ = "";
    baselineIsSet_ = false;
}

BatchBaselineIpdIssuesParam_attribute::~BatchBaselineIpdIssuesParam_attribute() = default;

void BatchBaselineIpdIssuesParam_attribute::validate()
{
}

web::json::value BatchBaselineIpdIssuesParam_attribute::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }

    return val;
}
bool BatchBaselineIpdIssuesParam_attribute::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("baseline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseline(refVal);
        }
    }
    return ok;
}


std::string BatchBaselineIpdIssuesParam_attribute::getBaseline() const
{
    return baseline_;
}

void BatchBaselineIpdIssuesParam_attribute::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool BatchBaselineIpdIssuesParam_attribute::baselineIsSet() const
{
    return baselineIsSet_;
}

void BatchBaselineIpdIssuesParam_attribute::unsetbaseline()
{
    baselineIsSet_ = false;
}

}
}
}
}
}


