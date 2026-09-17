

#include "huaweicloud/projectman/v4/model/BaseLineVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BaseLineVO::BaseLineVO()
{
    baseline_ = "";
    baselineIsSet_ = false;
}

BaseLineVO::~BaseLineVO() = default;

void BaseLineVO::validate()
{
}

web::json::value BaseLineVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baselineIsSet_) {
        val[utility::conversions::to_string_t("baseline")] = ModelBase::toJson(baseline_);
    }

    return val;
}
bool BaseLineVO::fromJson(const web::json::value& val)
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


std::string BaseLineVO::getBaseline() const
{
    return baseline_;
}

void BaseLineVO::setBaseline(const std::string& value)
{
    baseline_ = value;
    baselineIsSet_ = true;
}

bool BaseLineVO::baselineIsSet() const
{
    return baselineIsSet_;
}

void BaseLineVO::unsetbaseline()
{
    baselineIsSet_ = false;
}

}
}
}
}
}


