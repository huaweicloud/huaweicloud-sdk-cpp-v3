

#include "huaweicloud/vpc/v2/model/ExtraDhcpOpt.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ExtraDhcpOpt::ExtraDhcpOpt()
{
    optName_ = "";
    optNameIsSet_ = false;
    optValue_ = "";
    optValueIsSet_ = false;
}

ExtraDhcpOpt::~ExtraDhcpOpt() = default;

void ExtraDhcpOpt::validate()
{
}

web::json::value ExtraDhcpOpt::toJson() const
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

bool ExtraDhcpOpt::fromJson(const web::json::value& val)
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

std::string ExtraDhcpOpt::getOptName() const
{
    return optName_;
}

void ExtraDhcpOpt::setOptName(const std::string& value)
{
    optName_ = value;
    optNameIsSet_ = true;
}

bool ExtraDhcpOpt::optNameIsSet() const
{
    return optNameIsSet_;
}

void ExtraDhcpOpt::unsetoptName()
{
    optNameIsSet_ = false;
}

std::string ExtraDhcpOpt::getOptValue() const
{
    return optValue_;
}

void ExtraDhcpOpt::setOptValue(const std::string& value)
{
    optValue_ = value;
    optValueIsSet_ = true;
}

bool ExtraDhcpOpt::optValueIsSet() const
{
    return optValueIsSet_;
}

void ExtraDhcpOpt::unsetoptValue()
{
    optValueIsSet_ = false;
}

}
}
}
}
}


