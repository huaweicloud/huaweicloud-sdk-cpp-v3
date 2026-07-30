

#include "huaweicloud/modelarts/v1/model/PoolSpecModel_containernetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PoolSpecModel_containernetwork::PoolSpecModel_containernetwork()
{
    mode_ = "";
    modeIsSet_ = false;
}

PoolSpecModel_containernetwork::~PoolSpecModel_containernetwork() = default;

void PoolSpecModel_containernetwork::validate()
{
}

web::json::value PoolSpecModel_containernetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool PoolSpecModel_containernetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string PoolSpecModel_containernetwork::getMode() const
{
    return mode_;
}

void PoolSpecModel_containernetwork::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool PoolSpecModel_containernetwork::modeIsSet() const
{
    return modeIsSet_;
}

void PoolSpecModel_containernetwork::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


