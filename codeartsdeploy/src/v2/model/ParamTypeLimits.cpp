

#include "huaweicloud/codeartsdeploy/v2/model/ParamTypeLimits.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ParamTypeLimits::ParamTypeLimits()
{
    name_ = "";
    nameIsSet_ = false;
}

ParamTypeLimits::~ParamTypeLimits() = default;

void ParamTypeLimits::validate()
{
}

web::json::value ParamTypeLimits::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool ParamTypeLimits::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}

std::string ParamTypeLimits::getName() const
{
    return name_;
}

void ParamTypeLimits::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamTypeLimits::nameIsSet() const
{
    return nameIsSet_;
}

void ParamTypeLimits::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


