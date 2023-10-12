

#include "huaweicloud/vpc/v2/model/ExtraDhcpOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ExtraDhcpOption::ExtraDhcpOption()
{
    optName_ = "";
    optNameIsSet_ = false;
    optValue_ = "";
    optValueIsSet_ = false;
}

ExtraDhcpOption::~ExtraDhcpOption() = default;

void ExtraDhcpOption::validate()
{
}

web::json::value ExtraDhcpOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(optNameIsSet_) {
        val[utility::conversions::to_string_t("opt_name")] = ModelBase::toJson(optName_);
    }
    if(optValueIsSet_) {
        val[utility::conversions::to_string_t("opt_value")] = ModelBase::toJson(optValue_);
    }

    return val;
}
bool ExtraDhcpOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("opt_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opt_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("opt_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("opt_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptValue(refVal);
        }
    }
    return ok;
}


std::string ExtraDhcpOption::getOptName() const
{
    return optName_;
}

void ExtraDhcpOption::setOptName(const std::string& value)
{
    optName_ = value;
    optNameIsSet_ = true;
}

bool ExtraDhcpOption::optNameIsSet() const
{
    return optNameIsSet_;
}

void ExtraDhcpOption::unsetoptName()
{
    optNameIsSet_ = false;
}

std::string ExtraDhcpOption::getOptValue() const
{
    return optValue_;
}

void ExtraDhcpOption::setOptValue(const std::string& value)
{
    optValue_ = value;
    optValueIsSet_ = true;
}

bool ExtraDhcpOption::optValueIsSet() const
{
    return optValueIsSet_;
}

void ExtraDhcpOption::unsetoptValue()
{
    optValueIsSet_ = false;
}

}
}
}
}
}


