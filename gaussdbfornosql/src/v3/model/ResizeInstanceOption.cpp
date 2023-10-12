

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeInstanceOption::ResizeInstanceOption()
{
    targetSpecCode_ = "";
    targetSpecCodeIsSet_ = false;
}

ResizeInstanceOption::~ResizeInstanceOption() = default;

void ResizeInstanceOption::validate()
{
}

web::json::value ResizeInstanceOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("target_spec_code")] = ModelBase::toJson(targetSpecCode_);
    }

    return val;
}
bool ResizeInstanceOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSpecCode(refVal);
        }
    }
    return ok;
}


std::string ResizeInstanceOption::getTargetSpecCode() const
{
    return targetSpecCode_;
}

void ResizeInstanceOption::setTargetSpecCode(const std::string& value)
{
    targetSpecCode_ = value;
    targetSpecCodeIsSet_ = true;
}

bool ResizeInstanceOption::targetSpecCodeIsSet() const
{
    return targetSpecCodeIsSet_;
}

void ResizeInstanceOption::unsettargetSpecCode()
{
    targetSpecCodeIsSet_ = false;
}

}
}
}
}
}


